#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "TeamSnapSDK.h"
#import "TSDKConstants.h"
#import "TSDKLogging.h"
#import "TSDKShortPropertyTest.h"
#import "TSDKTeamSnap.h"
#import "TSDKProfileTimer.h"
#import "TSDKCompletionBlockTypes.h"
#import "TSDKNotifications.h"
#import "TSPCache.h"
#import "TSDKCollectionCommand.h"
#import "TSDKCollectionJSON.h"
#import "TSDKCollectionObject.h"
#import "TSDKCollectionQuery.h"
#import "NSDate+TSDKConveniences.h"
#import "NSDateFormatter+TSDKConvenience.h"
#import "NSMutableDictionary+refreshCollectionData.h"
#import "NSMutableString+TSDKConveniences.h"
#import "NSMutableURLRequest+TSDKConveniences.h"
#import "NSObject+TSDKIntegerOtNotFound.h"
#import "NSString+TSDKConveniences.h"
#import "NSString+TSDKPublicConveniences.h"
#import "NSURL+TSDKConveniences.h"
#import "NSHTTPURLResponse+convenience.h"
#import "TSDKBackgroundUploadProgressMonitorDelegate.h"
#import "TSDKDataRequest.h"
#import "TSDKDuplicateCompletionBlockStore.h"
#import "TSDKNetworkActivityIndicator.h"
#import "TSDKObjectsRequest.h"
#import "TSDKRequestConfiguration.h"
#import "TSDKApnDevice.h"
#import "TSDKAssignment.h"
#import "TSDKAvailability.h"
#import "TSDKAvailabilityGroups.h"
#import "TSDKBroadcastAlert.h"
#import "TSDKBroadcastEmail.h"
#import "TSDKCountry.h"
#import "TSDKCustomDatum.h"
#import "TSDKCustomField.h"
#import "TSDKDivision.h"
#import "TSDKDivisionPreferences.h"
#import "TSDKEvent.h"
#import "TSDKForumPost.h"
#import "TSDKForumTopic.h"
#import "TSDKinvitationFinder.h"
#import "TSDKLocation.h"
#import "TSDKMember.h"
#import "TSDKOpponent.h"
#import "TSDKOpponentResults.h"
#import "TSDKPlan.h"
#import "TSDKPublicFeatures.h"
#import "TSDKRootLinks.h"
#import "TSDKSmsGateway.h"
#import "TSDKSport.h"
#import "TSDKTeam.h"
#import "TSDKTeamFee.h"
#import "TSDKTeamMediaGroup.h"
#import "TSDKTeamPreferences.h"
#import "TSDKTeamResults.h"
#import "TSDKTimeZone.h"
#import "TSDKTrackedItem.h"
#import "TSDKTrackedItemStatus.h"
#import "TSDKTslMetadatum.h"
#import "TSDKTslPhotos.h"
#import "TSDKUser.h"
#import "TSDKMemberAssignment.h"
#import "TSDKDivisionLocation.h"
#import "TSDKLeagueCustomDatum.h"
#import "TSDKLeagueCustomField.h"
#import "TSDKTeamMedium.h"
#import "TSDKTeamMediumComment.h"
#import "TSDKContact.h"
#import "TSDKContactEmailAddress.h"
#import "TSDKContactPhoneNumber.h"
#import "TSDKMemberEmailAddress.h"
#import "TSDKMemberPhoneNumber.h"
#import "TSDKMemberPreferences.h"
#import "TSDKForumSubscription.h"
#import "TSDKMessage.h"
#import "TSDKMessageDatum.h"
#import "TSDKMemberBalance.h"
#import "TSDKMemberPayment.h"
#import "TSDKPaymentNote.h"
#import "TSDKMemberPhoto.h"
#import "TSDKMessageRecipient.h"
#import "TSDKMessageSender.h"
#import "TSDKEventStatistic.h"
#import "TSDKMemberStatistic.h"
#import "TSDKStatistic.h"
#import "TSDKStatisticDatum.h"
#import "TSDKStatisticGroup.h"
#import "TSDKTeamStatistic.h"
#import "TSDKTslChat.h"
#import "TSDKTslScore.h"

FOUNDATION_EXPORT double TeamSnapSDKVersionNumber;
FOUNDATION_EXPORT const unsigned char TeamSnapSDKVersionString[];

