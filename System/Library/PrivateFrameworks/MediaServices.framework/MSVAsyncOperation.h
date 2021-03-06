/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSError, NSObject;

@interface MSVAsyncOperation : NSOperation {

	BOOL __executing;
	BOOL __finished;
	NSError* _error;
	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (nonatomic,copy) NSError * error;                                                          //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;                             //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,setter=_setExecuting:,getter=_isExecuting,nonatomic) BOOL _executing;              //@synthesize _executing=__executing - In the implementation block
@property (assign,setter=_setFinished:,getter=_isFinished,nonatomic) BOOL _finished;                 //@synthesize _finished=__finished - In the implementation block
-(void)finish;
-(BOOL)isExecuting;
-(NSError *)error;
-(id)init;
-(void)execute;
-(BOOL)_isFinished;
-(BOOL)isFinished;
-(BOOL)_isExecuting;
-(BOOL)isAsynchronous;
-(void)setError:(NSError *)arg1 ;
-(void)start;
-(BOOL)isConcurrent;
-(void)finishWithError:(id)arg1 ;
-(void)_setExecuting:(BOOL)arg1 ;
-(void)_setFinished:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
@end

