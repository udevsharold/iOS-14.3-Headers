/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAP2LoggingObject.h>

@class NSOperation, NSString, HAP2Lock, NSOperationQueue;

@interface HAP2SerializedOperationQueue : HAP2LoggingObject {

	NSOperation* _lastOperation;
	NSString* _name;
	HAP2Lock* _lock;
	NSOperationQueue* _queue;

}

@property (nonatomic,readonly) HAP2Lock * lock;                               //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * queue;                      //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) NSOperation * lastOperation;              //@synthesize lastOperation=_lastOperation - In the implementation block
@property (nonatomic,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
+(id)commonOperationQueue;
-(void)addOperation:(id)arg1 ;
-(id)init;
-(void)addConcurrentOperation:(id)arg1 ;
-(void)addConcurrentBlock:(/*^block*/id)arg1 ;
-(void)assertCurrentQueue;
-(void)addBlock:(/*^block*/id)arg1 ;
-(id)_swapLastOperation:(id)arg1 ;
-(void)setLastOperation:(NSOperation *)arg1 ;
-(NSOperation *)lastOperation;
-(NSString *)name;
-(id)initWithName:(id)arg1 operationQueue:(id)arg2 ;
-(HAP2Lock *)lock;
-(NSOperationQueue *)queue;
-(id)initWithName:(id)arg1 ;
@end

