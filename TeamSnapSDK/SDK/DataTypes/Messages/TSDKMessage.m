//
//  TSDKMessage.m
//  TeamSnapSDK
//
//  Created by Skyler Seamans on 3/9/16.
//  Copyright © 2016 teamsnap. All rights reserved.
//

#import "TSDKMessage.h"
#import "TSDKMember.h"

@implementation TSDKMessage

@dynamic status, memberId, userId, updatedAt, subject, senderType, recipientNames, flags, body, pushed, contactId, messageId, emailed, readAt, senderName, recipients, createdAt, smsed, divisionId, senderId, teamId, linkMember, linkSender, linkDivision, linkTeam, linkUser;

+ (NSString *)SDKType {
    return @"message";
}

+ (void)actionMarkMessageAsRead:(TSDKMessage *)message completion:(TSDKCompletionBlock)completion {    
    TSDKCollectionCommand *command = [[TSDKMessage commands] objectForKey:@"mark_message_as_read"];
    command.data[@"id"] = [NSNumber numberWithInteger:message.objectIdentifier];
    
    [command executeWithCompletion:^(BOOL success, BOOL complete, TSDKCollectionJSON *objects, NSError *error) {
        if (completion) {
            completion(success, complete, objects, error);
        }
    }];
}

+ (void)actionMarkMessagesAsRead:(NSArray <TSDKMessage *> *)messages completion:(TSDKCompletionBlock)completion {
    TSDKCollectionCommand *command = [[TSDKMessage commands] objectForKey:@"mark_message_as_read"];

    NSMutableString *commaSeparatedIds = [[NSMutableString alloc] init];
    for(TSDKMessage *message in messages) {
        if(message == [messages lastObject]) {
            [commaSeparatedIds appendString:[NSString stringWithFormat:@"%ld", (long)message.objectIdentifier]];
        } else {
            [commaSeparatedIds appendString:[NSString stringWithFormat:@"%ld, ", (long)message.objectIdentifier]];
        }
    }
    
    command.data[@"id"] = commaSeparatedIds;
    
    [command executeWithCompletion:^(BOOL success, BOOL complete, TSDKCollectionJSON *objects, NSError *error) {
        if (completion) {
            completion(success, complete, objects, error);
        }
    }];
}


- (void)markMessageAsReadWithCompletion:(TSDKCompletionBlock _Nullable)completion {
    [TSDKMessage actionMarkMessageAsRead:self completion:completion];
}

@end
