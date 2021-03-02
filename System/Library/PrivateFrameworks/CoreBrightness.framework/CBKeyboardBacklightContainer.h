/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBContainer.h>
#import <libobjc.A.dylib/CBContainerProtocol.h>
#import <libobjc.A.dylib/CBHIDServiceProtocol.h>
#import <libobjc.A.dylib/CBStatusInfoProtocol.h>

@protocol OS_os_log;
@class NSObject, KeyboardBacklight, NSMutableDictionary, HIDDevice, NSString;

@interface CBKeyboardBacklightContainer : CBContainer <CBContainerProtocol, CBHIDServiceProtocol, CBStatusInfoProtocol> {

	NSObject*<OS_os_log> _logHandle;
	KeyboardBacklight* _keyboardBacklight;
	BOOL _userActive;
	NSMutableDictionary* _properties;
	HIDDevice* _device;

}

@property (readonly) HIDDevice * device;                            //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)removeHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(void)sendNotificationForKey:(id)arg1 andValue:(id)arg2 ;
-(id)copyPropertyInternalForKey:(id)arg1 ;
-(id)copyIdentifiers;
-(BOOL)handleHIDEvent:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2 ;
-(id)copyPropertyForKey:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(HIDDevice *)device;
-(BOOL)addHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(BOOL)setPropertyInternal:(id)arg1 forKey:(id)arg2 ;
-(BOOL)start;
-(void)stop;
-(void)keyboardBacklightInitialization;
-(BOOL)keyboardUsesNitUnits:(id)arg1 ;
-(id)newKeyboardBacklightWithQueue:(id)arg1 device:(id)arg2 ;
@end
