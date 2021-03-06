/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDeviceApplicationSceneStatusBarStateProxy.h>

@class SBAppContainerViewController;

@interface _SBAppContainerStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProxy {

	SBAppContainerViewController* _appVCBackReference;

}

@property (assign,nonatomic,__weak) SBAppContainerViewController * appVCBackReference;              //@synthesize appVCBackReference=_appVCBackReference - In the implementation block
-(long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1 ;
-(long long)_statusBarStyle;
-(long long)_fallbackInterfaceOrientation;
-(long long)overrideStatusBarStyle;
-(BOOL)_statusBarAppearsOutsideOfAJailedApp;
-(double)_statusBarAlpha;
-(long long)_statusBarStyleForPartWithIdentifier:(id)arg1 suppressingInherited:(BOOL)arg2 ;
-(void)setAppVCBackReference:(SBAppContainerViewController *)arg1 ;
-(SBAppContainerViewController *)appVCBackReference;
@end

