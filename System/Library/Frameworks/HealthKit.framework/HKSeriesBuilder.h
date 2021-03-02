/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKSeriesBuilderClientInterface.h>

@protocol OS_dispatch_queue;
@class HKTaskServerProxyProvider, HKRetryableOperation, NSUUID, HKSeriesBuilderConfiguration, HKHealthStore, NSObject, NSString;

@interface HKSeriesBuilder : NSObject <_HKXPCExportable, HKSeriesBuilderClientInterface> {

	Ai _state;
	HKTaskServerProxyProvider* _proxyProvider;
	HKRetryableOperation* _retryableOperation;
	NSUUID* _identifier;
	HKSeriesBuilderConfiguration* _configuration;
	HKHealthStore* _store;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSObject*<OS_dispatch_queue> _resourceQueue;

}

@property (nonatomic,retain) HKTaskServerProxyProvider * proxyProvider;                        //@synthesize proxyProvider=_proxyProvider - In the implementation block
@property (nonatomic,retain) HKRetryableOperation * retryableOperation;                        //@synthesize retryableOperation=_retryableOperation - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) HKSeriesBuilderConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) HKHealthStore * store;                                          //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> completionQueue;                   //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> resourceQueue;                     //@synthesize resourceQueue=_resourceQueue - In the implementation block
@property (assign) long long state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskServerIdentifier;
+(id)serverInterface;
+(void)configureClientInterface:(id)arg1 ;
+(id)clientInterface;
+(void)configureServerInterface:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(HKHealthStore *)store;
-(void)connectionInvalidated;
-(id)init;
-(id)exportedInterface;
-(void)_resourceQueue_addMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)resourceQueue;
-(void)discard;
-(void)freezeBuilderWithCompletion:(/*^block*/id)arg1 ;
-(void)recoverWithCompletion:(/*^block*/id)arg1 ;
-(HKTaskServerProxyProvider *)proxyProvider;
-(void)_resourceQueue_discardWithHandler:(/*^block*/id)arg1 ;
-(HKRetryableOperation *)retryableOperation;
-(void)clientRemote_didChangeToState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setRetryableOperation:(HKRetryableOperation *)arg1 ;
-(HKSeriesBuilderConfiguration *)configuration;
-(long long)state;
-(void)setProxyProvider:(HKTaskServerProxyProvider *)arg1 ;
-(id)remoteInterface;
-(id)_initWithHealthStore:(id)arg1 identifier:(id)arg2 configuration:(id)arg3 ;
-(NSUUID *)identifier;
-(NSString *)description;
-(void)setState:(long long)arg1 ;
@end
