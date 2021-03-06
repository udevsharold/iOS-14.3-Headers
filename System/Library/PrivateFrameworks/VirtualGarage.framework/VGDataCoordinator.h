/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VirtualGarage.framework/VirtualGarage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VGOEMApplicationFinderUpdates.h>
#import <libobjc.A.dylib/VGExternalAccessoryUpdating.h>
#import <libobjc.A.dylib/VGOEMAppSOCStreaming.h>

@protocol VGDataCoordinatorDelegate, OS_dispatch_queue, VGOEMApplicationFinding;
@class NSObject, NSArray, VGExternalAccessory, NSMutableArray, NSTimer, NSMutableSet, NSString;

@interface VGDataCoordinator : NSObject <VGOEMApplicationFinderUpdates, VGExternalAccessoryUpdating, VGOEMAppSOCStreaming> {

	id<VGDataCoordinatorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<VGOEMApplicationFinding> _applicationFinder;
	NSArray* _applications;
	VGExternalAccessory* _accessory;
	NSMutableArray* _unpairedVehicles;
	NSTimer* _vehicleStateRefreshTimer;
	NSMutableSet* _observedVehicles;

}

@property (nonatomic,copy,readonly) NSArray * unpairedVehicles; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)endAllContinuousUpdates;
-(id)deviceIdentifier;
-(void)_setupTimerIfNeeded;
-(void)_updateGarageWithVehicle:(id)arg1 selectVehicle:(BOOL)arg2 syncAcrossDevices:(BOOL)arg3 ;
-(void)_removeUnpairedIapVehicleIfNeeded;
-(id)_vehicleStateProviderForVehicle:(id)arg1 ;
-(id)_oemAppForChargeStreamForVehicle:(id)arg1 ;
-(void)accessoryUpdatedWithVehicle:(id)arg1 ;
-(NSArray *)unpairedVehicles;
-(void)OEMAppsUpdated:(id)arg1 ;
-(void)dealloc;
-(void)_invalidateRefreshTimer;
-(void)_loadAllOEMVehiclesForApps:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)_indexOfVehicleInUnpairedVehicles:(id)arg1 ;
-(void)_loadIapVehicles;
-(void)unpairVehicle:(id)arg1 ;
-(id)_applicationRecordForVehicle:(id)arg1 ;
-(double)_vehicleStateRefreshInterval;
-(void)finishOnboardingVehicle:(id)arg1 ;
-(void)vehicleStateUpdated:(id)arg1 ;
-(void)_updateStateOfChargeForVehicle:(id)arg1 syncAcrossDevices:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_refreshStateForTrackedVehicles;
-(id)_applicationForVehicle:(id)arg1 ;
-(BOOL)shouldUnpairVehicle:(id)arg1 ;
-(id)initWithApplicationFinder:(id)arg1 externalAccessory:(id)arg2 delegate:(id)arg3 ;
-(void)getLatestStateOfVehicle:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)_saveOnboardingInfoForVehicle:(id)arg1 ;
-(void)_startChargeStreamForVehicle:(id)arg1 ;
-(void)_stopChargeStreamForVehicle:(id)arg1 ;
-(void)startContinuousUpdatesForVehicle:(id)arg1 ;
@end

