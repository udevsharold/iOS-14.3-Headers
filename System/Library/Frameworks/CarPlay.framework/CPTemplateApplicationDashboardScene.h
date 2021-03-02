/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlay/CarPlay-Structs.h>
#import <UIKitCore/UIScene.h>
#import <libobjc.A.dylib/_UISceneUIWindowHosting.h>
#import <libobjc.A.dylib/_UIContextBinderContextCreationPolicyHolding.h>
#import <UIKit/UICoordinateSpace.h>

@protocol NSObject;
@class UIScreen, UITraitCollection, UIStatusBarManager, _UIContextBinder, CPDashboardController, UIWindow, NSString;

@interface CPTemplateApplicationDashboardScene : UIScene <_UISceneUIWindowHosting, _UIContextBinderContextCreationPolicyHolding, UICoordinateSpace> {

	id<NSObject> _sceneWillConnectObserver;
	id<NSObject> _didFinishLaunchingObserver;
	BOOL _sceneWillConnect;
	_UIContextBinder* _contextBinder;
	UIScreen* _screen;
	UITraitCollection* _traitCollection;
	long long _screenRequestedOverscanCompensation;
	CPDashboardController* _dashboardController;
	UIWindow* _dashboardWindow;

}

@property (nonatomic,retain) UIWindow * dashboardWindow;                                            //@synthesize dashboardWindow=_dashboardWindow - In the implementation block
@property (nonatomic,retain) id<CPTemplateApplicationDashboardSceneDelegate> delegate; 
@property (nonatomic,readonly) CPDashboardController * dashboardController;                         //@synthesize dashboardController=_dashboardController - In the implementation block
@property (nonatomic,readonly) UIScreen * _screen; 
@property (nonatomic,readonly) long long _interfaceOrientation; 
@property (nonatomic,readonly) id<UICoordinateSpace> _coordinateSpace; 
@property (nonatomic,readonly) UITraitCollection * _traitCollection; 
@property (nonatomic,readonly) UIStatusBarManager * _statusBarManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect bounds; 
+(BOOL)_hostsWindows;
-(UITraitCollection *)_traitCollection;
-(long long)_interfaceOrientation;
-(void)_detachWindow:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(id)_allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 ;
-(UIScreen *)_screen;
-(CGRect)bounds;
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(id)initWithSession:(id)arg1 connectionOptions:(id)arg2 ;
-(UIEdgeInsets)_safeAreaInsetsForInterfaceOrientation:(long long)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2 ;
-(void)_invalidate;
-(BOOL)_permitContextCreationForBindingDescription:(SCD_Struct_CP0)arg1 ;
-(id<UICoordinateSpace>)_coordinateSpace;
-(void)_updateVisibleWindowOrderWithTest:(/*^block*/id)arg1 ;
-(void)_windowUpdatedVisibility:(id)arg1 ;
-(void)_windowUpdatedProperties:(id)arg1 ;
-(id)_definition;
-(void)_attachWindow:(id)arg1 ;
-(void)_readySceneForConnection;
-(id)_fbsSceneLayerForWindow:(id)arg1 ;
-(CGRect)_referenceBounds;
-(id)_componentForKey:(id)arg1 ;
-(void)_deliverDashboardControllerToDelegate;
-(UIWindow *)dashboardWindow;
-(CPDashboardController *)dashboardController;
-(void)setDashboardWindow:(UIWindow *)arg1 ;
@end
