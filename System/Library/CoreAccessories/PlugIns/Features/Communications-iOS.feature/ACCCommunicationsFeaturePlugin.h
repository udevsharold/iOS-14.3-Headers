/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/Communications-iOS.feature/Communications-iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACCCommunicationsCenterCallStateDelegate.h>
#import <libobjc.A.dylib/ACCCommunicationsCenterCommunicationsDelegate.h>
#import <libobjc.A.dylib/ACCCommunicationsCenterCallControlsDelegate.h>
#import <libobjc.A.dylib/ACCCommunicationsCenterListUpdatesDelegate.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>
#import <libobjc.A.dylib/ACCFeaturePluginProtocol.h>

@protocol OS_dispatch_queue;
@class ACCCommunicationsCenter, NSObject, VMVoicemailManager, RadiosPreferences, CHManager, NSString;

@interface ACCCommunicationsFeaturePlugin : NSObject <ACCCommunicationsCenterCallStateDelegate, ACCCommunicationsCenterCommunicationsDelegate, ACCCommunicationsCenterCallControlsDelegate, ACCCommunicationsCenterListUpdatesDelegate, RadiosPreferencesDelegate, ACCFeaturePluginProtocol> {

	BOOL _isRunning;
	ACCCommunicationsCenter* _commCenter;
	NSObject*<OS_dispatch_queue> _queue;
	VMVoicemailManager* _vmManager;
	RadiosPreferences* _radiosPreferences;
	CHManager* _chManager;

}

@property (assign,nonatomic) BOOL isRunning;                                     //@synthesize isRunning=_isRunning - In the implementation block
@property (nonatomic,retain) ACCCommunicationsCenter * commCenter;               //@synthesize commCenter=_commCenter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) VMVoicemailManager * vmManager;                     //@synthesize vmManager=_vmManager - In the implementation block
@property (nonatomic,retain) RadiosPreferences * radiosPreferences;              //@synthesize radiosPreferences=_radiosPreferences - In the implementation block
@property (nonatomic,retain) CHManager * chManager;                              //@synthesize chManager=_chManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * pluginName; 
-(BOOL)swapCalls;
-(BOOL)isRunning;
-(NSString *)pluginName;
-(id)currentAudioAndVideoCalls;
-(BOOL)isAirplaneModeEnabled;
-(unsigned long long)currentCallCount;
-(void)startPlugin;
-(void)setVmManager:(VMVoicemailManager *)arg1 ;
-(BOOL)sendDTMF:(int)arg1 forCallWithUUID:(id)arg2 ;
-(void)stopPlugin;
-(BOOL)isSwapAvailable;
-(void)initPlugin;
-(void)callStateDidChangeForCall:(id)arg1 ;
-(BOOL)endCallWithAction:(int)arg1 callUUID:(id)arg2 ;
-(void)setIsRunning:(BOOL)arg1 ;
-(BOOL)isFaceTimeVideoEnabled;
-(RadiosPreferences *)radiosPreferences;
-(void)airplaneModeChanged;
-(BOOL)initiateCallToDestination:(id)arg1 withService:(int)arg2 addressBookID:(id)arg3 ;
-(BOOL)updateHoldStatus:(BOOL)arg1 forCallWithUUID:(id)arg2 ;
-(int)currentSignalStrength;
-(int)currentRegistrationStatus;
-(void)setChManager:(CHManager *)arg1 ;
-(id)currentFavoritesListWithLimit:(unsigned long long)arg1 ;
-(unsigned long long)currentUnreadVoicemailCount;
-(void)addNotificationObservers;
-(BOOL)initiateCallToVoicemail;
-(void)setRadiosPreferences:(RadiosPreferences *)arg1 ;
-(BOOL)isEndAndAcceptAvailable;
-(id)currentCallStates;
-(BOOL)acceptCallWithAction:(int)arg1 callUUID:(id)arg2 ;
-(BOOL)updateMuteStatus:(BOOL)arg1 ;
-(NSString *)description;
-(BOOL)initiateRedial;
-(CHManager *)chManager;
-(id)currentCommunicationsStatus;
-(BOOL)isInitiateCallAllowed;
-(id)currentRecentsListWithCoalescing:(BOOL)arg1 limit:(unsigned long long)arg2 ;
-(id)currentCarrierName;
-(BOOL)isHoldAndAcceptAvailable;
-(BOOL)isMergeAvailable;
-(BOOL)isHoldAvailable;
-(VMVoicemailManager *)vmManager;
-(BOOL)mergeCalls;
-(BOOL)isTelephonyEnabled;
-(BOOL)isFaceTimeAudioEnabled;
-(void)favoritesListDidChangeNotification:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)callStateDidChangeNotification:(id)arg1 ;
-(id)currentLocalizedCarrierName;
-(void)removeNotificationObservers;
-(ACCCommunicationsCenter *)commCenter;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setCommCenter:(ACCCommunicationsCenter *)arg1 ;
-(BOOL)currentMuteStatus;
-(void)recentsListDidChangeNotification:(id)arg1 ;
-(BOOL)endAllCalls;
-(void)commStatusDidChangeNotification:(id)arg1 ;
-(BOOL)isCellularSupported;
@end

