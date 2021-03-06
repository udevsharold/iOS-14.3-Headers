/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSString, NSOperationQueue, NSObject, NSRunLoop;

@interface MSVWatchdog : NSObject {

	BOOL _scheduled;
	BOOL _running;
	double _interval;
	double _timeoutInterval;
	/*^block*/id _timeoutCallback;
	NSString* _mode;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSRunLoop* _runLoop;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;

}

@property (nonatomic,retain) NSOperationQueue * operationQueue;                       //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSRunLoop * runLoop;                                     //@synthesize runLoop=_runLoop - In the implementation block
@property (assign,nonatomic) BOOL scheduled;                                          //@synthesize scheduled=_scheduled - In the implementation block
@property (assign,nonatomic) BOOL running;                                            //@synthesize running=_running - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                     //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) double interval;                                         //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                                  //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,copy) id timeoutCallback;                                        //@synthesize timeoutCallback=_timeoutCallback - In the implementation block
@property (nonatomic,retain) NSString * mode;                                         //@synthesize mode=_mode - In the implementation block
-(NSRunLoop *)runLoop;
-(void)scheduleInRunLoop:(id)arg1 ;
-(double)timeoutInterval;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setMode:(NSString *)arg1 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(NSString *)mode;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(void)setRunLoop:(NSRunLoop *)arg1 ;
-(BOOL)running;
-(NSOperationQueue *)operationQueue;
-(BOOL)scheduled;
-(void)setRunning:(BOOL)arg1 ;
-(void)suspend;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_cancelTimeout;
-(void)_invokeCallback;
-(void)_scheduleTest;
-(void)_scheduleTimeout;
-(id)timeoutCallback;
-(void)setScheduled:(BOOL)arg1 ;
-(void)scheduleInOperationQueue:(id)arg1 ;
-(void)scheduleInDispatchQueue:(id)arg1 ;
-(void)setTimeoutCallback:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setTimeoutInterval:(double)arg1 ;
-(void)resume;
@end

