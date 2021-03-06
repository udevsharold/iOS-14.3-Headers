/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTPlatform.h>

@class NSUserDefaults, RTNanoRegistry;

@interface RTPlatform_MobileGestalt : RTPlatform {

	NSUserDefaults* _userDefaults;
	RTNanoRegistry* _nanoRegistry;

}
-(id)productType;
-(id)systemVersion;
-(BOOL)macOSPlatform;
-(id)init;
-(id)deviceClass;
-(BOOL)iPhonePlatform;
-(BOOL)supportsCoreRoutineCapability;
-(BOOL)supportsMultiUser;
-(BOOL)lowEndHardware;
-(BOOL)simulatorPlatform;
-(BOOL)supportsScenarioTriggers;
-(BOOL)internalInstall;
-(BOOL)iPhoneDevice;
-(BOOL)watchPlatform;
-(BOOL)isTinkerPaired;
-(id)systemModel;
-(id)initWithNanoRegistry:(id)arg1 userDefaults:(id)arg2 ;
-(id)userAssignedDeviceName;
@end

