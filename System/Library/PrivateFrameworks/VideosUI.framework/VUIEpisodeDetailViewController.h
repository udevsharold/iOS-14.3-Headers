/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/VUIEpisodeDetailViewDelegate.h>

@protocol VUIEpisodeDetailViewControllerDelegate;
@class VUIMediaItem, VUIViewControllerContentPresenter, VUIEpisodeDetailView, UITapGestureRecognizer, NSString;

@interface VUIEpisodeDetailViewController : UIViewController <UIGestureRecognizerDelegate, VUIEpisodeDetailViewDelegate> {

	VUIMediaItem* _mediaItem;
	VUIViewControllerContentPresenter* _contentPresenter;
	id<VUIEpisodeDetailViewControllerDelegate> _delegate;
	VUIEpisodeDetailView* _detailView;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (nonatomic,retain) VUIMediaItem * mediaItem;                                                //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) VUIEpisodeDetailView * detailView;                                       //@synthesize detailView=_detailView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                           //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) VUIViewControllerContentPresenter * contentPresenter;                    //@synthesize contentPresenter=_contentPresenter - In the implementation block
@property (assign,nonatomic,__weak) id<VUIEpisodeDetailViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id)initWithMediaItem:(id)arg1 ;
-(void)setMediaItem:(VUIMediaItem *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setDetailView:(VUIEpisodeDetailView *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(VUIEpisodeDetailView *)detailView;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)dismissPopover;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setDelegate:(id<VUIEpisodeDetailViewControllerDelegate>)arg1 ;
-(VUIMediaItem *)mediaItem;
-(void)loadView;
-(id<VUIEpisodeDetailViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)_configureNavigationBar;
-(VUIViewControllerContentPresenter *)contentPresenter;
-(void)dismissTapped:(id)arg1 ;
-(void)reportMetricsPageEvent;
-(void)didTapPlay;
-(void)setContentPresenter:(VUIViewControllerContentPresenter *)arg1 ;
@end

