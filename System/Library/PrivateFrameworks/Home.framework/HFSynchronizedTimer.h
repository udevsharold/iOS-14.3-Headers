/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer, NSMapTable;

@interface HFSynchronizedTimer : NSObject {

	NSTimer* _activeTimer;
	NSMapTable* _observers;

}

@property (nonatomic,retain) NSTimer * activeTimer;                 //@synthesize activeTimer=_activeTimer - In the implementation block
@property (nonatomic,readonly) NSMapTable * observers;              //@synthesize observers=_observers - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(NSMapTable *)observers;
-(void)addObserver:(id)arg1 ;
-(NSTimer *)activeTimer;
-(void)_updateTimerState;
-(void)setActiveTimer:(NSTimer *)arg1 ;
-(void)_timerDidFire;
@end
