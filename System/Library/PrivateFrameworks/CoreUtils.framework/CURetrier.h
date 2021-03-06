/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface CURetrier : NSObject {

	BOOL _invalidateCalled;
	NSObject*<OS_dispatch_source> _retryTimer;
	/*^block*/id _actionHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _interval;
	double _leeway;
	/*^block*/id _invalidationHandler;
	double _startTime;

}

@property (nonatomic,copy) id actionHandler;                                          //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) double interval;                                         //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic) double leeway;                                           //@synthesize leeway=_leeway - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) double startTime;                                        //@synthesize startTime=_startTime - In the implementation block
-(void)setInvalidationHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)succeededDirect;
-(id)init;
-(void)failed;
-(void)succeeded;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(double)leeway;
-(void)setActionHandler:(id)arg1 ;
-(id)actionHandler;
-(void)setStartTime:(double)arg1 ;
-(void)failedDirect;
-(void)setLeeway:(double)arg1 ;
-(void)invalidateDirect;
-(double)startTime;
-(void)start;
-(void)startDirect;
-(void)invalidate;
-(id)invalidationHandler;
@end

