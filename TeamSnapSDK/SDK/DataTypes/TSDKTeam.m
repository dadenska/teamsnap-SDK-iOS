//
// Created by Jason Rahaim on 1/29/15.
// Copyright (c) 2015 TeamSnap. All rights reserved.
//

#import "TSDKTeam.h"
#import "TSDKObjectsRequest.h"
#import "TSDKProfileTimer.h"
#import "TSDKEvent.h"
#import "TSDKMember.h"
#import "TSDKContact.h"
#import "TSDKTeamSnap.h"
#import "TSDKPlan.h"
#import "TSDKTeamResults.h"
#import "TSDKTeamPreferences.h"
#import "TSDKLocation.h"
#import "TSDKOpponent.h"
#import "TSDKCustomField.h"
#import "TSDKCustomDatum.h"
#import "TSDKUser.h"

#import "NSMutableDictionary+integerKey.h"
#import "NSMutableDictionary+refreshCollectionData.h"

@interface TSDKTeam()

@end

@implementation TSDKTeam {
    
}

@dynamic sportId, leagueUrl, isInLeague, hasReachedRosterLimit, canExportMedia, timeZoneOffset, locationLatitude, updatedAt, hasExportableMedia, lastAccessedAt, timeZoneIanaName, locationPostalCode, name, locationLongitude, planId, leagueName, timeZoneDescription, rosterLimit, seasonName, locationCountry, mediaStorageUsed, divisionName, humanizedMediaStorageUsed, createdAt, billedAt, isArchivedSeason, isRetired, linkTeamMediaGroups, linkContactEmailAddresses, linkDivisionContactEmailAddresses, linkMembersPreferences, linkAvailabilities, linkForumTopics, linkOwner, linkDivisionMembersPreferences, linkTeamMediumComments, linkForumSubscriptions, linkEvents, linkTeamPaypalPreferences, linkForumPosts, linkTeamMedia, linkCalendarWebcal, linkSport, linkContacts, linkMembersCsvExport, linkTrackedItemStatuses, linkDivisionContacts, linkManagers, linkLeagueRegistrantDocuments, linkStatisticAggregates, linkDivisionLocations, linkOpponents, linkCalendarHttpGamesOnly, linkCustomData, linkDivisionContactPhoneNumbers, linkTeamPreferences, linkCalendarHttp, linkDivisionTeamStandings, linkPaymentNotes, linkPlan, linkTeamFees, linkEventsOverview, linkMemberPhoneNumbers, linkMemberLinks, linkDivisionMembers, linkBroadcastEmailAttachments, linkTeamStatistics, linkMemberEmailAddresses, linkMembers, linkStatistics, linkSponsors, linkMemberBalances, linkStatisticGroups, linkMemberStatistics, linkOpponentsResults, linkPaypalCurrency, linkTrackedItems, linkAssignments, linkTeamResults, linkLeagueCustomData, linkContactPhoneNumbers, linkMessageData, linkMemberFiles, linkMemberPayments, linkDivisionMemberPhoneNumbers, linkDivisionMemberEmailAddresses, linkLeagueCustomFields, linkMessages, linkLocations, linkCustomFields, linkStatisticData, linkBroadcastEmails, linkEventsCsvExport, linkCalendarWebcalGamesOnly, linkEventStatistics, linkTeamPublicSite, linkBroadcastAlerts, linkMemberPhotos, linkTeamPhotos, linkTeamLogoPhotoFile;

+ (NSString *)SDKType {
    return @"team";
}

+(void)actionUpdateTimeZone:(NSTimeZone *)timeZone offsetEventTimes:(BOOL)offsetEventTimes forTeam:(TSDKTeam *)team withConfiguration:(TSDKRequestConfiguration *)configuration completion:(TSDKCompletionBlock)completion {
    TSDKCollectionCommand *command = [TSDKTeam commandForKey:@"update_time_zone"];
    command.data[@"team_id"] = [NSNumber numberWithInteger:team.objectIdentifier];
    command.data[@"offset_team_times"] = [NSNumber numberWithBool:offsetEventTimes];
    command.data[@"time_zone"] = timeZone.name;
    [command executeWithCompletion:^(BOOL success, BOOL complete, TSDKCollectionJSON *objects, NSError *error) {
        if (completion) {
            completion(success, complete, objects, error);
        }
    }];
}

- (void)updateTimeZone:(NSTimeZone *)timeZone offsetEventTimes:(BOOL)offsetEventTimes withConfiguration:(TSDKRequestConfiguration *)configuration completion:(TSDKCompletionBlock)completion {
    [self setTimeZone:timeZone];
    [TSDKTeam actionUpdateTimeZone:timeZone offsetEventTimes:offsetEventTimes forTeam:self withConfiguration:configuration completion:completion];
}

