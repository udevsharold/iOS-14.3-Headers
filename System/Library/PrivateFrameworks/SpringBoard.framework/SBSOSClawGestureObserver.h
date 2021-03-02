/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SOSManagerClientObserver.h>
#import <libobjc.A.dylib/SBVolumePressBandit.h>

@protocol SBSOSClawGestureObserverDelegate;
@class SOSManager, SBMainWorkspace, NSMutableSet, SBClawGestureLogger, SBSOSDefaults, BSTimer, NSString;

@interface SBSOSClawGestureObserver : NSObject <SOSManagerClientObserver, SBVolumePressBandit> {

	SOSManager* _sosManager;
	SBMainWorkspace* _workspace;
	BOOL _sosEnabled;
	BOOL _wasSOSTiggeredByClaw;
	NSMutableSet* _activePressTypes;
	SBClawGestureLogger* _clawGestureLogger;
	id<SBSOSClawGestureObserverDelegate> _delegate;
	SBSOSDefaults* _sosDefaults;
	BSTimer* _sosTriggerTimer;

}

@property (nonatomic,retain) NSMutableSet * activePressTypes;                                                                        //@synthesize activePressTypes=_activePressTypes - In the implementation block
@property (getter=_isSOSActivated,nonatomic,readonly) BOOL sosActivated; 
@property (setter=_setSOSDefaults:,nonatomic,retain) SBSOSDefaults * sosDefaults;                                                    //@synthesize sosDefaults=_sosDefaults - In the implementation block
@property (nonatomic,retain) BSTimer * sosTriggerTimer;                                                                              //@synthesize sosTriggerTimer=_sosTriggerTimer - In the implementation block
@property (nonatomic,retain) SBClawGestureLogger * clawGestureLogger;                                                                //@synthesize clawGestureLogger=_clawGestureLogger - In the implementation block
@property (assign,setter=_setWasSOSTriggeredByClaw:,getter=_wasSOSTriggeredByClaw,nonatomic) BOOL wasSOSTiggeredByClaw;              //@synthesize wasSOSTiggeredByClaw=_wasSOSTiggeredByClaw - In the implementation block
@property (getter=_isClawGestureActive,nonatomic,readonly) BOOL clawGestureActive; 
@property (getter=_isAutomaticCallCountdownEnabled,nonatomic,readonly) BOOL autoCallCountdownEnabled; 
@property (assign,getter=isGestureLoggingEnabled,nonatomic) BOOL gestureLoggingEnabled; 
@property (assign,setter=setSOSEnabled:,getter=isSOSEnabled,nonatomic) BOOL sosEnabled;                                              //@synthesize sosEnabled=_sosEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<SBSOSClawGestureObserverDelegate> delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
@property (getter=isClawActivated,nonatomic,readonly) BOOL clawActivated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)didUpdateCurrentSOSInitiationState:(long long)arg1 ;
-(SBSOSDefaults *)sosDefaults;
-(void)setDelegate:(id<SBSOSClawGestureObserverDelegate>)arg1 ;
-(id<SBSOSClawGestureObserverDelegate>)delegate;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(id)_initWithSOSManager:(id)arg1 workspace:(id)arg2 ;
-(BOOL)isSOSEnabled;
-(void)_presentSOSInterface;
-(BOOL)_isClawGestureActive;
-(NSMutableSet *)activePressTypes;
-(BOOL)isGestureLoggingEnabled;
-(SBClawGestureLogger *)clawGestureLogger;
-(void)_cancelSOSActivity;
-(BOOL)_isSOSActivated;
-(BOOL)_isAutomaticCallCountdownEnabled;
-(BOOL)_wasSOSTriggeredByClaw;
-(BSTimer *)sosTriggerTimer;
-(void)_setWasSOSTriggeredByClaw:(BOOL)arg1 ;
-(BOOL)isClawActivated;
-(void)noteButtonPress:(long long)arg1 isDown:(BOOL)arg2 ;
-(void)noteGestureReset;
-(void)setGestureLoggingEnabled:(BOOL)arg1 ;
-(void)setSOSEnabled:(BOOL)arg1 ;
-(void)setActivePressTypes:(NSMutableSet *)arg1 ;
-(void)setClawGestureLogger:(SBClawGestureLogger *)arg1 ;
-(void)_setSOSDefaults:(id)arg1 ;
-(void)setSosTriggerTimer:(BSTimer *)arg1 ;
@end
