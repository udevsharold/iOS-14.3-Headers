/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDDataObserver.h>
#import <libobjc.A.dylib/NRDevicePropertyObserver.h>

@protocol HDGymKitSettingsDelegate;
@class HDProfile, NRDevice, NSString;

@interface HDGymKitSettings : NSObject <HDDatabaseProtectedDataObserver, HDDataObserver, NRDevicePropertyObserver> {

	HDProfile* _profile;
	unsigned long long _nfcPermission;
	os_unfair_lock_s _lock;
	int _privacyNotificationToken;
	NRDevice* _currentDevice;
	id<HDGymKitSettingsDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long nfcPermission; 
@property (nonatomic,readonly) BOOL fitnessTrackingEnabled; 
@property (assign,nonatomic,__weak) id<HDGymKitSettingsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProfile:(id)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)dealloc;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)setDelegate:(id<HDGymKitSettingsDelegate>)arg1 ;
-(void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3 ;
-(id<HDGymKitSettingsDelegate>)delegate;
-(void)_monitorFieldAndPrivacySettings;
-(void)_startObservingWatchWorkouts;
-(void)_setNFCAlwaysOnPreferenceIfNecessary;
-(void)_stopObservingWatchWorkouts;
-(BOOL)_isSatelliteWatch;
-(void)_setConnectedGymPreferencesDefaultNFCAlwaysOnEnabled:(BOOL)arg1 ;
-(void)_handleNFCPreferencesForNFCAlwaysOn:(BOOL)arg1 ;
-(void)_currentActivityMoveModeWithCompletion:(/*^block*/id)arg1 ;
-(void)_enableNFCAlwaysOnIfWatchWorkout;
-(BOOL)fitnessTrackingEnabled;
-(unsigned long long)nfcPermission;
-(void)unitTest_simulateNRDeviceUpdate;
@end
