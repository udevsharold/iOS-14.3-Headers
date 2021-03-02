/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <MediaControls/MediaControlsVolumeControllerObserver.h>
#import <libobjc.A.dylib/MPVolumeDisplaying.h>
#import <libobjc.A.dylib/CCUIGroupRendering.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CCUIContentModuleContentViewController.h>

@protocol MediaControlsVolumeViewControllerDelegate;
@class UIWindowScene, NSString, NSArray, CALayer, UIViewPropertyAnimator, MediaControlsVolumeSliderView, MediaControlsVolumeController;

@interface MediaControlsVolumeViewController : UIViewController <MediaControlsVolumeControllerObserver, MPVolumeDisplaying, CCUIGroupRendering, UIGestureRecognizerDelegate, CCUIContentModuleContentViewController> {

	MediaControlsVolumeSliderView* _primarySlider;
	MediaControlsVolumeSliderView* _secondarySlider;
	NSString* _packageName;
	BOOL _isExpanded;
	id<MediaControlsVolumeViewControllerDelegate> _delegate;
	MediaControlsVolumeController* _volumeController;

}

@property (assign,nonatomic,__weak) id<MediaControlsVolumeViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MediaControlsVolumeController * volumeController;                               //@synthesize volumeController=_volumeController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIWindowScene * windowSceneForVolumeDisplay; 
@property (getter=isOnScreenForVolumeDisplay,nonatomic,readonly) BOOL onScreenForVolumeDisplay; 
@property (nonatomic,readonly) NSString * volumeAudioCategory; 
@property (getter=isOnScreen,nonatomic,readonly) BOOL onScreen; 
@property (getter=isGroupRenderingRequired,nonatomic,readonly) BOOL groupRenderingRequired; 
@property (nonatomic,readonly) NSArray * punchOutRootLayers; 
@property (nonatomic,readonly) CALayer * punchOutRootLayer; 
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) double preferredExpandedContinuousCornerRadius; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (nonatomic,readonly) BOOL shouldPerformHoverInteraction; 
@property (nonatomic,readonly) BOOL shouldPerformClickInteraction; 
-(BOOL)shouldExpandModuleOnTouch:(id)arg1 ;
-(BOOL)isOnScreen;
-(void)setVolumeController:(MediaControlsVolumeController *)arg1 ;
-(NSString *)volumeAudioCategory;
-(UIWindowScene *)windowSceneForVolumeDisplay;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(double)preferredExpandedContentWidth;
-(void)dealloc;
-(void)_performWithoutAnimationWhileHidden:(/*^block*/id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(double)preferredExpandedContentHeight;
-(void)_primarySliderValueDidChange:(id)arg1 ;
-(void)didTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)_updateGlyphPackageDescription;
-(void)viewDidLayoutSubviews;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(BOOL)isGroupRenderingRequired;
-(void)_updateVisibility;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)mediaControlsVolumeController:(id)arg1 didChangeUserInteractionEnabled:(BOOL)arg2 forRoute:(long long)arg3 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)mediaControlsVolumeController:(id)arg1 didUpdateSplitRoute:(BOOL)arg2 ;
-(void)setDelegate:(id<MediaControlsVolumeViewControllerDelegate>)arg1 ;
-(NSArray *)punchOutRootLayers;
-(MediaControlsVolumeController *)volumeController;
-(CGRect)secondaryFrame;
-(CGRect)primaryFrame;
-(void)_dismissMediaControlsVolumeViewController;
-(BOOL)_canShowWhileLocked;
-(id<MediaControlsVolumeViewControllerDelegate>)delegate;
-(void)mediaControlsVolumeController:(id)arg1 didChangeVolumeAvailable:(BOOL)arg2 effectiveVolume:(float)arg3 forRoute:(long long)arg4 ;
-(BOOL)providesOwnPlatter;
-(void)viewDidLoad;
-(void)_secondarySliderValueDidChange:(id)arg1 ;
-(void)viewWillLayoutSubviews;
@end
