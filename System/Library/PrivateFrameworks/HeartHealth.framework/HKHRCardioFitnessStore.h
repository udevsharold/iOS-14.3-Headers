/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HeartHealth.framework/HeartHealth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKHRCardioFitnessStoreInterface.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>

@class HKTaskServerProxyProvider, HKHealthStore, NSString;

@interface HKHRCardioFitnessStore : NSObject <HKHRCardioFitnessStoreInterface, _HKXPCExportable> {

	HKTaskServerProxyProvider* _proxyProvider;
	HKHealthStore* _healthStore;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;              //@synthesize healthStore=_healthStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithHealthStore:(id)arg1 ;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(id)remoteInterface;
-(HKHealthStore *)healthStore;
-(void)saveCardioFitnessEventWithValue:(id)arg1 threshold:(id)arg2 dateInterval:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)saveCardioFitnessEventWithValue:(id)arg1 threshold:(id)arg2 dateInterval:(id)arg3 options:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
@end
