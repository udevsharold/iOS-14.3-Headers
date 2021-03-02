/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _ATXAppInfoManager, ATXLocationManager, ATXMotionManagerWrapper, ATXAmbientLightMonitor;

@interface ATXContextSourcesGuardedData : NSObject {

	BOOL _contextSourcesInitialized;
	_ATXAppInfoManager* _appInfoManager;
	ATXLocationManager* _locationManager;
	ATXMotionManagerWrapper* _motionManagerWrapper;
	ATXAmbientLightMonitor* _ambientLightMonitor;
	Class _deviceStateMonitorClass;

}

@property (nonatomic,readonly) _ATXAppInfoManager * appInfoManager;                         //@synthesize appInfoManager=_appInfoManager - In the implementation block
@property (nonatomic,readonly) ATXLocationManager * locationManager;                        //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,readonly) ATXMotionManagerWrapper * motionManagerWrapper;              //@synthesize motionManagerWrapper=_motionManagerWrapper - In the implementation block
@property (nonatomic,readonly) ATXAmbientLightMonitor * ambientLightMonitor;                //@synthesize ambientLightMonitor=_ambientLightMonitor - In the implementation block
@property (nonatomic,readonly) Class deviceStateMonitorClass;                               //@synthesize deviceStateMonitorClass=_deviceStateMonitorClass - In the implementation block
@property (nonatomic,readonly) BOOL contextSourcesInitialized;                              //@synthesize contextSourcesInitialized=_contextSourcesInitialized - In the implementation block
-(ATXLocationManager *)locationManager;
-(ATXMotionManagerWrapper *)motionManagerWrapper;
-(void)updateAppInfoManager:(id)arg1 locationManager:(id)arg2 motionManagerWrapper:(id)arg3 ambientLightMonitor:(id)arg4 deviceStateMonitorClass:(Class)arg5 contextSourcesInitialized:(BOOL)arg6 ;
-(ATXAmbientLightMonitor *)ambientLightMonitor;
-(_ATXAppInfoManager *)appInfoManager;
-(Class)deviceStateMonitorClass;
-(BOOL)contextSourcesInitialized;
@end
