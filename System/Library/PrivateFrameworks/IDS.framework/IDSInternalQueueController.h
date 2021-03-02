/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface IDSInternalQueueController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	void* _contextKey;

}
+(id)sharedInstance;
-(id)init;
-(void)assertQueueIsNotCurrent;
-(void)performBlock:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
-(id)initWithQueue:(id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(id)initWithName:(char*)arg1 contextKey:(void*)arg2 ;
-(void)assertQueueIsCurrent;
-(BOOL)isQueueCurrent;
-(id)queue;
@end
