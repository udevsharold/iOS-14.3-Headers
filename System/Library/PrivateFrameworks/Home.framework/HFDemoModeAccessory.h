/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <HomeKit/HMAccessory.h>
#import <libobjc.A.dylib/HFUserNotificationServiceSettingsProviding.h>

@class HFUserNotificationServiceSettings, NSUUID, NSPredicate, HMHome, NSString;

@interface HFDemoModeAccessory : HMAccessory <HFUserNotificationServiceSettingsProviding> {

	BOOL _notificationsEnabled;
	BOOL _isInternallyCertified;
	NSUUID* _internalUniqueIdentifier;
	NSPredicate* _notificationCondition;
	HMHome* _home;

}

@property (nonatomic,retain) NSUUID * internalUniqueIdentifier;                                                   //@synthesize internalUniqueIdentifier=_internalUniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * model; 
@property (nonatomic,copy,readonly) NSString * manufacturer; 
@property (nonatomic,copy,readonly) NSString * firmwareVersion; 
@property (assign,getter=areNotificationsEnabled,nonatomic) BOOL notificationsEnabled;                            //@synthesize notificationsEnabled=_notificationsEnabled - In the implementation block
@property (nonatomic,retain) NSPredicate * notificationCondition;                                                 //@synthesize notificationCondition=_notificationCondition - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                                       //@synthesize home=_home - In the implementation block
@property (assign,nonatomic) BOOL isInternallyCertified;                                                          //@synthesize isInternallyCertified=_isInternallyCertified - In the implementation block
@property (nonatomic,copy,readonly) HFUserNotificationServiceSettings * hf_userNotificationSettings; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)accessoryWithContentsOfDictionary:(id)arg1 forHome:(id)arg2 ;
+(BOOL)_hasValidKeys:(id)arg1 ;
-(id)room;
-(id)category;
-(NSString *)manufacturer;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(NSString *)firmwareVersion;
-(id)serialNumber;
-(BOOL)areNotificationsEnabled;
-(HMHome *)home;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)model;
-(BOOL)hf_shouldShowSoftwareUpdateInfo;
-(id)hf_serviceNameComponents;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(NSString *)description;
-(void)setHome:(HMHome *)arg1 ;
-(BOOL)isReachable;
-(HFUserNotificationServiceSettings *)hf_userNotificationSettings;
-(long long)certificationStatus;
-(id)name;
-(id)hf_updateIsFavorite:(BOOL)arg1 ;
-(BOOL)hf_isFavorite;
-(BOOL)hf_hasSetFavorite;
-(BOOL)hf_shouldShowInFavorites;
-(id)services;
-(id)symptomsHandler;
-(id)initWithContentsOfDictionary:(id)arg1 forHome:(id)arg2 ;
-(BOOL)_isAppleInternalAccessory;
-(BOOL)_shouldShowAppleInternalManufacturerInfo;
-(void)_updateManufacturerInfoWithString:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isInternallyCertified;
-(void)setIsInternallyCertified:(BOOL)arg1 ;
-(id)hf_updateUserNotificationSettings:(id)arg1 ;
-(NSUUID *)internalUniqueIdentifier;
-(void)setInternalUniqueIdentifier:(NSUUID *)arg1 ;
-(NSPredicate *)notificationCondition;
-(void)setNotificationCondition:(NSPredicate *)arg1 ;
@end

