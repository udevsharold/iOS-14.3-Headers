/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSString, NSObject;

@interface HDFitnessMachineStateTimer : NSObject {

	NSString* _name;
	unsigned long long _duration;
	NSObject*<OS_dispatch_source> _timer;
	/*^block*/id _handler;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long duration;                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> timer;              //@synthesize timer=_timer - In the implementation block
@property (nonatomic,copy,readonly) id handler;                                  //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
+(id)_timerWithDuration:(long long)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)begin;
-(id)handler;
-(void)dealloc;
-(BOOL)isValid;
-(void)cancel;
-(NSString *)name;
-(NSObject*<OS_dispatch_source>)timer;
-(unsigned long long)duration;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithName:(id)arg1 duration:(unsigned long long)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
@end

