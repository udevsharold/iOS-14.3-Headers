/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SeymourUI/SeymourUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegatePrivate.h>

@class UIViewController, NSArray;

@interface SeymourUI.SessionViewController : UIViewController <AVPlayerViewControllerDelegatePrivate> {

	 presenter;
	 eventHub;
	 sessionContainer;
	 backgroundView;
	 instructionsView;
	 watchDiscoveryView;
	 continueOnWatchView;
	 ongoingWorkoutDetectedView;
	 bufferView;
	 introSequenceView;
	 overlayView;
	 playerViewController;
	 castingView;
	 displayLink;
	 displayPreferencesViewController;
	 summaryViewController;
	??? activityTypeBehavior;
	 overlayConstraints;

}

@property (readonly,nonatomic) BOOL prefersHomeIndicatorAutoHidden; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarStyle; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarHidden; 
@property (readonly,nonatomic) unsigned long long supportedInterfaceOrientations; 
@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
-(BOOL)prefersHomeIndicatorAutoHidden;
-(void)playerViewController:(id)arg1 willTransitionToVisibilityOfPlaybackControls:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(BOOL)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)arg1 ;
-(NSArray *)preferredFocusEnvironments;
-(UIViewController *)childViewControllerForStatusBarStyle;
-(UIViewController *)childViewControllerForStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)menuButtonTapped;
-(void)onDisplayLink;
@end
