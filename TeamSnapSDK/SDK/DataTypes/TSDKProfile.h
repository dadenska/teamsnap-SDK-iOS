// Copyright (c) 2015 TeamSnap. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TSDKCollectionObject.h"
#import "TSDKObjectsRequest.h"

@interface TSDKProfile : TSDKCollectionObject

@property (nonatomic, assign) BOOL isPushable; //Example: 0
@property (nonatomic, weak) NSString *jerseyNumber; //Example: **NULL**
@property (nonatomic, weak) NSString *birthday; //Example: **NULL**
@property (nonatomic, weak) NSString *position; //Example: **NULL**
@property (nonatomic, assign) BOOL isInvitable; //Example: 0
@property (nonatomic, weak) NSString *addressCity; //Example: **NULL**
@property (nonatomic, assign) BOOL isAddressHidden; //Example: <null>
@property (nonatomic, assign) NSInteger userId; //Example: 7
@property (nonatomic, weak) NSString *addressZip; //Example: **NULL**
@property (nonatomic, weak) NSString *invitationCode; //Example: **NULL**
@property (nonatomic, weak) NSDate *updatedAt; //Example: 2016-06-22T22:25:46Z
@property (nonatomic, weak) NSString *addressState; //Example: **NULL**
@property (nonatomic, weak) NSString *lastName; //Example: Manager
@property (nonatomic, assign) BOOL isAlertable; //Example: 0
@property (nonatomic, assign) BOOL isAgeHidden; //Example: <null>
@property (nonatomic, assign) BOOL isEmailable; //Example: 1
@property (nonatomic, weak) NSString *gender; //Example: **NULL**
@property (nonatomic, weak) NSString *parentProfileId; //Example: **NULL**
@property (nonatomic, weak) NSString *profileId; //Example: member-8
@property (nonatomic, weak) NSString *addressStreet1; //Example: **NULL**
@property (nonatomic, weak) NSString *invitationDeclined; //Example: **NULL**
@property (nonatomic, weak) NSDate *createdAt; //Example: 2016-06-22T22:25:46Z
@property (nonatomic, weak) NSString *addressStreet2; //Example: **NULL**
@property (nonatomic, weak) NSString *firstName; //Example: Manny
@property (nonatomic, assign) NSInteger divisionId; //Example: 7
@property (nonatomic, assign) NSInteger teamId; //Example: 1
@property (nonatomic, assign) BOOL isActivated; //Example: 1
@property (nonatomic, weak) NSURL *linkProfilePhoneNumbers;
@property (nonatomic, weak) NSURL *linkProfileEmailAddresses;
@property (nonatomic, weak) NSURL *linkTeam;
@property (nonatomic, weak) NSURL *linkRole;
@property (nonatomic, weak) NSURL *linkUser;

@end

@interface TSDKProfile (ForwardedMethods)

-(void)getProfilePhoneNumbersWithConfiguration:(TSDKRequestConfiguration *)configuration completion:(TSDKArrayCompletionBlock)completion;
-(void)getProfileEmailAddressesWithConfiguration:(TSDKRequestConfiguration *)configuration completion:(TSDKArrayCompletionBlock)completion;
-(void)getTeamWithConfiguration:(TSDKRequestConfiguration *)configuration completion:(TSDKTeamArrayCompletionBlock)completion;
-(void)getRoleWithConfiguration:(TSDKRequestConfiguration *)configuration completion:(TSDKArrayCompletionBlock)completion;
-(void)getUserWithConfiguration:(TSDKRequestConfiguration *)configuration completion:(TSDKUserArrayCompletionBlock)completion;


@end
