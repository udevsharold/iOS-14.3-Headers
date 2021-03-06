/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@interface HMDAccessorySoftwareUpdateAutoThirdPartyToggledEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	BOOL _autoThirdPartySoftwareUpdateEnable;
	unsigned long long _numHAPAccessories;
	unsigned long long _numCameraAccessories;
	unsigned long long _numCameraAccessoriesRecordingEnabled;
	unsigned long long _numSecurityClassAccessories;
	unsigned long long _numCriticalSensorAccessories;

}

@property (readonly) BOOL autoThirdPartySoftwareUpdateEnable;                              //@synthesize autoThirdPartySoftwareUpdateEnable=_autoThirdPartySoftwareUpdateEnable - In the implementation block
@property (readonly) unsigned long long numHAPAccessories;                                 //@synthesize numHAPAccessories=_numHAPAccessories - In the implementation block
@property (readonly) unsigned long long numCameraAccessories;                              //@synthesize numCameraAccessories=_numCameraAccessories - In the implementation block
@property (readonly) unsigned long long numCameraAccessoriesRecordingEnabled;              //@synthesize numCameraAccessoriesRecordingEnabled=_numCameraAccessoriesRecordingEnabled - In the implementation block
@property (readonly) unsigned long long numSecurityClassAccessories;                       //@synthesize numSecurityClassAccessories=_numSecurityClassAccessories - In the implementation block
@property (readonly) unsigned long long numCriticalSensorAccessories;                      //@synthesize numCriticalSensorAccessories=_numCriticalSensorAccessories - In the implementation block
+(id)uuid;
+(id)eventWithAutoThirdPartyUpdateEnable:(BOOL)arg1 numHAPAccessories:(unsigned long long)arg2 numCameraAccessories:(unsigned long long)arg3 numCameraAccessoriesRecordingEnabled:(unsigned long long)arg4 numSecurityClassAccessories:(unsigned long long)arg5 numCriticalSensorAccessories:(unsigned long long)arg6 ;
+(id)eventWithHome:(id)arg1 ;
-(id)eventName;
-(id)initWithAutoThirdPartyUpdateEnable:(BOOL)arg1 numHAPAccessories:(unsigned long long)arg2 numCameraAccessories:(unsigned long long)arg3 numCameraAccessoriesRecordingEnabled:(unsigned long long)arg4 numSecurityClassAccessories:(unsigned long long)arg5 numCriticalSensorAccessories:(unsigned long long)arg6 ;
-(unsigned long long)numHAPAccessories;
-(unsigned long long)numCameraAccessories;
-(unsigned long long)numCameraAccessoriesRecordingEnabled;
-(unsigned long long)numSecurityClassAccessories;
-(unsigned long long)numCriticalSensorAccessories;
-(BOOL)autoThirdPartySoftwareUpdateEnable;
-(id)serializedEvent;
@end