+ (void)actionImportMembers:(NSArray <TSDKMember *> *)members destinationTeamId:(NSInteger)destinationTeamId sendInvites:(BOOL)sendInvites completion:(TSDKArrayCompletionBlock)completion {
    TSDKCollectionCommand *command = [TSDKMember commandForKey:@"import_from_team"];
    command.data[@"destination_team_id"] = [NSString stringWithFormat:@"%ld", (long)destinationTeamId];
    
    NSMutableArray *arrayOfMemberIds = [[NSMutableArray alloc] initWithCapacity:members.count];
    for(TSDKMember *member in members) {
        [arrayOfMemberIds addObject:[NSString stringWithFormat:@"%ld", (long)member.objectIdentifier]];
    }
    
    command.data[@"source_member_ids"] = [arrayOfMemberIds componentsJoinedByString:@","];;
    if(sendInvites) {
        command.data[@"send_invites"] = @"true";
    } else {
        command.data[@"send_invites"] = @"false";
    }
    
    [command executeWithCompletion:^(BOOL success, BOOL complete, TSDKCollectionJSON * _Nullable objects, NSError * _Nullable error) {
        NSArray *result = nil;
        if (success) {
            if ([[objects collection] isKindOfClass:[NSArray class]]) {
                result = [TSDKObjectsRequest SDKObjectsFromCollection:objects];
            }
        }
        if (completion) {
            completion(success, complete, result, error);
        }
    }];
}

- (void)actionImportMembersToTeam:(NSArray <TSDKMember *> *)members sendInvites:(BOOL)sendInvites completion:(TSDKArrayCompletionBlock)completion {
    [TSDKTeam actionImportMembers:members destinationTeamId:self.objectIdentifier sendInvites:sendInvites completion:completion];
}

+ (void)actionInviteMembersOrContacts:(NSArray <TSDKCollectionObject<TSDKMemberOrContactProtocol> *> *)membersOrContacts teamId:(NSInteger)teamId asMemberId:(NSInteger)asMemberId completion:(TSDKSimpleCompletionBlock)completion {
    TSDKCollectionCommand *command = [TSDKTeam commandForKey:@"invite"];
    command.data[@"team_id"] = [NSNumber numberWithInteger:teamId];
    
    NSMutableArray *arrayOfMemberIds = [[NSMutableArray alloc] initWithCapacity:membersOrContacts.count];
    NSMutableArray *arrayOfContactIds = [[NSMutableArray alloc] initWithCapacity:membersOrContacts.count];
    
    for(TSDKCollectionObject<TSDKMemberOrContactProtocol> *memberOrContact in membersOrContacts) {
        if([memberOrContact isKindOfClass:[TSDKMember class]]) {
            [arrayOfMemberIds addObject:[NSNumber numberWithInteger:memberOrContact.objectIdentifier]];
        } else if([memberOrContact isKindOfClass:[TSDKContact class]]) {
            [arrayOfContactIds addObject:[NSNumber numberWithInteger:memberOrContact.objectIdentifier]];
        }
    }
    if(arrayOfMemberIds.count) {
        command.data[@"member_id"] = arrayOfMemberIds;
    }
    if(arrayOfContactIds.count) {
        command.data[@"contact_id"] = arrayOfContactIds;
    }
    command.data[@"notify_as_member_id"] = [NSNumber numberWithInteger:asMemberId];
    
    [command executeWithCompletion:^(BOOL success, BOOL complete, TSDKCollectionJSON * _Nullable objects, NSError * _Nullable error) {
        if (completion) {
            completion(success, error);
        }
    }];
}


- (void)actionInviteMembersOrContacts:(NSArray <TSDKCollectionObject<TSDKMemberOrContactProtocol> *> *)membersOrContacts asMemberId:(NSInteger)asMemberId completion:(TSDKSimpleCompletionBlock)completion {
    [TSDKTeam actionInviteMembersOrContacts:membersOrContacts teamId:self.objectIdentifier asMemberId:asMemberId completion:completion];
}

- (void)saveWithCompletion:(TSDKSaveCompletionBlock)completion{
    BOOL isNewTeam = self.isNewObject;
    
    [super saveWithCompletion:^(BOOL success, TSDKCollectionObject *saved, NSError *error) {
        if (isNewTeam) {
            if (success) {
                [[[TSDKTeamSnap sharedInstance] teamSnapUser] getPersonasWithConfiguration:nil completion:^(BOOL success, BOOL complete, NSArray *objects, NSError *error) {
                    if (completion) {
                        completion(success, saved, error);
                    }
                }];
            } else {
                if (completion) {
                    completion(success, saved, error);
                }
            }
        } else {
            if (completion) {
                completion(success, saved, error);
            }
        }
    }];
}

- (instancetype)initWithName:(NSString *)name locationCountry:(NSString *)locationCountry locationPostalCode:(NSString *)locationPostalCode ianaTimeZoneName:(NSString *)ianaTimeZoneName sportId:(NSInteger)sportId {
    self = [self init];
    if (self) {
        [super setString:name forKey:@"name"];
        [super setString:locationCountry forKey:@"location_country"];
        [super setString:locationPostalCode forKey:@"location_postal_code"];
        [super setString:ianaTimeZoneName forKey:@"time_zone_iana_name"];
        [super setString:ianaTimeZoneName forKey:@"time_zone"];
        [super setInteger:sportId forKey:@"sport_id"];
    }
    return self;
}

