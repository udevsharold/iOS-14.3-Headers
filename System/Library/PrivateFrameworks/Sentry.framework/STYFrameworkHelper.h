/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Sentry.framework/Sentry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_os_log;
@class NSObject;

@interface STYFrameworkHelper : NSObject {

	NSObject*<OS_dispatch_queue> _sharedSerialQueueAtUtility;
	NSObject*<OS_dispatch_queue> _sharedConcurrentQueueAtUtility;
	NSObject*<OS_dispatch_queue> _sharedConcurrentQueueAtBackground;
	NSObject*<OS_os_log> _logHandle;

}

@property (retain) NSObject*<OS_dispatch_queue> sharedSerialQueueAtUtility;                     //@synthesize sharedSerialQueueAtUtility=_sharedSerialQueueAtUtility - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> sharedConcurrentQueueAtUtility;                 //@synthesize sharedConcurrentQueueAtUtility=_sharedConcurrentQueueAtUtility - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> sharedConcurrentQueueAtBackground;              //@synthesize sharedConcurrentQueueAtBackground=_sharedConcurrentQueueAtBackground - In the implementation block
@property (retain) NSObject*<OS_os_log> logHandle;                                              //@synthesize logHandle=_logHandle - In the implementation block
+(id)sharedHelper;
-(NSObject*<OS_os_log>)logHandle;
-(void)setLogHandle:(NSObject*<OS_os_log>)arg1 ;
-(NSObject*<OS_dispatch_queue>)sharedSerialQueueAtUtility;
-(void)setSharedSerialQueueAtUtility:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSharedConcurrentQueueAtUtility:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSharedConcurrentQueueAtBackground:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)subsystemForSignposts;
-(NSObject*<OS_dispatch_queue>)sharedConcurrentQueueAtUtility;
-(NSObject*<OS_dispatch_queue>)sharedConcurrentQueueAtBackground;
@end
