/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SASLockStateMonitorDelegate;
@class NSNumber;

@interface SASLockStateMonitor : NSObject {

	BOOL _unlockedByTouchID;
	id<SASLockStateMonitorDelegate> _delegate;
	unsigned long long _lockState;
	NSNumber* _assistantIsEnabled;

}

@property (assign,nonatomic) unsigned long long lockState;                                 //@synthesize lockState=_lockState - In the implementation block
@property (assign,nonatomic) BOOL unlockedByTouchID;                                       //@synthesize unlockedByTouchID=_unlockedByTouchID - In the implementation block
@property (nonatomic,retain) NSNumber * assistantIsEnabled;                                //@synthesize assistantIsEnabled=_assistantIsEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<SASLockStateMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)isBlocked;
-(void)setLockState:(unsigned long long)arg1 ;
-(unsigned long long)lockState;
-(id)init;
-(void)_updateLockState;
-(void)setUnlockedByTouchID:(BOOL)arg1 ;
-(void)dealloc;
-(void)_lockStateDidChange:(id)arg1 ;
-(BOOL)unlockedByTouchID;
-(void)setAssistantIsEnabled:(NSNumber *)arg1 ;
-(BOOL)isScreenOn;
-(unsigned long long)_currentLockState;
-(void)setDelegate:(id<SASLockStateMonitorDelegate>)arg1 ;
-(id<SASLockStateMonitorDelegate>)delegate;
-(BOOL)hasUnlockedSinceBoot;
-(NSNumber *)assistantIsEnabled;
@end

