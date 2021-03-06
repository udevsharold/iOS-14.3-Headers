/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSString, NSObject;

@interface _KSSystemTask : NSObject {

	unsigned long long _periodSeconds;
	NSString* _name;
	/*^block*/id _handler;
	double _maxRunTime;
	double _checkInTime;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _executionCriteria;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> executionCriteria;              //@synthesize executionCriteria=_executionCriteria - In the implementation block
@property (nonatomic,readonly) unsigned long long periodSeconds;                        //@synthesize periodSeconds=_periodSeconds - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) id handler;                                              //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) double maxRunTime;                                         //@synthesize maxRunTime=_maxRunTime - In the implementation block
@property (assign,nonatomic) double checkInTime;                                        //@synthesize checkInTime=_checkInTime - In the implementation block
-(id)handler;
-(id)init;
-(NSObject*<OS_xpc_object>)executionCriteria;
-(double)checkInTime;
-(void)setCheckInTime:(double)arg1 ;
-(unsigned long long)periodSeconds;
-(id)initWithName:(id)arg1 isPeriodic:(BOOL)arg2 period:(unsigned long long)arg3 handler:(/*^block*/id)arg4 ;
-(void)setMaxRunTime:(double)arg1 ;
-(NSString *)name;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithName:(id)arg1 delay:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(double)maxRunTime;
@end

