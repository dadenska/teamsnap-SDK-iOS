//
//  TSDKRootLinks.h
//  SDKDeveloperTools
//
// Copyright (c) 2015 TeamSnap. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TSDKCollectionObject.h"
#import "TSDKObjectsRequest.h"

@interface TSDKRootLinks : TSDKCollectionObject

@property (nonatomic, weak) NSURL *linkMembers;
@property (nonatomic, weak) NSURL *linkTeamsPaypalPreferences;
@property (nonatomic, weak) NSURL *linkLeagueCustomData;
@property (nonatomic, weak) NSURL *linkContactPhoneNumbers;
@property (nonatomic, weak) NSURL *linkPlansAll;
@property (nonatomic, weak) NSURL *linkTeamsPreferences;
@property (nonatomic, weak) NSURL *linkStatistics;
@property (nonatomic, weak) NSURL *linkTeamMediaGroups;
@property (nonatomic, weak) NSURL *linkDivisionContactEmailAddresses;
@property (nonatomic, weak) NSURL *linkMemberStatistics;
@property (nonatomic, weak) NSURL *linkMemberEmailAddresses;
@property (nonatomic, weak) NSURL *linkDivisionLocations;
@property (nonatomic, weak) NSURL *linkTeamPublicSites;
@property (nonatomic, weak) NSURL *linkXyzzy;
@property (nonatomic, weak) NSURL *linkSelf;
@property (nonatomic, weak) NSURL *linkLocations;
@property (nonatomic, weak) NSURL *linkDivisionContactPhoneNumbers;
@property (nonatomic, weak) NSURL *linkPlans;
@property (nonatomic, weak) NSURL *linkContactEmailAddresses;
@property (nonatomic, weak) NSURL *linkSports;
@property (nonatomic, weak) NSURL *linkStatisticGroups;
@property (nonatomic, weak) NSURL *linkSweet;
@property (nonatomic, weak) NSURL *linkCustomData;
@property (nonatomic, weak) NSURL *linkTrackedItems;
@property (nonatomic, weak) NSURL *linkTeamMedia;
@property (nonatomic, weak) NSURL *linkForumSubscriptions;
@property (nonatomic, weak) NSURL *linkPaymentNotes;
@property (nonatomic, weak) NSURL *linkStatisticData;
@property (nonatomic, weak) NSURL *linkDivisionMemberPhoneNumbers;
@property (nonatomic, weak) NSURL *linkMemberBalances;
@property (nonatomic, weak) NSURL *linkDivisionMembers;
@property (nonatomic, weak) NSURL *linkMemberPayments;
@property (nonatomic, weak) NSURL *linkForumTopics;
@property (nonatomic, weak) NSURL *linkGeocodedLocations;
@property (nonatomic, weak) NSURL *linkSponsors;
@property (nonatomic, weak) NSURL *linkAssignments;
@property (nonatomic, weak) NSURL *linkRandom;
@property (nonatomic, weak) NSURL *linkTslPhotos;
@property (nonatomic, weak) NSURL *linkForecasts;
@property (nonatomic, weak) NSURL *linkMembersPreferences;
@property (nonatomic, weak) NSURL *linkMe;
@property (nonatomic, weak) NSURL *linkEvents;
@property (nonatomic, weak) NSURL *linkBroadcastEmails;
@property (nonatomic, weak) NSURL *linkDivisionMemberEmailAddresses;
@property (nonatomic, weak) NSURL *linkMemberPhoneNumbers;
@property (nonatomic, weak) NSURL *linkTslMetadata;
@property (nonatomic, weak) NSURL *linkOpponentsResults;
@property (nonatomic, weak) NSURL *linkRoot;
@property (nonatomic, weak) NSURL *linkApiv2Root;
@property (nonatomic, weak) NSURL *linkTeamStatistics;
@property (nonatomic, weak) NSURL *linkBroadcastSmses;
@property (nonatomic, weak) NSURL *linkBroadcastEmailAttachments;
@property (nonatomic, weak) NSURL *linkLeagueRegistrantDocuments;
@property (nonatomic, weak) NSURL *linkReferrals;
@property (nonatomic, weak) NSURL *linkPublicFeatures;
@property (nonatomic, weak) NSURL *linkPaypalCurrencies;
@property (nonatomic, weak) NSURL *linkTeamFees;
@property (nonatomic, weak) NSURL *linkTeamMediumComments;
@property (nonatomic, weak) NSURL *linkDivisionTeamStandings;
@property (nonatomic, weak) NSURL *linkAvailabilities;
@property (nonatomic, weak) NSURL *linkTeams;
@property (nonatomic, weak) NSURL *linkUsers;
@property (nonatomic, weak) NSURL *linkCustomFields;
@property (nonatomic, weak) NSURL *linkMemberFiles;
@property (nonatomic, weak) NSURL *linkTimeZones;
@property (nonatomic, weak) NSURL *linkForumPosts;
@property (nonatomic, weak) NSURL *linkMemberLinks;
@property (nonatomic, weak) NSURL *linkDivisionMembersPreferences;
@property (nonatomic, weak) NSURL *linkSmsGateways;
@property (nonatomic, weak) NSURL *linkOpponents;
@property (nonatomic, weak) NSURL *linkContacts;
@property (nonatomic, weak) NSURL *linkTrackedItemStatuses;
@property (nonatomic, weak) NSURL *linkLeagueCustomFields;
@property (nonatomic, weak) NSURL *linkDude;
@property (nonatomic, weak) NSURL *linkTeamsResults;


-(void)getMembersWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTeamsPaypalPreferencesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getLeagueCustomDataWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getContactPhoneNumbersWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getPlansAllWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTeamsPreferencesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getStatisticsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTeamMediaGroupsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getDivisionContactEmailAddressesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getMemberStatisticsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getMemberEmailAddressesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getDivisionLocationsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTeamPublicSitesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getXyzzyWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getSelfWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getLocationsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getDivisionContactPhoneNumbersWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getPlansWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getContactEmailAddressesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getSportsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getStatisticGroupsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getSweetWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getCustomDataWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTrackedItemsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTeamMediaWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getForumSubscriptionsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getPaymentNotesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getStatisticDataWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getDivisionMemberPhoneNumbersWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getMemberBalancesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getDivisionMembersWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getMemberPaymentsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getForumTopicsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getGeocodedLocationsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getSponsorsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getAssignmentsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getRandomWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTslPhotosWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getForecastsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getMembersPreferencesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getMeWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getEventsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getBroadcastEmailsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getDivisionMemberEmailAddressesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getMemberPhoneNumbersWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTslMetadataWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getOpponentsResultsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getRootWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getApiv2RootWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTeamStatisticsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getBroadcastSmsesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getBroadcastEmailAttachmentsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getLeagueRegistrantDocumentsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getReferralsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getPublicFeaturesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getPaypalCurrenciesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTeamFeesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTeamMediumCommentsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getDivisionTeamStandingsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getAvailabilitiesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTeamsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getUsersWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getCustomFieldsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getMemberFilesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTimeZonesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getForumPostsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getMemberLinksWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getDivisionMembersPreferencesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getSmsGatewaysWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getOpponentsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getContactsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTrackedItemStatusesWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getLeagueCustomFieldsWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getDudeWithCompletion:(TSDKArrayCompletionBlock)completion;
-(void)getTeamsResultsWithCompletion:(TSDKArrayCompletionBlock)completion;

@end