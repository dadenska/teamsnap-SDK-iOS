//
//  TSDKMemberPhoneNumber.h
//  TeamSnapSDK
//
// Copyright (c) 2015 TeamSnap. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TSDKCollectionObject.h"
#import "TSDKObjectsRequest.h"

@interface TSDKMemberPhoneNumber : TSDKCollectionObject

@property (nonatomic, weak) NSString *smsGatewayId; //Example: verizon
@property (nonatomic, weak) NSString *smsEmailAddress; //Example: 2402059238@vtext.com
@property (nonatomic, assign) NSInteger teamId; //Example: 153832
@property (nonatomic, assign) NSInteger smsEnabled; //Example: 1
@property (nonatomic, assign) NSInteger memberId; //Example: 1942977
@property (nonatomic, assign) BOOL isHidden; //Example: 0
@property (nonatomic, weak) NSString *label; //Example: Mom's cell
@property (nonatomic, weak) NSString *phoneNumber; //Example: 240 205 9238
@property (nonatomic, assign) NSInteger preferred; //Example: 0
@property (nonatomic, weak) NSURL *linkMember;
@property (nonatomic, weak) NSURL *linkSmsGateway;
@property (nonatomic, weak) NSURL *linkTeam;

@end

@interface TSDKMemberPhoneNumber(Forwardedmethods)

-(void)getMemberWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getSmsGatewayWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTeamWithCompletion:(TSDKArrayCompletionBlock)completion;

@end
