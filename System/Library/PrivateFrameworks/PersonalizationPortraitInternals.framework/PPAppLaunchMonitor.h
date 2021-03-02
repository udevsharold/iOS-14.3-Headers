/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _PASLock, NSObject;

@interface PPAppLaunchMonitor : NSObject {

	_PASLock* _lock;
	NSObject*<OS_dispatch_queue> _contextHandlerQueue;

}
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(id)registerForAppLaunchWithBundleId:(id)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)deregisterForAppLaunchWithToken:(id)arg1 ;
-(void)_registerForAppChangesIfNeededWithGuardedData:(id)arg1 ;
@end
