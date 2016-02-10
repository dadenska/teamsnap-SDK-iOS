// Copyright (c) 2015 TeamSnap. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TSDKCollectionObject.h"
#import "TSDKObjectsRequest.h"

@interface TSDKRootLinks : TSDKCollectionObject

@property (nonatomic, weak) NSURL *linkDivisionContactPhoneNumbers;
@property (nonatomic, weak) NSURL *linkDivisions;
@property (nonatomic, weak) NSURL *linkBroadcastAlerts;
@property (nonatomic, weak) NSURL *linkTeamsResults;
@property (nonatomic, weak) NSURL *linkMe;
@property (nonatomic, weak) NSURL *linkLocations;
@property (nonatomic, weak) NSURL *linkTeamMediumComments;
@property (nonatomic, weak) NSURL *linkTeamsPreferences;
@property (nonatomic, weak) NSURL *linkMemberLinks;
@property (nonatomic, weak) NSURL *linkForumTopics;
@property (nonatomic, weak) NSURL *linkTeamMedia;
@property (nonatomic, weak) NSURL *linkEvents;
@property (nonatomic, weak) NSURL *linkStatistics;
@property (nonatomic, weak) NSURL *linkSweet;
@property (nonatomic, weak) NSURL *linkTrackedItemStatuses;
@property (nonatomic, weak) NSURL *linkSentMessages;
@property (nonatomic, weak) NSURL *linkTslPhotos;
@property (nonatomic, weak) NSURL *linkContactEmailAddresses;
@property (nonatomic, weak) NSURL *linkTeamPublicSites;
@property (nonatomic, weak) NSURL *linkAssignments;
@property (nonatomic, weak) NSURL *linkContactPhoneNumbers;
@property (nonatomic, weak) NSURL *linkDivisionMemberPhoneNumbers;
@property (nonatomic, weak) NSURL *linkDude;
@property (nonatomic, weak) NSURL *linkOpponentsResults;
@property (nonatomic, weak) NSURL *linkTrackedItems;
@property (nonatomic, weak) NSURL *linkSmsGateways;
@property (nonatomic, weak) NSURL *linkDivisionLocations;
@property (nonatomic, weak) NSURL *linkForecasts;
@property (nonatomic, weak) NSURL *linkPublicFeatures;
@property (nonatomic, weak) NSURL *linkTslChats;
@property (nonatomic, weak) NSURL *linkRandom;
@property (nonatomic, weak) NSURL *linkPlansAll;
@property (nonatomic, weak) NSURL *linkMemberStatistics;
@property (nonatomic, weak) NSURL *linkDivisionMembers;
@property (nonatomic, weak) NSURL *linkTeamMediaGroups;
@property (nonatomic, weak) NSURL *linkForumSubscriptions;
@property (nonatomic, weak) NSURL *linkGeocodedLocations;
@property (nonatomic, weak) NSURL *linkReferrals;
@property (nonatomic, weak) NSURL *linkLeagueCustomData;
@property (nonatomic, weak) NSURL *linkSports;
@property (nonatomic, weak) NSURL *linkAvailabilities;
@property (nonatomic, weak) NSURL *linkMemberBalances;
@property (nonatomic, weak) NSURL *linkMemberPayments;
@property (nonatomic, weak) NSURL *linkLeagueCustomFields;
@property (nonatomic, weak) NSURL *linkMembers;
@property (nonatomic, weak) NSURL *linkMembersPreferences;
@property (nonatomic, weak) NSURL *linkTslMetadata;
@property (nonatomic, weak) NSURL *linkOpponents;
@property (nonatomic, weak) NSURL *linkApiv2Root;
@property (nonatomic, weak) NSURL *linkStatisticData;
@property (nonatomic, weak) NSURL *linkMemberEmailAddresses;
@property (nonatomic, weak) NSURL *linkTeamsPaypalPreferences;
@property (nonatomic, weak) NSURL *linkBroadcastEmails;
@property (nonatomic, weak) NSURL *linkTeamStatistics;
@property (nonatomic, weak) NSURL *linkDivisionMembersPreferences;
@property (nonatomic, weak) NSURL *linkPlans;
@property (nonatomic, weak) NSURL *linkSelf;
@property (nonatomic, weak) NSURL *linkDivisionTeamStandings;
@property (nonatomic, weak) NSURL *linkAuthorization;
@property (nonatomic, weak) NSURL *linkDivisionMemberEmailAddresses;
@property (nonatomic, weak) NSURL *linkReceivedMessages;
@property (nonatomic, weak) NSURL *linkDivisionContactEmailAddresses;
@property (nonatomic, weak) NSURL *linkSponsors;
@property (nonatomic, weak) NSURL *linkTeams;
@property (nonatomic, weak) NSURL *linkPaypalCurrencies;
@property (nonatomic, weak) NSURL *linkFacebookPages;
@property (nonatomic, weak) NSURL *linkMemberPhoneNumbers;
@property (nonatomic, weak) NSURL *linkEventStatistics;
@property (nonatomic, weak) NSURL *linkCustomData;
@property (nonatomic, weak) NSURL *linkMemberFiles;
@property (nonatomic, weak) NSURL *linkTeamFees;
@property (nonatomic, weak) NSURL *linkBroadcastEmailAttachments;
@property (nonatomic, weak) NSURL *linkTimeZones;
@property (nonatomic, weak) NSURL *linkTslScores;
@property (nonatomic, weak) NSURL *linkLeagueRegistrantDocuments;
@property (nonatomic, weak) NSURL *linkStatisticGroups;
@property (nonatomic, weak) NSURL *linkStatisticAggregates;
@property (nonatomic, weak) NSURL *linkCustomFields;
@property (nonatomic, weak) NSURL *linkDivisionContacts;
@property (nonatomic, weak) NSURL *linkUsers;
@property (nonatomic, weak) NSURL *linkSchemas;
@property (nonatomic, weak) NSURL *linkRoot;
@property (nonatomic, weak) NSURL *linkXyzzy;
@property (nonatomic, weak) NSURL *linkPaymentNotes;
@property (nonatomic, weak) NSURL *linkForumPosts;
@property (nonatomic, weak) NSURL *linkContacts;
@property (nonatomic, weak) NSURL *linkCountries;

