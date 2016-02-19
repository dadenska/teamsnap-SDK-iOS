//
// Copyright (c) 2015 TeamSnap. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TSDKCollectionObject.h"
#import "TSDKObjectsRequest.h"

@interface TSDKEvent : TSDKCollectionObject

@property (nonatomic, weak) NSString *uniform; //Example:
@property (nonatomic, assign) NSInteger teamId; //Example: 71118
@property (nonatomic, weak) NSString *iconColor; //Example: yellow
@property (nonatomic, weak) NSDate *createdAt; //Example: 2012-04-18T02:05:58Z
@property (nonatomic, assign) NSInteger opponentId; //Example: 2208702
@property (nonatomic, assign) BOOL isGame; //Example: 1
@property (nonatomic, weak) NSString *label; //Example:
@property (nonatomic, weak) NSString *gameType; //Example: Home
@property (nonatomic, weak) NSString *shootoutPointsForTeam; //Example: **NULL**
@property (nonatomic, weak) NSString *shootoutPointsForOpponent; //Example: **NULL**
@property (nonatomic, weak) NSString *timeZoneDescription; //Example: Eastern Time (US & Canada)
@property (nonatomic, assign) NSInteger tracksAvailability; //Example: 1
@property (nonatomic, assign) BOOL isCanceled; //Example: 0
@property (nonatomic, weak) NSString *sourceTimeZoneIanaName; //Example: America/New_York
@property (nonatomic, weak) NSString *divisionLocationId; //Example: **NULL**
@property (nonatomic, weak) NSString *additionalLocationDetails; //Example: **NULL**
@property (nonatomic, weak) NSDate *endDate; //Example: 2012-05-19T06:00:00Z
@property (nonatomic, assign) BOOL isTbd; //Example: 0
@property (nonatomic, weak) NSString *resultsUrl; //Example: **NULL**
@property (nonatomic, assign) BOOL isLeagueControlled; //Example: 0
@property (nonatomic, weak) NSString *name; //Example:
@property (nonatomic, weak) NSString *repeatingType; //Example: **NULL**
@property (nonatomic, assign) BOOL isShootout; //Example: 0
@property (nonatomic, weak) NSString *pointsForTeam; //Example: **NULL**
@property (nonatomic, assign) NSInteger locationId; //Example: 714660
@property (nonatomic, assign) NSInteger minutesToArriveEarly; //Example: 0
@property (nonatomic, weak) NSString *formattedResults; //Example: **NULL**
@property (nonatomic, weak) NSString *repeatingTypeCode; //Example: **NULL**
@property (nonatomic, weak) NSDate *startDate; //Example: 2012-05-19T04:00:00Z
@property (nonatomic, assign) NSInteger doesntCountTowardsRecord; //Example: 1
@property (nonatomic, weak) NSString *timeZone; //Example: Eastern Time (US & Canada)
@property (nonatomic, weak) NSString *pointsForOpponent; //Example: **NULL**
@property (nonatomic, assign) NSInteger gameTypeCode; //Example: 1
@property (nonatomic, weak) NSString *timeZoneOffset; //Example: -05:00
@property (nonatomic, weak) NSDate *arrivalDate; //Example: 2012-05-19T04:00:00Z
@property (nonatomic, weak) NSDate *updatedAt; //Example: 2016-01-20T21:20:05Z
@property (nonatomic, assign) BOOL isOvertime; //Example: 0
@property (nonatomic, weak) NSString *repeatingUuid; //Example: **NULL**
@property (nonatomic, weak) NSString *results; //Example: **NULL**
@property (nonatomic, weak) NSString *notes; //Example:
@property (nonatomic, weak) NSString *timeZoneIanaName; //Example: America/New_York
@property (nonatomic, assign) NSInteger durationInMinutes; //Example: 120
@property (nonatomic, weak) NSURL *linkAvailabilities;
@property (nonatomic, weak) NSURL *linkLocation;
@property (nonatomic, weak) NSURL *linkEventStatistics;
@property (nonatomic, weak) NSURL *linkDivisionLocation;
@property (nonatomic, weak) NSURL *linkAssignments;
@property (nonatomic, weak) NSURL *linkOpponent;
@property (nonatomic, weak) NSURL *linkTeam;
@property (nonatomic, weak) NSURL *linkStatisticData;
@property (nonatomic, weak) NSURL *linkCalendarSingleEvent;

@property (nonatomic, strong) NSMutableDictionary *availabilitiesByRoster;

@end

@interface TSDKEvent (ForwardedMethods)

-(void)getAvailabilitiesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getLocationWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getEventStatisticsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getDivisionLocationWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getAssignmentsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getOpponentWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTeamWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getStatisticDataWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getCalendarSingleEventWithCompletion:(TSDKArrayCompletionBlock)completion;


@end