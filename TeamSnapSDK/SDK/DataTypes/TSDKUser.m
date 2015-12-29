//
// Created by Jason Rahaim on 1/29/15.
// Copyright (c) 2015 TeamSnap. All rights reserved.
//

#import "TSDKUser.h"
#import "TSDKObjectsRequest.h"
#import "TSDKMember.h"
#import "TSDKTeamPreferences.h"
#import "TSDKTeam.h"
#import "TSDKPlan.h"
#import "TSDKTeamResults.h"
#import "NSMutableDictionary+integerKey.h"

@interface TSDKUser()

@property (strong, nonatomic) NSMutableArray *myMembersOnTeams;
@property (strong, nonatomic) NSDictionary *teams;

@end

@implementation TSDKUser {

}

@dynamic teamsCount, facebookId, receivesNewsletter, createdAt, addressState, birthday, firstName, facebookAccessToken, updatedAt, lastName, email, addressCountry, isAdmin, linkTeamsPreferences, linkPersonas, linkFacebookPages, linkTeams, linkMembers, linkActiveTeams;

+ (NSString *)SDKType {
    return @"user";
}

- (NSMutableArray *)myMembersOnTeams {
    if (!_myMembersOnTeams) {
        _myMembersOnTeams = [[NSMutableArray alloc] init];
    }
    return _myMembersOnTeams;
}

- (void)addMember:(TSDKMember *)newMember {
    NSUInteger existingMember = [self.myMembersOnTeams indexOfObjectPassingTest:^BOOL(TSDKMember  *member, NSUInteger idx, BOOL * _Nonnull stop) {
        return (member.objectIdentifier == newMember.objectIdentifier);
    }];
    
    if (existingMember != NSNotFound) {
        [self.myMembersOnTeams removeObjectAtIndex:existingMember];
    }
    [self.myMembersOnTeams addObject:newMember];
}

- (void)myMembersOnTeamsWithCompletion:(TSDKArrayCompletionBlock)completion {
    if (_myMembersOnTeams) {
        if (completion) {
            completion(YES, YES, _myMembersOnTeams, nil);
        }
    } else {
        __typeof__(self) __weak weakSelf = self;
        [self getPersonasWithCompletion:^(BOOL success, BOOL complete, NSArray *objects, NSError *error) {
            for (TSDKMember *member in objects) {
                [weakSelf addMember:member];
            }
            if (completion) {
                completion(success, complete, weakSelf.myMembersOnTeams, nil);
            }
        }];
    }
}

- (void)myMembersOnTeamId:(NSInteger)teamId withCompletion:(TSDKArrayCompletionBlock)completion {
    [self myMembersOnTeamsWithCompletion:^(BOOL success, BOOL complete, NSArray *objects, NSError *error) {
        NSArray *resultMembers = nil;
        if (success) {
            NSIndexSet *memberIndexes = [objects indexesOfObjectsPassingTest:^BOOL(TSDKMember *member, NSUInteger idx, BOOL * _Nonnull stop) {
                return (member.teamId == teamId);
            }];
            resultMembers = [objects objectsAtIndexes:memberIndexes];

        }
        if (completion) {
            completion(success, complete, resultMembers, error);
        }
    }];
}

- (void)teamsWithCompletion:(TSDKArrayCompletionBlock)completion {
    [TSDKObjectsRequest listTeamsForUser:self WithCompletion:^(BOOL success, BOOL complete, NSArray *objects, NSError *error) {
        if (completion) {
            completion(success, complete, objects, error);
        }
    }];
}

- (void)TeamsWithIDs:(NSArray *)teamIds completion:(TSDKArrayCompletionBlock)completion {
    [TSDKObjectsRequest listTeams:teamIds WithCompletion:^(BOOL success, BOOL complete, NSArray *objects, NSError *error) {
        if (completion) {
            completion(success, complete, objects, error);
        }
    }];
}

- (void)bulkLoadDataTypes:(NSArray *)objectDataTypes forTeamIds:(NSArray *)teamIds WithCompletion:(TSDKArrayCompletionBlock)completion {
    [TSDKObjectsRequest bulkLoadTeamDataForTeamIds:teamIds types:objectDataTypes completion:^(BOOL success, BOOL complete, NSArray *objects, NSError *error) {
        if (completion) {
            completion(success, complete, objects, error);
        }
    }];
}

- (void)bulkLoadDataTypes:(NSArray *)objectDataTypes WithCompletion:(TSDKArrayCompletionBlock)completion {
    __typeof__(self) __weak weakSelf = self;
    
    [self myMembersOnTeamsWithCompletion:^(BOOL success, BOOL complete, NSArray *objects, NSError *error) {
        NSMutableArray *teamIds = [[NSMutableArray alloc] init];
        for (TSDKMember *member in objects) {
            NSString *teamId = [NSString stringWithFormat:@"%ld", (long)member.teamId];
            
            if (![teamIds containsObject:teamId]) {
                [teamIds addObject:[NSString stringWithFormat:@"%ld", (long)[teamId integerValue]]];
            }
        }
        [TSDKObjectsRequest bulkLoadTeamDataForTeamIds:teamIds types:objectDataTypes completion:^(BOOL success, BOOL complete, NSArray *objects, NSError *error) {
            NSMutableDictionary *teams = [[NSMutableDictionary alloc] init];
            if(success) {
                for (TSDKCollectionObject *object in objects) {
                    if ([object isKindOfClass:[TSDKTeam class]]) {
                        [teams setObject:object forIntegerKey:object.objectIdentifier];
                    }
                }
            }
            if (teams.count > 0) {
                weakSelf.teams = [NSDictionary dictionaryWithDictionary:teams];
            }
            if (completion) {
                completion(success, complete, objects, error);
            }
        }];
        
    }];

}

- (void)loadTeamOverviewForMyTeamsWithCompletion:(TSDKArrayCompletionBlock)completion {
    [self bulkLoadDataTypes:@[[TSDKTeam class], [TSDKTeamPreferences class], [TSDKTeamResults class], [TSDKPlan class]] WithCompletion:^(BOOL success, BOOL complete, NSArray *objects, NSError *error) {
        
        NSIndexSet *indexes = [objects indexesOfObjectsPassingTest:^BOOL(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
            return [obj isKindOfClass:[TSDKTeam class]];
        }];
        
        NSArray *teams = [objects objectsAtIndexes:indexes];
        if (completion) {
            completion(success, complete, teams, error);
        }
    }];
}

- (BOOL)processBulkLoadedObject:(TSDKCollectionObject *)bulkObject {
    BOOL lProcessed = NO;
    if ([bulkObject isKindOfClass:[TSDKMember class]]) {
        lProcessed = YES;
        [self addMember:(TSDKMember *)bulkObject];
    }
    
    return lProcessed;
}


@end