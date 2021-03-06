/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>

@class SBIsolatedSceneOrientationFollowingWrapperViewController, UIView;

@interface SBSceneOrientationFollowingWindowRootViewController : UIViewController {

	SBIsolatedSceneOrientationFollowingWrapperViewController* _hostingViewController;
	UIView* _overlayContentView;

}

@property (assign,nonatomic,__weak) SBIsolatedSceneOrientationFollowingWrapperViewController * hostingViewController;              //@synthesize hostingViewController=_hostingViewController - In the implementation block
@property (nonatomic,retain) UIView * overlayContentView;                                                                          //@synthesize overlayContentView=_overlayContentView - In the implementation block
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(SBIsolatedSceneOrientationFollowingWrapperViewController *)hostingViewController;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)setHostingViewController:(SBIsolatedSceneOrientationFollowingWrapperViewController *)arg1 ;
-(UIView *)overlayContentView;
-(BOOL)_canShowWhileLocked;
-(void)viewWillLayoutSubviews;
-(id)initWithHostingViewController:(id)arg1 ;
-(void)setOverlayContentView:(UIView *)arg1 ;
@end

