//
//  TSDKProfile.m
//  TeamSnapSDK
//
//  Created by Skyler Seamans on 6/28/16.
//  Copyright © 2016 teamsnap. All rights reserved.
//

#import "TSDKProfile.h"

@implementation TSDKProfile

@dynamic isPushable, jerseyNumber, birthday, position, isInvitable, addressCity, isAddressHidden, userId, addressZip, invitationCode, updatedAt, addressState, lastName, isAlertable, isAgeHidden, isEmailable, gender, parentProfileId, profileId, addressStreet1, invitationDeclined, createdAt, addressStreet2, firstName, divisionId, teamId, isActivated, linkProfilePhoneNumbers, linkProfileEmailAddresses, linkTeam, linkRole, linkUser;

+ (NSString *)SDKType {
    return @"profile";
}

@end
