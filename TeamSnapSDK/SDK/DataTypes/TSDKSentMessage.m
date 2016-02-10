//
//  TSDKSentMessage.m
//  TeamSnapSDK
//
//  Created by Skyler Seamans on 2/2/16.
//  Copyright © 2016 teamsnap. All rights reserved.
//

#import "TSDKSentMessage.h"

@implementation TSDKSentMessage

@dynamic updatedAt, createdAt, readByRecipients, memberId, recipientNames, body, teamId, recipientCount, linkTeam, linkMember;

+ (NSString *)SDKType {
    return @"sent_message";
}

@end
