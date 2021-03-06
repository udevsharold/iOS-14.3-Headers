/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVFlashlight, NSObject, NSHashTable;

@interface SBUIFlashlightController : NSObject {

	AVFlashlight* _flashlight;
	NSObject*<OS_dispatch_queue> _flashlightQueue;
	unsigned long long _level;
	NSHashTable* _observers;
	BOOL _overheated;
	BOOL _available;

}

@property (getter=isAvailable,nonatomic,readonly) BOOL available;                //@synthesize available=_available - In the implementation block
@property (getter=isOverheated,nonatomic,readonly) BOOL overheated;              //@synthesize overheated=_overheated - In the implementation block
@property (assign,nonatomic) unsigned long long level; 
+(id)sharedInstance;
-(void)warmUp;
-(void)turnFlashlightOffForReason:(id)arg1 ;
-(void)removeAllObservers;
-(void)setLevel:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)_loadFlashlightLevel;
-(BOOL)isAvailable;
-(unsigned long long)level;
-(void)removeObserver:(id)arg1 ;
-(void)_postOverheatedChangeNotification:(BOOL)arg1 ;
-(void)_postLevelChangeNotification:(unsigned long long)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_turnPowerOff;
-(BOOL)isOverheated;
-(void)turnFlashlightOnForReason:(id)arg1 ;
-(void)_setFlashlightLevel:(float)arg1 ;
-(void)_postAvailabilityChangeNotification:(BOOL)arg1 ;
-(void)coolDown;
-(void)_turnPowerOn;
-(void)_updateStateWithAvailable:(BOOL)arg1 level:(unsigned long long)arg2 overheated:(BOOL)arg3 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_storeFlashlightLevel:(unsigned long long)arg1 ;
@end