- (void)setTimeZone:(NSTimeZone *)timeZone {
    [self setTimeZoneIanaName:timeZone.name];
}

- (void)setTimeZoneIanaName:(NSString *)timeZoneIanaName {
    [self setString:timeZoneIanaName forKey:@"time_zone_iana_name"];
    self.collection.data[@"time_zone"] = timeZoneIanaName;
    [self.changedValues setObject:[NSNull null] forKey:@"time_zone"];
}

- (NSTimeZone *)timeZone {
    return [NSTimeZone timeZoneWithName:self.timeZoneIanaName];
}

- (void)bulkLoadDataWithTypes:(NSArray *)dataTypes withConfiguration:(TSDKRequestConfiguration *)configuration completion:(TSDKArrayCompletionBlock)completion {
    if (dataTypes.count>0) {
        [TSDKObjectsRequest bulkLoadTeamData:self types:dataTypes completion:^(BOOL success, BOOL complete, NSArray *objects, NSError *error) {
            if (completion) {
                completion(success, complete, objects, error);
            }
        }];
    } else {
        if (completion) {
            completion(NO, NO, [NSArray array], nil);
        }
    }
}

- (void)getEventsInDateRange:(NSDate *)startDate endDate:(NSDate *)endDate withConfiguration:(TSDKRequestConfiguration *)configuration completion:(TSDKEventArrayCompletionBlock)completion {
    
    [TSDKObjectsRequest listEventsForTeam:self startDate:(NSDate *)startDate endDate:(NSDate *)endDate completion:^(BOOL success, BOOL complete, NSArray *objects, NSError *error) {
        if (completion) {
            completion(success, complete, objects, error);
        }
    }];
}

- (void)getEventWithId:(NSInteger)eventId withConfiguration:(TSDKRequestConfiguration *)configuration completion:(TSDKEventArrayCompletionBlock)completion {
    NSDictionary *searchParams = @{@"id": [NSNumber numberWithInteger:eventId]};
    
    [self arrayFromLink:self.linkEvents searchParams:searchParams withConfiguration:configuration completion:completion];
}

- (void)encodeWithCoder:(NSCoder *)coder {
    [super encodeWithCoder:coder];
}

-(void)getMessagesWithConfiguration:(TSDKRequestConfiguration *)configuration type:(TSDKMessageType)type completion:(TSDKMessagesArrayCompletionBlock)completion {
    
    NSDictionary *searchParams;
    if(type == TSDKMessageTypeAlert) {
        searchParams = @{@"message_type": @"alert"};
    } else if(type == TSDKMessageTypeEmail) {
        searchParams = @{@"message_type": @"email"};
    }
    
    [self arrayFromLink:self.linkMessages searchParams:searchParams withConfiguration:configuration completion:completion];
}

- (void)getMemberPhotosForWidth:(NSInteger)width height:(NSInteger)height cropToFit:(BOOL)fitCrop configuration:(TSDKRequestConfiguration *)configuration completion:(TSDKMemberPhotoArrayCompletionBlock)completion {
    
    NSString *cropString = @"fill";
    if (fitCrop) {
        cropString = @"fit";
    }
    NSDictionary *sizeParameterDictionary = @{@"height":[NSNumber numberWithInteger:height],
                                              @"width":[NSNumber numberWithInteger:height],
                                              @"crop":cropString};
    
    [self arrayFromLink:self.linkMemberPhotos searchParams:sizeParameterDictionary withConfiguration:configuration completion:^(BOOL success, BOOL complete, NSArray * _Nullable objects, NSError * _Nullable error) {
        if (completion) {
            completion(success, complete, objects, error);
        }
    }];
}

- (NSURL * _Nullable)teamLogoForWidth:(NSInteger)width height:(NSInteger)height {
    NSURLQueryItem *widthQueryItem = [NSURLQueryItem queryItemWithName:@"width" value:[NSString stringWithFormat:@"%ld", (long)width]];
    NSURLQueryItem *heightQueryItem = [NSURLQueryItem queryItemWithName:@"height" value:[NSString stringWithFormat:@"%ld", (long)height]];
    NSURLQueryItem *cropQueryItem = [NSURLQueryItem queryItemWithName:@"crop" value:@"fill"];
    NSURLComponents *fullySpecifiedURL = [NSURLComponents componentsWithURL:self.linkTeamLogoPhotoFile resolvingAgainstBaseURL:NO];
    NSMutableArray *queryItems = [[NSMutableArray alloc] init];
    [queryItems addObjectsFromArray:fullySpecifiedURL.queryItems];
    [queryItems addObjectsFromArray:@[widthQueryItem, heightQueryItem, cropQueryItem]];
    fullySpecifiedURL.queryItems = queryItems;
    return fullySpecifiedURL.URL;
}

- (id)copyWithZone:(nullable NSZone *)zone {
    id copy = [[[self class] allocWithZone:zone] init];
    
    if (copy) {
        [copy setCollection:[[self collection] copy]];
    }
    
    return copy;
}

@end
