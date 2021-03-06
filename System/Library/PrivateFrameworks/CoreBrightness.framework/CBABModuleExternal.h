/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBModule.h>
#import <libobjc.A.dylib/CBContainerModuleProtocol.h>
#import <libobjc.A.dylib/CBHIDServiceProtocol.h>

@class NSMutableArray, NSString, CBABCurve, CBABRamp, CBDisplayModule;

@interface CBABModuleExternal : CBModule <CBContainerModuleProtocol, CBHIDServiceProtocol> {

	NSMutableArray* _ALSServices;
	NSString* _containerID;
	NSString* _uniqueID;
	NSString* _displayUUID;
	BOOL _enabled;
	BOOL _available;
	BOOL _presetDisableAB;
	CBABCurve* _curve;
	CBABRamp* _ramp;
	BOOL _updatesFrozen;
	BOOL _suspendAutoBrightness;
	BOOL _fastRamp;
	BOOL _builtIn;
	CBDisplayModule* _displayModule;

}

@property (readonly) CBDisplayModule * displayModule;               //@synthesize displayModule=_displayModule - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)removeHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(BOOL)handleHIDEvent:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2 ;
-(id)copyPropertyForKey:(id)arg1 ;
-(void)sendNotificationForKey:(id)arg1 withValue:(id)arg2 ;
-(void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(BOOL)addHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2 ;
-(BOOL)setPropertyInternal:(id)arg1 forKey:(id)arg2 ;
-(void)start;
-(id)initWithDisplayModule:(id)arg1 andQueue:(id)arg2 ;
-(void)updateAvailability;
-(void)stop;
-(void)updateAutoBrightnessState:(BOOL)arg1 ;
-(void)userBrightnessCommitHandler;
-(void)userBrightnessChangingHandler;
-(void)updateBrightnessForce:(BOOL)arg1 periodOverride:(BOOL)arg2 period:(float)arg3 ;
-(void)storeCurveToPreferences;
-(BOOL)getAggregatedLux:(float*)arg1 ;
-(void)endFastRamp;
-(BOOL)newALSService:(IOHIDServiceClientRef)arg1 ;
-(void)updateBrightness;
-(CBDisplayModule *)displayModule;
@end

