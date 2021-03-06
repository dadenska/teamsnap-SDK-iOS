// Copyright (c) 2015 TeamSnap. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TSDKCollectionObject.h"
#import "TSDKObjectsRequest.h"

@interface TSDKMessageDatum : TSDKCollectionObject

@property (nonatomic, assign) NSInteger unreadCount; //Example: 0
@property (nonatomic, weak) NSString *_Nullable memberId; //Example: 102
@property (nonatomic, weak) NSString *_Nullable userId; //Example: 7
@property (nonatomic, weak) NSString *_Nullable teamId; //Example: 7
@property (nonatomic, weak) NSString *_Nullable contactId; //Example: **NULL**
@property (nonatomic, weak) NSURL *_Nullable linkTeam;
@property (nonatomic, weak) NSURL *_Nullable linkUser;
@property (nonatomic, weak) NSURL *_Nullable linkMember;

@end

@interface TSDKMessageDatum (ForwardedMethods)

-(void)getTeamWithConfiguration:(TSDKRequestConfiguration *_Nullable)configuration completion:(TSDKTeamArrayCompletionBlock _Nullable)completion;
-(void)getUserWithConfiguration:(TSDKRequestConfiguration *_Nullable)configuration completion:(TSDKUserArrayCompletionBlock _Nullable)completion;
-(void)getMemberWithConfiguration:(TSDKRequestConfiguration *_Nullable)configuration completion:(TSDKMemberArrayCompletionBlock _Nullable)completion;

@end
