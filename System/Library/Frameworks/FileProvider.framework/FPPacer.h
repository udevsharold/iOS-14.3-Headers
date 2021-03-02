/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface FPPacer : NSObject {

	double _lastFireTime;
	double _minFireInterval;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_source> _timer;
	Ai _sourceSuspendCount;
	/*^block*/id _eventBlock;

}

@property (nonatomic,copy) id eventBlock;              //@synthesize eventBlock=_eventBlock - In the implementation block
-(void)_scheduleNextFire;
-(void)dealloc;
-(double)_computeNextTime;
-(id)eventBlock;
-(void)signal;
-(id)initWithName:(id)arg1 queue:(id)arg2 minFireInterval:(double)arg3 ;
-(void)setEventBlock:(id)arg1 ;
-(void)suspend;
-(void)_fire;
-(void)resume;
@end
