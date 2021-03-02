/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSDate;

@interface ATXModeScheduler : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;
	double _leewaySeconds;
	NSDate* _scheduledDate;

}
-(id)init;
-(void)cancelPendingOperation;
-(id)initWithQueue:(id)arg1 operationBlock:(/*^block*/id)arg2 andLeeway:(double)arg3 ;
-(id)runAfterDelaySecondsIfNotYetScheduled:(double)arg1 ;
@end
