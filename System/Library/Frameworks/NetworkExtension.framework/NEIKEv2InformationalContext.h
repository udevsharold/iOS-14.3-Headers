/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEIKEv2RequestContext.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject;

@interface NEIKEv2InformationalContext : NEIKEv2RequestContext {

	unsigned _maxRetries;
	NSArray* _privateNotifies;
	unsigned long long _retryIntervalInMilliseconds;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _callback;

}

@property (nonatomic,retain) NSArray * privateNotifies;                                   //@synthesize privateNotifies=_privateNotifies - In the implementation block
@property (assign,nonatomic) unsigned maxRetries;                                         //@synthesize maxRetries=_maxRetries - In the implementation block
@property (assign,nonatomic) unsigned long long retryIntervalInMilliseconds;              //@synthesize retryIntervalInMilliseconds=_retryIntervalInMilliseconds - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                  //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,copy) id callback;                                                   //@synthesize callback=_callback - In the implementation block
-(void)setCallback:(id)arg1 ;
-(id)callback;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithPrivateNotifies:(id)arg1 maxRetries:(unsigned)arg2 retryIntervalMilliseconds:(unsigned long long)arg3 callbackQueue:(id)arg4 callback:(/*^block*/id)arg5 ;
-(void)setPrivateNotifies:(NSArray *)arg1 ;
-(void)setMaxRetries:(unsigned)arg1 ;
-(void)setRetryIntervalInMilliseconds:(unsigned long long)arg1 ;
-(id)description;
-(unsigned)maxRetries;
-(void)sendCallbackSuccess:(BOOL)arg1 session:(id)arg2 ;
-(NSArray *)privateNotifies;
-(unsigned long long)retryIntervalInMilliseconds;
@end
