/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKFriendPlayerInternal.h>

@class NSString, NSArray, NSNumber;

@interface GKLocalPlayerInternal : GKFriendPlayerInternal {

	NSString* _accountName;
	NSArray* _emailAddresses;
	NSString* _facebookUserID;
	NSNumber* _iCloudUserID;
	unsigned short _numberOfRequests;
	unsigned short _numberOfTurns;
	unsigned short _numberOfChallenges;
	unsigned long long _loginStatus;

}

@property (assign) unsigned long long loginStatus;              //@synthesize loginStatus=_loginStatus - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(void)setEmailAddresses:(id)arg1 ;
-(unsigned long long)loginStatus;
-(id)accountName;
-(void)dealloc;
-(id)emailAddresses;
-(void)setAccountName:(id)arg1 ;
-(BOOL)isLocalPlayer;
-(BOOL)isPurpleBuddyAccount;
-(BOOL)isDefaultPrivacyVisibility;
-(BOOL)isUnderage;
-(void)setDefaultNickname:(BOOL)arg1 ;
-(BOOL)isFriend;
-(BOOL)isDefaultNickname;
-(id)iCloudUserID;
-(void)setICloudUserID:(id)arg1 ;
-(id)minimalInternal;
-(void)setDefaultPrivacyVisibility:(BOOL)arg1 ;
-(void)setUnderage:(BOOL)arg1 ;
-(unsigned short)numberOfTurns;
-(void)setNumberOfTurns:(unsigned short)arg1 ;
-(unsigned short)numberOfRequests;
-(unsigned short)numberOfChallenges;
-(int)defaultFamiliarity;
-(void)setLoginStatus:(unsigned long long)arg1 ;
-(BOOL)isFindable;
-(BOOL)isPhotoPending;
-(id)facebookUserID;
-(void)setFacebookUserID:(id)arg1 ;
-(void)setPurpleBuddyAccount:(BOOL)arg1 ;
-(void)setFindable:(BOOL)arg1 ;
-(void)setPhotoPending:(BOOL)arg1 ;
-(void)setNumberOfRequests:(unsigned short)arg1 ;
-(void)setNumberOfChallenges:(unsigned short)arg1 ;
@end

