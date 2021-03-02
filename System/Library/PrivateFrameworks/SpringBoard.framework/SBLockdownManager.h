/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBDismissOnlyAlertItem, NSString;

@interface SBLockdownManager : NSObject {

	int _state;
	BOOL _settingUpActivationState;
	SBDismissOnlyAlertItem* _activatingAlertItem;
	NSString* _unqiueDeviceIdentifier;

}
+(id)sharedInstance;
+(BOOL)_isDeveloperDevice;
-(id)init;
-(void)_resetActivationState;
-(int)lockdownState;
-(void)_setupActivationState;
-(BOOL)brickedDevice;
@end
