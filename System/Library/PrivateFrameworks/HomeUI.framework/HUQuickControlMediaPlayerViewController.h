/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUQuickControlViewController.h>
#import <libobjc.A.dylib/MRUNowPlayingViewControllerDelegate.h>
#import <libobjc.A.dylib/MRPlatterViewControllerDelegate.h>

@class MRPlatterViewController, MRUNowPlayingViewController, NSArray, NSLayoutConstraint, NSString;

@interface HUQuickControlMediaPlayerViewController : HUQuickControlViewController <MRUNowPlayingViewControllerDelegate, MRPlatterViewControllerDelegate> {

	MRPlatterViewController* _mediaControlViewController;
	MRUNowPlayingViewController* _mediaControlsNowPlayingViewController;
	NSArray* _mediaControlViewControllerConstraints;
	NSLayoutConstraint* _viewHeightConstraint;
	NSString* _mediaRoutingIdentifier;
	long long _mediaAccessoryItemType;

}

@property (nonatomic,retain) MRPlatterViewController * mediaControlViewController;                             //@synthesize mediaControlViewController=_mediaControlViewController - In the implementation block
@property (nonatomic,retain) MRUNowPlayingViewController * mediaControlsNowPlayingViewController;              //@synthesize mediaControlsNowPlayingViewController=_mediaControlsNowPlayingViewController - In the implementation block
@property (nonatomic,retain) NSArray * mediaControlViewControllerConstraints;                                  //@synthesize mediaControlViewControllerConstraints=_mediaControlViewControllerConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * viewHeightConstraint;                                        //@synthesize viewHeightConstraint=_viewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSString * mediaRoutingIdentifier;                                                //@synthesize mediaRoutingIdentifier=_mediaRoutingIdentifier - In the implementation block
@property (nonatomic,readonly) long long mediaAccessoryItemType;                                               //@synthesize mediaAccessoryItemType=_mediaAccessoryItemType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controlItemPredicate;
+(Class)controlItemClass;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)platterViewController:(id)arg1 didReceiveInteractionEvent:(id)arg2 ;
-(void)_updateConstraints;
-(long long)mediaAccessoryItemType;
-(NSString *)mediaRoutingIdentifier;
-(void)setMediaRoutingIdentifier:(NSString *)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id)title;
-(void)viewDidLoad;
-(id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3 ;
-(void)setPreferredFrameLayoutGuide:(id)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(BOOL)hasSingleControlView;
-(void)_addMediaControlView;
-(void)_addLegacyMediaControlView;
-(void)_updateLegacyConstraints;
-(MRUNowPlayingViewController *)mediaControlsNowPlayingViewController;
-(void)setMediaControlViewController:(MRPlatterViewController *)arg1 ;
-(MRPlatterViewController *)mediaControlViewController;
-(void)_updateMediaControlAppearanceForTraitCollection:(id)arg1 ;
-(void)setMediaControlsNowPlayingViewController:(MRUNowPlayingViewController *)arg1 ;
-(NSArray *)mediaControlViewControllerConstraints;
-(void)setMediaControlViewControllerConstraints:(NSArray *)arg1 ;
-(NSLayoutConstraint *)viewHeightConstraint;
-(void)setViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)nowPlayingViewController:(id)arg1 didChangeSizeWithAnimations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)platterViewController:(id)arg1 didUpdateEndpointWithReason:(id)arg2 ;
-(void)nowPlayingViewControllerDidChangeLayout:(id)arg1 ;
@end

