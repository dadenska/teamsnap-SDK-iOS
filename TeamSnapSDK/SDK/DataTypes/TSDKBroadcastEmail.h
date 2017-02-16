// Copyright (c) 2015 TeamSnap. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TSDKCollectionObject.h"
#import "TSDKObjectsRequest.h"
@class TSDKMember;
#import "TSDKMessageSender.h"

@interface TSDKBroadcastEmail : TSDKCollectionObject

@property (nonatomic, weak) NSString *_Nullable subject; //Example: Email #1
@property (nonatomic, weak) NSString *_Nullable attachmentCount; //Example: **NULL**
@property (nonatomic, weak) NSString *_Nullable body; //Example: <p>Test Email!</p>
@property (nonatomic, weak) NSDate *_Nullable createdAt; //Example: 2012-05-25T18:18:54Z
@property (nonatomic, weak) NSString *_Nullable fromEmailAddress; //Example: **NULL**
@property (nonatomic, assign) NSInteger recipientCount; //Example: 1
@property (nonatomic, weak) NSString *_Nullable recipientNames; //Example: Aiden R
@property (nonatomic, assign) BOOL isDraft; //Example: 0
@property (nonatomic, weak) NSDate *_Nullable updatedAt; //Example: 2012-05-25T18:18:54Z
@property (nonatomic, weak) NSString *_Nullable attachmentNames; //Example:
@property (nonatomic, weak) NSString *_Nullable teamId; //Example: 71118
@property (nonatomic, weak) NSString *_Nullable memberId; //Example: 993324
@property (nonatomic, weak) NSURL *_Nullable linkBroadcastEmailAttachments;
@property (nonatomic, weak) NSURL *_Nullable linkTeam;
@property (nonatomic, weak) NSURL *_Nullable linkMember;

// not autogenerated
- (instancetype _Nonnull)initWithBody:(NSString * _Nonnull)body subject:(NSString * _Nonnull)subject teamId:(NSString *_Nonnull)teamId recipientIDs:(NSArray <NSString *>* _Nonnull)recipientIDs sender:(id<TSDKMessageSender> _Nonnull)sender isDraft:(BOOL)isDraft replyTo:(NSString * _Nullable)sourceMessageId;
// not autogenerated - for Commissioners
- (instancetype _Nullable)initWithDivisionID:(NSString * _Nonnull)divisionId teams:(NSArray <TSDKTeam *> * _Nonnull)teams managersOnly:(BOOL)managersOnly includeUnassignedPlayers:(BOOL)includeUnassignedPlayers includeCommissioners:(BOOL)includeCommissioners sender:(id<TSDKMessageSender> _Nonnull)sender sendCopyToSelf:(BOOL)sendCopyToSelf body:(NSString * _Nonnull)body subject:(NSString * _Nonnull)subject;

@end

@interface TSDKBroadcastEmail (ForwardedMethods)

-(void)getBroadcastEmailAttachmentsWithConfiguration:(TSDKRequestConfiguration *_Nullable)configuration completion:(TSDKArrayCompletionBlock _Nullable)completion;
-(void)getTeamWithConfiguration:(TSDKRequestConfiguration *_Nullable)configuration completion:(TSDKTeamArrayCompletionBlock _Nullable)completion;
-(void)getMemberWithConfiguration:(TSDKRequestConfiguration *_Nullable)configuration completion:(TSDKMemberArrayCompletionBlock _Nullable)completion;


@end
