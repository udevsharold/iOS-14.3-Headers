/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface IMMultiQueue : NSObject {

	NSMutableDictionary* _queueMap;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)addBlock:(/*^block*/id)arg1 forKey:(id)arg2 description:(id)arg3 ;
-(BOOL)addBlock:(/*^block*/id)arg1 withTimeout:(double)arg2 forKey:(id)arg3 description:(id)arg4 ;
-(id)loggableOverviewForKey:(id)arg1 ;
-(id)loggableOverview;
-(void)_popEnqueuedBlockWithGUID:(id)arg1 key:(id)arg2 ;
-(BOOL)_addBlock:(/*^block*/id)arg1 withGUID:(id)arg2 forKey:(id)arg3 description:(id)arg4 ;
@end

