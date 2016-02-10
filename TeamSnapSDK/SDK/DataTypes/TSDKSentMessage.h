// Copyright (c) 2015 TeamSnap. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TSDKCollectionObject.h"
#import "TSDKObjectsRequest.h"

@interface TSDKSentMessage : TSDKCollectionObject

@property (nonatomic, weak) NSDate *updatedAt; //Example: 2016-01-30T00:38:38Z
@property (nonatomic, weak) NSDate *createdAt; //Example: 2016-01-30T00:38:38Z
@property (nonatomic, weak) NSArray *readByRecipients;
@property (nonatomic, assign) NSInteger memberId; //Example: 132
@property (nonatomic, weak) NSString *recipientNames; //Example: Manny Manager
@property (nonatomic, weak) NSString *body; //Example: Test
@property (nonatomic, assign) NSInteger teamId; //Example: 9
@property (nonatomic, assign) NSInteger recipientCount; //Example: 1
@property (nonatomic, weak) NSURL *linkTeam;
@property (nonatomic, weak) NSURL *linkMember;

@end

@interface TSDKSentMessage (ForwardedMethods)

-(void)getTeamWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getMemberWithCompletion:(TSDKArrayCompletionBlock)completion;


@end
