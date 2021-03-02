/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol VideosExtrasVideoPlaybackViewController;
@class UIViewController, NSLayoutConstraint, VideosExtrasContext, UIView;

@interface VideosExtrasFeatureContainerViewController : UIViewController {

	UIViewController*<VideosExtrasVideoPlaybackViewController> _videoPlaybackViewController;
	NSLayoutConstraint* _overlayViewAdjustmentConstraint;
	VideosExtrasContext* _context;
	UIView* _menuBarView;
	double _collectionViewHeight;

}

@property (assign,nonatomic) double collectionViewHeight;                                                                         //@synthesize collectionViewHeight=_collectionViewHeight - In the implementation block
@property (nonatomic,__weak,readonly) VideosExtrasContext * context;                                                              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIViewController*<VideosExtrasVideoPlaybackViewController> videoPlaybackViewController;              //@synthesize videoPlaybackViewController=_videoPlaybackViewController - In the implementation block
@property (assign,nonatomic,__weak) UIView * menuBarView;                                                                         //@synthesize menuBarView=_menuBarView - In the implementation block
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
-(VideosExtrasContext *)context;
-(void)viewDidLoad;
-(void)setCollectionViewHeight:(double)arg1 ;
-(double)collectionViewHeight;
-(void)_menuBarHeightChange:(id)arg1 ;
-(void)setVideoPlaybackViewController:(UIViewController*<VideosExtrasVideoPlaybackViewController>)arg1 ;
-(void)setMenuBarView:(UIView *)arg1 ;
-(UIViewController*<VideosExtrasVideoPlaybackViewController>)videoPlaybackViewController;
-(UIView *)menuBarView;
@end
