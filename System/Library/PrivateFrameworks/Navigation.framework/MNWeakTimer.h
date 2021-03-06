/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface MNWeakTimer : NSObject {

	id _target;
	SEL _selector;
	NSTimer* _timer;

}

@property (assign,nonatomic,__weak) id target;               //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                   //@synthesize selector=_selector - In the implementation block
@property (nonatomic,readonly) NSTimer * timer;              //@synthesize timer=_timer - In the implementation block
+(id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)setSelector:(SEL)arg1 ;
-(void)dealloc;
-(id)target;
-(SEL)selector;
-(void)setTarget:(id)arg1 ;
-(NSTimer *)timer;
-(void)invalidate;
-(void)_timerDidFire;
-(id)initWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 ;
@end

