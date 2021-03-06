/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults, NSString, NSDictionary, NSNumber, NSDate;

@interface ICDefaults : NSObject {

	NSUserDefaults* _userDefaults;
	NSUserDefaults* _musicUserDefaults;
	BOOL _bypassBagSanityChecks;
	NSUserDefaults* _internalDefaults;

}

@property (nonatomic,readonly) NSUserDefaults * internalDefaults;                                                                        //@synthesize internalDefaults=_internalDefaults - In the implementation block
@property (nonatomic,copy) NSString * cloudMediaLibraryUID; 
@property (nonatomic,readonly) NSString * defaultStoreFront; 
@property (nonatomic,copy) NSDictionary * cachedSubscriptionStatus; 
@property (nonatomic,copy) NSDictionary * cachedMusicUserTokens; 
@property (nonatomic,copy) NSDictionary * pushNotificationState; 
@property (nonatomic,copy) NSDictionary * mediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates; 
@property (nonatomic,copy) NSNumber * lastActiveAccountDSID; 
@property (nonatomic,copy) NSDictionary * lastCookieHeadersForRevokingMusicUserTokens; 
@property (nonatomic,copy) NSDate * lastAllowedInteractiveAuthenticationTime; 
@property (nonatomic,copy) NSDictionary * authServiceClientTokenCache; 
@property (assign,nonatomic) double lastAuthenticationDialogResponseTime; 
@property (nonatomic,copy) NSDictionary * lastKnownLocalStoreAccountProperties; 
@property (nonatomic,copy) NSDictionary * lastKnownSubscriptionStatusBaseCacheKey; 
@property (nonatomic,copy) NSDictionary * accountNotificationsShowInLibraryDictionary; 
@property (assign,nonatomic) BOOL ignoreExtendedCertificateValidation; 
@property (assign,nonatomic) BOOL bypassBagSanityChecks;                                                                                 //@synthesize bypassBagSanityChecks=_bypassBagSanityChecks - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceModelOverride; 
@property (nonatomic,copy,readonly) NSNumber * deviceClassOverride; 
@property (nonatomic,copy,readonly) NSNumber * fairPlayDeviceTypeOverride; 
@property (nonatomic,copy,readonly) NSString * productVersionOverride; 
@property (nonatomic,copy,readonly) NSString * hardwarePlatformOverride; 
@property (nonatomic,copy,readonly) NSString * productPlatformOverride; 
@property (nonatomic,copy,readonly) NSNumber * networkTypeOverride; 
@property (nonatomic,readonly) BOOL shouldForceiPhoneBehaviors; 
@property (nonatomic,copy,readonly) NSNumber * authServiceClientTokenTimeToLive; 
@property (assign,nonatomic) BOOL shouldRunAgeVerification; 
@property (nonatomic,copy) NSDate * ageVerificationExpirationDate; 
@property (assign,getter=isExplicitContentAllowedForCurrentYear,nonatomic) BOOL explicitContentAllowedForCurrentYear; 
@property (assign,getter=isExplicitContentAllowedForExpirationYear,nonatomic) BOOL explicitContentAllowedForExpirationYear; 
@property (assign,getter=isGrazingPathEnabled,nonatomic) BOOL grazingPathEnabled; 
@property (getter=isPrivacyAcknowledgementDisabledForMusic,nonatomic,readonly) BOOL privacyAcknowledgementDisabledForMusic; 
@property (nonatomic,readonly) BOOL shouldForceLibraryRecommendationAnalysis; 
@property (nonatomic,readonly) BOOL allowLowAffinityRecommendations; 
@property (nonatomic,readonly) BOOL shouldReduceLibraryRecommendationsXPCInterval; 
@property (nonatomic,readonly) BOOL shouldTreatSubscriptionStatusAsExpired; 
@property (nonatomic,readonly) BOOL shouldTreatSagaAddComputerCallAsFailed; 
@property (nonatomic,readonly) BOOL shouldTreatInitialSagaImportAsFailed; 
@property (nonatomic,readonly) BOOL shouldTreatSubscriptionStatusCheckAsIncomplete; 
@property (getter=isLegacyStoreCacheBusterEnabled,nonatomic,readonly) BOOL legacyStoreCacheBusterEnabled; 
@property (assign,nonatomic) BOOL automaticDownloadsEnabled; 
@property (nonatomic,copy) NSDictionary * lastKnownUserAgeVerificationState; 
+(id)standardDefaults;
-(NSString *)cloudMediaLibraryUID;
-(NSDictionary *)cachedSubscriptionStatus;
-(NSDictionary *)lastKnownLocalStoreAccountProperties;
-(NSString *)deviceModelOverride;
-(BOOL)isLegacyStoreCacheBusterEnabled;
-(BOOL)_shouldSpoofIPhoneRequestProperties;
-(void)setAccountNotificationsShowInLibraryDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)pushNotificationState;
-(NSDate *)ageVerificationExpirationDate;
-(NSNumber *)networkTypeOverride;
-(void)setLastKnownSubscriptionStatusBaseCacheKey:(NSDictionary *)arg1 ;
-(void)setLastKnownUserAgeVerificationState:(NSDictionary *)arg1 ;
-(BOOL)isPrivacyAcknowledgementDisabledForMusic;
-(void)setBypassBagSanityChecks:(BOOL)arg1 ;
-(void)synchronize;
-(BOOL)bypassBagSanityChecks;
-(void)setAgeVerificationExpirationDate:(NSDate *)arg1 ;
-(id)init;
-(BOOL)shouldTreatInitialSagaImportAsFailed;
-(BOOL)allowLowAffinityRecommendations;
-(NSNumber *)deviceClassOverride;
-(void)setShouldRunAgeVerification:(BOOL)arg1 ;
-(void)setAuthServiceClientTokenCache:(NSDictionary *)arg1 ;
-(NSDictionary *)lastCookieHeadersForRevokingMusicUserTokens;
-(void)setCachedSubscriptionStatus:(NSDictionary *)arg1 ;
-(NSString *)productVersionOverride;
-(NSString *)hardwarePlatformOverride;
-(void)setLastCookieHeadersForRevokingMusicUserTokens:(NSDictionary *)arg1 ;
-(void)setLastActiveAccountDSID:(NSNumber *)arg1 ;
-(NSNumber *)lastActiveAccountDSID;
-(id)_musicUserDefaults;
-(void)setMediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates:(NSDictionary *)arg1 ;
-(NSNumber *)fairPlayDeviceTypeOverride;
-(NSDictionary *)mediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates;
-(void)setLastKnownLocalStoreAccountProperties:(NSDictionary *)arg1 ;
-(BOOL)shouldTreatSubscriptionStatusCheckAsIncomplete;
-(void)setIgnoreExtendedCertificateValidation:(BOOL)arg1 ;
-(BOOL)shouldTreatSagaAddComputerCallAsFailed;
-(BOOL)isExplicitContentAllowedForCurrentYear;
-(NSDictionary *)lastKnownUserAgeVerificationState;
-(void)setPushNotificationState:(NSDictionary *)arg1 ;
-(NSString *)defaultStoreFront;
-(void)setCachedMusicUserTokens:(NSDictionary *)arg1 ;
-(void)setLastAllowedInteractiveAuthenticationTime:(NSDate *)arg1 ;
-(NSString *)productPlatformOverride;
-(NSDate *)lastAllowedInteractiveAuthenticationTime;
-(BOOL)automaticDownloadsEnabled;
-(void)_setOrRemoveObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)shouldTreatSubscriptionStatusAsExpired;
-(BOOL)ignoreExtendedCertificateValidation;
-(void)deleteAutomaticDownloadsKey;
-(BOOL)shouldRunAgeVerification;
-(BOOL)shouldReduceLibraryRecommendationsXPCInterval;
-(void)setCloudMediaLibraryUID:(NSString *)arg1 ;
-(void)setExplicitContentAllowedForExpirationYear:(BOOL)arg1 ;
-(NSDictionary *)authServiceClientTokenCache;
-(BOOL)shouldForceiPhoneBehaviors;
-(void)setLastAuthenticationDialogResponseTime:(double)arg1 ;
-(void)setAutomaticDownloadsEnabled:(BOOL)arg1 ;
-(NSUserDefaults *)internalDefaults;
-(BOOL)isExplicitContentAllowedForExpirationYear;
-(void)setExplicitContentAllowedForCurrentYear:(BOOL)arg1 ;
-(BOOL)shouldForceLibraryRecommendationAnalysis;
-(NSDictionary *)lastKnownSubscriptionStatusBaseCacheKey;
-(NSDictionary *)accountNotificationsShowInLibraryDictionary;
-(NSNumber *)authServiceClientTokenTimeToLive;
-(NSDictionary *)cachedMusicUserTokens;
-(void)setGrazingPathEnabled:(BOOL)arg1 ;
-(double)lastAuthenticationDialogResponseTime;
-(BOOL)isGrazingPathEnabled;
@end