-(void)getSchemasArrayWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getSchemasWithCompletion:(TSDKSimpleCompletionBlock)completion;

+(void)actionSendInvitationsToEmailaddress:(NSString *)emailAddress WithCompletion:(TSDKCompletionBlock)completion; //Send any pending invitations for a specified email address
+(void)actionWelcomeEmailAddress:(NSString *)emailAddress withCallbackURL:(NSURL *)callbackURL withCompletion:(TSDKSimpleCompletionBlock)completion;


@end

@interface TSDKRootLinks (ForwardedMethods)

-(void)getDivisionContactPhoneNumbersWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getDivisionsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getBroadcastAlertsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTeamsResultsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getMeWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getLocationsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTeamMediumCommentsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTeamsPreferencesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getMemberLinksWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getForumTopicsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTeamMediaWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getEventsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getStatisticsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getSweetWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTrackedItemStatusesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getSentMessagesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTslPhotosWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getContactEmailAddressesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTeamPublicSitesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getAssignmentsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getContactPhoneNumbersWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getDivisionMemberPhoneNumbersWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getDudeWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getOpponentsResultsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTrackedItemsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getSmsGatewaysWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getDivisionLocationsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getForecastsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getPublicFeaturesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTslChatsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getRandomWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getPlansAllWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getMemberStatisticsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getDivisionMembersWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTeamMediaGroupsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getForumSubscriptionsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getGeocodedLocationsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getReferralsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getLeagueCustomDataWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getSportsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getAvailabilitiesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getMemberBalancesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getMemberPaymentsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getLeagueCustomFieldsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getMembersWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getMembersPreferencesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTslMetadataWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getOpponentsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getApiv2RootWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getStatisticDataWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getMemberEmailAddressesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTeamsPaypalPreferencesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getBroadcastEmailsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTeamStatisticsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getDivisionMembersPreferencesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getPlansWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getSelfWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getDivisionTeamStandingsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getAuthorizationWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getDivisionMemberEmailAddressesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getReceivedMessagesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getDivisionContactEmailAddressesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getSponsorsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTeamsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getPaypalCurrenciesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getFacebookPagesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getMemberPhoneNumbersWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getEventStatisticsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getCustomDataWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getMemberFilesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTeamFeesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getBroadcastEmailAttachmentsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTimeZonesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTslScoresWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getLeagueRegistrantDocumentsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getStatisticGroupsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getStatisticAggregatesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getCustomFieldsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getDivisionContactsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getUsersWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getRootWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getXyzzyWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getPaymentNotesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getForumPostsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getContactsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getCountriesWithCompletion:(TSDKArrayCompletionBlock)completion;


@end
