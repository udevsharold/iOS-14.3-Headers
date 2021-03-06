/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/FBSceneObserver.h>

@protocol UIScenePresenter;
@class RBSProcessIdentity, FBSSceneIdentity, FBApplicationUpdateScenesTransaction, FBScene, HUDashboardNavigationButton, NSString;

@interface HUSceneHolderViewController : UIViewController <FBSceneObserver> {

	RBSProcessIdentity* _processIdentity;
	FBSSceneIdentity* _sceneIdentity;
	BOOL _visible;
	FBApplicationUpdateScenesTransaction* _transaction;
	FBScene* _scene;
	id<UIScenePresenter> _scenePresenter;
	HUDashboardNavigationButton* _closeButton;
	NSString* _bundleId;

}

@property (nonatomic,retain) HUDashboardNavigationButton * closeButton;              //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,readonly) NSString * bundleId;                                  //@synthesize bundleId=_bundleId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)close:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)sceneDidInvalidate:(id)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setCloseButton:(HUDashboardNavigationButton *)arg1 ;
-(HUDashboardNavigationButton *)closeButton;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_updateScene;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSString *)bundleId;
-(void)viewDidLoad;
-(void)_lookupScene;
@end

