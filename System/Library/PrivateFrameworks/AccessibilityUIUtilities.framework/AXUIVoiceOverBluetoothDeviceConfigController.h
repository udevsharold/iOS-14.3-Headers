/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUIUtilities/AXUISettingsSetupCapableListController.h>

@protocol VOSBluetoothConnectableDevice;
@class NSArray, SCROBrailleClient;

@interface AXUIVoiceOverBluetoothDeviceConfigController : AXUISettingsSetupCapableListController {

	NSArray* _forgetGroupSpecifiers;
	NSArray* _additionalConfigGroupSpecifiers;
	BOOL _dismissed;
	SCROBrailleClient* _brailleClient;
	id<VOSBluetoothConnectableDevice> _device;

}

@property (nonatomic,retain) id<VOSBluetoothConnectableDevice> device;              //@synthesize device=_device - In the implementation block
-(id)specifiers;
-(id)init;
-(void)deviceConnectedHandler:(id)arg1 ;
-(void)_clearVOUSBRMDisabler;
-(void)_doReallyForgetDevice;
-(void)forgetDevice:(id)arg1 ;
-(void)dealloc;
-(void)deviceUpdated:(id)arg1 ;
-(id<VOSBluetoothConnectableDevice>)device;
-(void)_allowUSBRM;
-(void)setDevice:(id<VOSBluetoothConnectableDevice>)arg1 ;
-(void)deviceRemoved:(id)arg1 ;
@end

