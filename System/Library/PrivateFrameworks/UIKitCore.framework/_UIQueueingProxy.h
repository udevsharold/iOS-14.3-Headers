/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITargetedProxy.h>

@class NSMutableArray;

@interface _UIQueueingProxy : _UITargetedProxy {

	os_unfair_lock_s _lock;
	unsigned long long _suspensionCount;
	NSMutableArray* _queuedInvocations;
	/*^block*/id _shouldSuspendInvocationBlock;

}
+(id)proxyWithTarget:(id)arg1 ;
+(id)proxyWithTarget:(id)arg1 shouldSuspendInvocationBlock:(/*^block*/id)arg2 ;
-(void)_dispatchSuspendedMessages;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)description;
-(void)suspend;
-(void)resume;
-(void)removeAllEnqueuedInvocations;
@end

