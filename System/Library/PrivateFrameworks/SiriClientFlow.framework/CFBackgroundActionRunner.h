/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface CFBackgroundActionRunner : NSObject {

	BOOL _runningLocally;
	BOOL _backgroundActionRunnerSuccess;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign) BOOL backgroundActionRunnerSuccess;              //@synthesize backgroundActionRunnerSuccess=_backgroundActionRunnerSuccess - In the implementation block
@property (assign) BOOL runningLocally;                             //@synthesize runningLocally=_runningLocally - In the implementation block
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)runBackgroundActions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setBackgroundActionRunnerSuccess:(BOOL)arg1 ;
-(void)_handleBackgroundAction:(id)arg1 onDispatchGroup:(id)arg2 ;
-(BOOL)backgroundActionRunnerSuccess;
-(void)_handleBackgroundActionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)runningLocally;
-(void)setRunningLocally:(BOOL)arg1 ;
@end

