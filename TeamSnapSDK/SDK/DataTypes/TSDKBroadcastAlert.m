//
//  TSDKBroadcastAlert.m
//  TSDKSampleApp
//
//  Created by Skyler Seamans on 1/29/16.
//  Copyright © 2016 TeamSnap. All rights reserved.
//

#import "TSDKBroadcastAlert.h"
#import "TSDKMember.h"

@implementation TSDKBroadcastAlert

@dynamic updatedAt, isDraft, createdAt, memberId, recipientNames, teamId, body, recipientCount, linkTeam, linkMember;

- (instancetype)initWithBody:(NSString *)body teamId:(NSInteger)teamId recipients:(NSArray <TSDKMember *>*)recipients sender:(TSDKMember *)sender {
    self = [super init];
    if(self) {
        [super setString:body forKey:@"body"];
        [super setInteger:teamId forKey:@"team_id"];
        [super setInteger:sender.objectIdentifier forKey:@"member_id"];
        NSMutableString *commaSeparatedMemberIds = [[NSMutableString alloc] init];
        for(TSDKMember *recipient in recipients) {
            if(recipient != recipients.lastObject) {
                [commaSeparatedMemberIds appendString:[NSString stringWithFormat:@"%ld, ", (long)recipient.objectIdentifier]];
            } else {
                [commaSeparatedMemberIds appendString:[NSString stringWithFormat:@"%ld", (long)recipient.objectIdentifier]];
            }
        }
        [super setString:commaSeparatedMemberIds forKey:@"recipient_ids"];
    }
    return self;
}

+ (NSString *)SDKType {
    return @"broadcast_alert";
}

@end
