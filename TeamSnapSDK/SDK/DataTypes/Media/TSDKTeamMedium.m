//
//  TSDKTeamMedium.m
//  TeamSnapSDK
//
//  Created by Jason Rahaim on 2/23/16.
//  Copyright © 2016 teamsnap. All rights reserved.
//

#import "TSDKTeamMedium.h"
#import "TSDKDataRequest.h"
#import "NSURL+TSDKConveniences.h"
#import "TSDKBackgroundUploadProgressMonitorDelegate.h"

@implementation TSDKTeamMedium

@dynamic teamMediumDescription, originalFileSize, position, mediumUrl, createdAt, teamMediaGroupId, mediaFormat, updatedAt, isPrivate, teamId, memberId, linkMember, linkMedium, linkMediumThumbnail, linkTeamMediumPhotoFile, linkTeamMediumComments, linkImageUrl, linkMediumMidsizeThumbnail, linkTeam, linkMediumSmallThumbnail, linkTeamMediaGroup, linkMediumMidsize;

+ (NSString *)SDKType {
    return @"team_medium";
}

+ (NSString *)SDKREL {
    return @"team_media";
}

- (NSURL *)linkForImageWithHeight:(NSInteger)height width:(NSInteger)width {
    return [[[[self linkTeamMediumPhotoFile] URLByAppendingQueryParameter:[NSString stringWithFormat:@"height=%ld",(long)height]] URLByAppendingQueryParameter:[NSString stringWithFormat:@"width=%ld",(long)width]] URLByAppendingQueryParameter:@"crop=fill"] ;
}

- (NSURL *)linkForImageWithHeight:(NSInteger)height {
        return [[[self linkTeamMediumPhotoFile] URLByAppendingQueryParameter:[NSString stringWithFormat:@"height=%ld",(long)height]] URLByAppendingQueryParameter:@"crop=proportional"] ;
}

- (NSURL *)linkForImageWithWidth:(NSInteger)width {
    return [[[self linkTeamMediumPhotoFile] URLByAppendingQueryParameter:[NSString stringWithFormat:@"width=%ld",(long)width]] URLByAppendingQueryParameter:@"crop=proportional"] ;
}


- (TeamMediaGroupFormatType)mediaType {
    return [TSDKTeamMediaGroup mediaFormatForString:self.mediaFormat];
}

- (void)setMediaType:(TeamMediaGroupFormatType)mediaType {
    self.mediaFormat = [TSDKTeamMediaGroup mediaFormatStringForMediaFormat:mediaType];
}

#if TARGET_OS_IPHONE
+(nonnull TSDKBackgroundUploadProgressMonitorDelegate *)uploadPhotoFileURL:(nonnull NSURL *)photoFileURL  groupid:(NSInteger)teamMediaGroupId position:(NSInteger)position memberId:(NSInteger)memberId teamId:(NSInteger)teamId description:(NSString *_Nonnull)description progress:(TSDKUploadProgressBlock _Nullable)progressBlock {
    // +(nonnull TSDKBackgroundUploadProgressMonitorDelegate *)UploadPhotoFileURL:(nonnull NSURL *)photoFileURL  groupid:(NSString *_Nonnull)teamMediaGroupId position:(NSString *_Nonnull)position file:(NSString *_Nonnull)file mediaFormat:(NSString *_Nonnull)mediaFormat memberId:(NSString *_Nonnull)memberId teamId:(NSString *_Nonnull)teamId description:(NSString *_Nonnull)description WithCompletion:(TSDKCompletionBlock _Nullable)completion {
    
    TSDKBackgroundUploadProgressMonitorDelegate *backgroundUploadDelegate = [[TSDKBackgroundUploadProgressMonitorDelegate alloc] initWithProgressBlock:progressBlock];
    
    TSDKCollectionCommand *uploadCommand = [self commandForKey:@"upload_team_medium"];
    uploadCommand.data[@"team_id"] = [NSNumber numberWithInteger:teamId];
    uploadCommand.data[@"member_id"] = [NSNumber numberWithInteger:memberId];
    uploadCommand.data[@"team_media_group_id"] = [NSNumber numberWithInteger:teamMediaGroupId];
    uploadCommand.data[@"media_format"] = TSDKTeamMediaGroupImageFormatString;
    uploadCommand.data[@"description"] = description;
    
    uploadCommand.data[@"file_name"] = @"photo.jpg";
    NSData *imageData = [NSData dataWithContentsOfURL:photoFileURL];
    
    uploadCommand.data[@"file"] = imageData;
    NSURL *url = [NSURL URLWithString:uploadCommand.href];
    
    [TSDKDataRequest postDictionary:uploadCommand.data toURL:url delegate:backgroundUploadDelegate];
    
    return backgroundUploadDelegate;
}

-(nonnull TSDKBackgroundUploadProgressMonitorDelegate *)uploadPhotoFileURL:(nonnull NSURL *)photoFileURL position:(NSString *_Nonnull)position progress:(TSDKUploadProgressBlock _Nullable)progressBlock {
    return [TSDKTeamMedium uploadPhotoFileURL:photoFileURL groupid:self.teamMediaGroupId position:0 memberId:self.memberId teamId:self.teamId description:self.teamMediumDescription progress:progressBlock];
}

#endif

@end
