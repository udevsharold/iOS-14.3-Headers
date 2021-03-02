/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface DEWorkQueues : NSObject {

	NSMutableDictionary* _queues;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (retain) NSMutableDictionary * queues;                            //@synthesize queues=_queues - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)queues;
-(id)initWithDispatchQueue:(id)arg1 ;
-(void)advance:(id)arg1 ;
-(void)on:(id)arg1 enqueue:(/*^block*/id)arg2 ;
-(void)setQueues:(NSMutableDictionary *)arg1 ;
@end
