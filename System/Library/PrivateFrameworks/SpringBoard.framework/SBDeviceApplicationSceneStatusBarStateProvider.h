/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBDeviceApplicationSceneStatusBarStateProvider_Base.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneHandleObserver.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class UIApplicationSceneClientSettingsDiffInspector, UIApplicationSceneSettingsDiffInspector, SBSUIInCallSceneClientSettingsDiffInspector, SBDeviceApplicationSceneHandle, NSString;

@interface SBDeviceApplicationSceneStatusBarStateProvider : SBDeviceApplicationSceneStatusBarStateProvider_Base <SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride, BSInvalidatable> {

	UIApplicationSceneClientSettingsDiffInspector* _appClientSettingsDiffInspector;
	UIApplicationSceneSettingsDiffInspector* _appSceneSettingsDiffInspector;
	SBSUIInCallSceneClientSettingsDiffInspector* _inCallSceneClientSettingsDiffInspector;
	BOOL _hasAttemptedInCallSceneClientSettingsDiffInspectorCreation;
	SBDeviceApplicationSceneHandle* _sceneHandle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1 ;
-(BOOL)sceneWantsDeviceOrientationEventsEnabled;
-(void)invalidateStatusBarSettings;
-(CGRect)statusBarAvoidanceFrame;
-(id)statusBarSceneIdentifier;
-(long long)_statusBarStyle;
-(id)classicApplicationSceneHandleIfExists;
-(long long)_fallbackInterfaceOrientation;
-(id)_statusBarPartStyles;
-(BOOL)_suppressInheritedPartStyles;
-(BOOL)_anyObserverWants:(SEL)arg1 ;
-(BOOL)_statusBarAppearsOutsideOfAJailedApp;
-(id)breadcrumbProvider;
-(BOOL)_statusBarHiddenGivenFallbackOrientation:(long long)arg1 ;
-(double)_statusBarAlpha;
-(int)statusBarStyleOverridesToSuppress;
-(long long)_statusBarStyleForPartWithIdentifier:(id)arg1 suppressingInherited:(BOOL)arg2 ;
-(id)_initWithSceneHandle:(id)arg1 ;
-(id)sceneToHandleStatusBarTapIfExists;
-(void)dealloc;
-(id)overlayStatusBarData;
-(void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3 ;
-(void)_handleStatusBarStyleOverridesToSuppressUpdate;
-(void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3 ;
-(void)_performUpdateWith:(id)arg1 actions:(/*^block*/id)arg2 ;
-(void)invalidate;
@end

