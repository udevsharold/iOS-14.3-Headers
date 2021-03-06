/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilitySettingsLoader/AccessibilitySettingsLoader-Structs.h>
@interface ZoomServicesUI : NSObject {

	BOOL _registeredForAppNotifications;

}

@property (assign,getter=isRegisteredForAppNotifications,nonatomic) BOOL registeredForAppNotifications;              //@synthesize registeredForAppNotifications=_registeredForAppNotifications - In the implementation block
+(void)enableZoomServices;
+(void)disableZoomServices;
+(CGPoint)_unMappedZoomPoint:(CGPoint)arg1 ;
+(BOOL)_deviceIsPortrait;
+(BOOL)_shouldUnmapPointsForFluidGestures;
-(id)init;
-(void)dealloc;
-(void)_handleZoomEnabledStatusDidChangeNotification:(id)arg1 ;
-(void)_handleAlertWillAppearNotification:(id)arg1 ;
-(void)_handleAppDidBecomeActiveNotification:(id)arg1 ;
-(void)_installZoomUISafeCategoriesIfNeeded;
-(void)_handleRegisterZoomConflictNotification:(id)arg1 ;
-(void)_handleZoomFocusDidChangeNotification:(id)arg1 ;
-(void)setRegisteredForAppNotifications:(BOOL)arg1 ;
-(void)_unregisterForAppNotifications;
-(void)_handleAppSwitcherWillBeginRevealNotification:(id)arg1 ;
-(void)_handleKeyboardDidHideNotification:(id)arg1 ;
-(void)_handleLockButtonWasPressedNotification:(id)arg1 ;
-(void)_updateForCurrentZoomStatus;
-(void)_handleAppDidEnterBackgroundNotification:(id)arg1 ;
-(void)_registerForAppNotifications;
-(CGRect)_keyboardFrameInScreenCoordinates;
-(Class)_accessibilityBundlePrincipalClass;
-(void)_handleFirstResponderDidChangeNotification:(id)arg1 ;
-(BOOL)isRegisteredForAppNotifications;
-(void)_handleKeyboardWillHideNotification:(id)arg1 ;
-(void)_handleKeyboardWillShowNotification:(id)arg1 ;
@end

