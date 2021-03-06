/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKFeatureAvailabilityStoreServer.h>
#import <libobjc.A.dylib/HDFeatureAvailabilityExtensionObserver.h>

@protocol HDFeatureAvailabilityExtension, OS_dispatch_queue;
@class NSObject, NSString;

@interface HDFeatureAvailabilityStoreServer : HDStandardTaskServer <HKFeatureAvailabilityStoreServer, HDFeatureAvailabilityExtensionObserver> {

	id<HDFeatureAvailabilityExtension> _extension;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5 ;
+(id)taskIdentifier;
+(Class)configurationClass;
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1 ;
-(id)exportedInterface;
-(void)remote_getIsCurrentOnboardingVersionCompletedWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_canCompleteOnboardingForCountryCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_onboardedCountryCodeSupportedStateWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_canCompleteOnboardingForCountryCode:(id)arg1 devicePairingID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_onboardedCountryCodeSupportedStateForDevicePairingID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_stopObservingChanges;
-(void)remote_getIsFeatureCapabilitySupportedOnActivePairedDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_resetOnboardingWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_getIsFeatureCapabilitySupportedOnDeviceWithPairingID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_highestOnboardingVersionCompletedWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_earliestDateLowestOnboardingVersionCompletedWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_startObservingChangesWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_setCurrentOnboardingVersionCompletedForCountryCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1 ;
-(id)remoteInterface;
-(id)_clientRemoteObjectProxy;
-(BOOL)_hasWriteEntitlementWithError:(id*)arg1 ;
-(void)_configureWithExtension:(id)arg1 ;
@end

