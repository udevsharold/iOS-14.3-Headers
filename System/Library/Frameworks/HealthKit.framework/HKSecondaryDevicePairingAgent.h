/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>

@class HKHealthStore, HKTaskServerProxyProvider, NSUUID, NSString;

@interface HKSecondaryDevicePairingAgent : NSObject <_HKXPCExportable> {

	HKHealthStore* _healthStore;
	HKTaskServerProxyProvider* _proxyProvider;
	NSUUID* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
+(id)clientInterface;
-(id)initWithHealthStore:(id)arg1 ;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)requestTinkerSharingOptInWithGuardianDisplayName:(id)arg1 NRDeviceUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setupHealthSharingForSecondaryPairedDeviceWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performEndToEndCloudSyncWithNRDeviceUUID:(id)arg1 syncParticipantFirst:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)tearDownHealthSharingWithPairedGuardianWithCompletion:(/*^block*/id)arg1 ;
-(void)tearDownHealthSharingWithTinkerDeviceWithNRUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchSharingStatusWithPairedGuardianWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchSharingStatusForCurrentAppleIDWithOwnerEmailAddress:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
