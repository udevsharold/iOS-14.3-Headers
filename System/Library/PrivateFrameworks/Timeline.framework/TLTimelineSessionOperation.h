/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Timeline.framework/Timeline
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol TLTimelineDataSourceProvider;
@class NSArray, NSOperationQueue, NSError;

@interface TLTimelineSessionOperation : NSOperation {

	id<TLTimelineDataSourceProvider> _provider;
	NSArray* _operations;
	double _providerTimeout;
	double _operationTimeout;
	/*^block*/id _sessionCompletionBlock;
	NSOperationQueue* _operationQueue;
	NSError* _sessionError;

}

@property (nonatomic,copy,readonly) NSOperationQueue * operationQueue;                 //@synthesize operationQueue=_operationQueue - In the implementation block
@property (copy) NSError * sessionError;                                               //@synthesize sessionError=_sessionError - In the implementation block
@property (nonatomic,readonly) id<TLTimelineDataSourceProvider> provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,copy,readonly) NSArray * operations;                              //@synthesize operations=_operations - In the implementation block
@property (nonatomic,readonly) double providerTimeout;                                 //@synthesize providerTimeout=_providerTimeout - In the implementation block
@property (nonatomic,readonly) double operationTimeout;                                //@synthesize operationTimeout=_operationTimeout - In the implementation block
@property (copy) id completionBlock; 
@property (copy) id sessionCompletionBlock;                                            //@synthesize sessionCompletionBlock=_sessionCompletionBlock - In the implementation block
-(NSArray *)operations;
-(void)main;
-(NSOperationQueue *)operationQueue;
-(void)cancel;
-(double)operationTimeout;
-(id<TLTimelineDataSourceProvider>)provider;
-(void)setSessionError:(NSError *)arg1 ;
-(NSError *)sessionError;
-(id)initWithProvider:(id)arg1 operations:(id)arg2 providerTimeout:(double)arg3 operationTimeout:(double)arg4 ;
-(void)setSessionCompletionBlock:(id)arg1 ;
-(id)sessionCompletionBlock;
-(double)providerTimeout;
@end

