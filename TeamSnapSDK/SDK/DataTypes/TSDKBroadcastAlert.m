//
//  TSDKBroadcastAlert.m
//  TSDKSampleApp
//
//  Created by Skyler Seamans on 1/29/16.
//  Copyright © 2016 TeamSnap. All rights reserved.
//

#import "TSDKBroadcastAlert.h"

@implementation TSDKBroadcastAlert

@dynamic updatedAt, isDraft, createdAt, memberId, recipientNames, teamId, body, recipientCount, linkTeam, linkMember;

+ (NSString *)SDKType {
    return @"broadcast_alert";
}

@end
