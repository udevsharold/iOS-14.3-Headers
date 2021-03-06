/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_workloop;
@class NSString, BRCFairScheduler, NSObject;

@interface BRCFairSource : NSObject {

	unsigned long long _schedulerBitIndex;
	NSString* _name;
	BRCFairScheduler* _scheduler;
	int _suspendCount;
	BOOL _cancelled;
	BOOL _signaled;
	NSObject*<OS_dispatch_workloop> _workloop;
	/*^block*/id _eventHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_workloop> workloop;              //@synthesize workloop=_workloop - In the implementation block
@property (nonatomic,copy) id eventHandler;                                         //@synthesize eventHandler=_eventHandler - In the implementation block
-(void)setEventHandler:(id)arg1 ;
-(id)eventHandler;
-(void)setWorkloop:(NSObject*<OS_dispatch_workloop>)arg1 ;
-(id)description;
-(void)cancel;
-(void)signal;
-(NSObject*<OS_dispatch_workloop>)workloop;
-(void)suspend;
-(void)resume;
-(id)initWithName:(id)arg1 scheduler:(id)arg2 ;
-(void)_runEventHandler;
@end

