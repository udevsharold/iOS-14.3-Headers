/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue;
#import <CoreServices/CoreServices-Structs.h>
@class NSMutableDictionary, NSObject;

@interface _LSInstallOperationChoke : NSObject {

	unsigned long long _numConcurrentOperations;
	os_unfair_lock_s _lock;
	NSMutableDictionary* _queuedWork;
	unsigned long long _activeInstallers;
	unsigned long long _activeUninstallers;
	NSObject*<OS_dispatch_semaphore> _backpressureSemaphore;
	NSObject*<OS_dispatch_queue> _concurrentQueue;

}
+(long long)_bufferedRequestSlop;
-(void)performOperationForBundleIdentifier:(id)arg1 installType:(long long)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)becomeInstaller;
-(void)retireFromInstaller;
-(BOOL)becomeUninstaller;
-(void)retireOperation:(id)arg1 ;
-(void)enqueueInstallationOperation:(id)arg1 ;
-(id)claimOperationOfType:(long long)arg1 ;
-(void)retireFromUninstaller;
-(id)availableOperationOfType:(long long)arg1 ;
-(id)initWithWidth:(long long)arg1 ;
@end
