/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBLockScreenManager, SBLockStateAggregator, NSMutableDictionary, NSMutableSet, DNDEventBehaviorResolutionService;

@interface SBNCSoundController : NSObject {

	SBLockScreenManager* _lockScreenManager;
	SBLockStateAggregator* _lockStateAggregator;
	NSMutableDictionary* _playingSounds;
	NSMutableSet* _requestsRequiringExplicitKill;
	DNDEventBehaviorResolutionService* _dndEventBehaviorResolutionService;

}

@property (nonatomic,retain) SBLockScreenManager * lockScreenManager;                                            //@synthesize lockScreenManager=_lockScreenManager - In the implementation block
@property (nonatomic,retain) SBLockStateAggregator * lockStateAggregator;                                        //@synthesize lockStateAggregator=_lockStateAggregator - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * playingSounds;                                                //@synthesize playingSounds=_playingSounds - In the implementation block
@property (nonatomic,retain) NSMutableSet * requestsRequiringExplicitKill;                                       //@synthesize requestsRequiringExplicitKill=_requestsRequiringExplicitKill - In the implementation block
@property (nonatomic,retain) DNDEventBehaviorResolutionService * dndEventBehaviorResolutionService;              //@synthesize dndEventBehaviorResolutionService=_dndEventBehaviorResolutionService - In the implementation block
-(void)_killSounds;
-(id)init;
-(void)playSoundForNotificationRequest:(id)arg1 presentingDestination:(id)arg2 ;
-(BOOL)canPlaySoundForNotificationRequest:(id)arg1 ;
-(void)setDndEventBehaviorResolutionService:(DNDEventBehaviorResolutionService *)arg1 ;
-(DNDEventBehaviorResolutionService *)dndEventBehaviorResolutionService;
-(BOOL)_isDeviceUILocked;
-(void)_lockStateChanged:(id)arg1 ;
-(void)setPlayingSounds:(NSMutableDictionary *)arg1 ;
-(void)playSoundIfPossibleForNotificationRequest:(id)arg1 presentingDestination:(id)arg2 ;
-(SBLockStateAggregator *)lockStateAggregator;
-(void)setLockStateAggregator:(SBLockStateAggregator *)arg1 ;
-(void)setRequestsRequiringExplicitKill:(NSMutableSet *)arg1 ;
-(void)stopSoundForNotificationRequest:(id)arg1 ;
-(void)_hardwareButtonPressed:(id)arg1 ;
-(SBLockScreenManager *)lockScreenManager;
-(id)initWithLockScreenManager:(id)arg1 lockStateAggregator:(id)arg2 ;
-(NSMutableSet *)requestsRequiringExplicitKill;
-(void)setLockScreenManager:(SBLockScreenManager *)arg1 ;
-(NSMutableDictionary *)playingSounds;
@end

