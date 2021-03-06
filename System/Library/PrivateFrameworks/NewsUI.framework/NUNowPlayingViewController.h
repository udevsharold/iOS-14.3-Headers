/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NUNowPlayingPlaybackControlsLayoutSpecProvider.h>
#import <libobjc.A.dylib/NUNowPlayingTitleViewLayoutSpecProvider.h>
#import <libobjc.A.dylib/NUNowPlayingPlaybackControlsDelegate.h>
#import <libobjc.A.dylib/NUNowPlayingPlaybackScrubberDelegate.h>
#import <libobjc.A.dylib/NUNowPlayingBottomControlsDelegate.h>

@protocol NUNowPlayingViewControllerDelegate;
@class UIView, NUNowPlayingArtworkView, NUNowPlayingTitleView, NUNowPlayingPlaybackScrubber, NUNowPlayingPlaybackControls, NUNowPlayingVolumeControl, NUNowPlayingBottomControls, _UIGrabber, UIButton;

@interface NUNowPlayingViewController : UIViewController <NUNowPlayingPlaybackControlsLayoutSpecProvider, NUNowPlayingTitleViewLayoutSpecProvider, NUNowPlayingPlaybackControlsDelegate, NUNowPlayingPlaybackScrubberDelegate, NUNowPlayingBottomControlsDelegate> {

	UIView* _contentView;
	NUNowPlayingArtworkView* _artworkView;
	NUNowPlayingTitleView* _titleView;
	NUNowPlayingPlaybackScrubber* _playbackScrubber;
	NUNowPlayingPlaybackControls* _playbackControls;
	NUNowPlayingVolumeControl* _volumeControl;
	NUNowPlayingBottomControls* _bottomControls;
	_UIGrabber* _grabberView;
	UIButton* _dismissButton;
	id<NUNowPlayingViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) UIView * contentView;                                                //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) NUNowPlayingArtworkView * artworkView;                               //@synthesize artworkView=_artworkView - In the implementation block
@property (nonatomic,retain) NUNowPlayingTitleView * titleView;                                   //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) NUNowPlayingPlaybackScrubber * playbackScrubber;                     //@synthesize playbackScrubber=_playbackScrubber - In the implementation block
@property (nonatomic,retain) NUNowPlayingPlaybackControls * playbackControls;                     //@synthesize playbackControls=_playbackControls - In the implementation block
@property (nonatomic,retain) NUNowPlayingVolumeControl * volumeControl;                           //@synthesize volumeControl=_volumeControl - In the implementation block
@property (nonatomic,retain) NUNowPlayingBottomControls * bottomControls;                         //@synthesize bottomControls=_bottomControls - In the implementation block
@property (nonatomic,retain) _UIGrabber * grabberView;                                            //@synthesize grabberView=_grabberView - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                                            //@synthesize dismissButton=_dismissButton - In the implementation block
@property (assign,nonatomic,__weak) id<NUNowPlayingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double publisherLogoHeight; 
-(void)applicationWillEnterForeground;
-(void)setArtwork:(id)arg1 ;
-(NUNowPlayingVolumeControl *)volumeControl;
-(id)init;
-(void)setRate:(double)arg1 ;
-(void)setTitleView:(NUNowPlayingTitleView *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setGrabberView:(_UIGrabber *)arg1 ;
-(double)titleLabelFontSize;
-(NUNowPlayingTitleView *)titleView;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(UIButton *)dismissButton;
-(void)setDismissButton:(UIButton *)arg1 ;
-(void)setArtworkView:(NUNowPlayingArtworkView *)arg1 ;
-(NUNowPlayingArtworkView *)artworkView;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setDelegate:(id<NUNowPlayingViewControllerDelegate>)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)loadView;
-(UIView *)contentView;
-(id<NUNowPlayingViewControllerDelegate>)delegate;
-(_UIGrabber *)grabberView;
-(void)setContentView:(UIView *)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)setCurrentTime:(double)arg1 duration:(double)arg2 animated:(BOOL)arg3 ;
-(void)setIsPlaying:(BOOL)arg1 waiting:(BOOL)arg2 ;
-(void)setArtwork:(id)arg1 backgroundImage:(id)arg2 ;
-(CGSize)artworkSizeForViewWidth:(double)arg1 ;
-(void)setPublisherImage:(id)arg1 fallbackName:(id)arg2 ;
-(double)publisherLogoHeight;
-(double)publisherLogoHeight;
-(void)setNextTrackButtonEnabled:(BOOL)arg1 ;
-(void)seekToPosition:(double)arg1 ;
-(void)nowPlayingBottomControlsDidTapPlaybackSpeed:(id)arg1 ;
-(void)nowPlayingBottomControlsDidTapEllipsis:(id)arg1 ;
-(double)nextTrackAndRewindButtonPointSize;
-(double)playPausePointSize;
-(void)nowPlayingPlaybackControlsDidTapRewind:(id)arg1 ;
-(void)nowPlayingPlaybackControlsDidTapPause:(id)arg1 ;
-(void)nowPlayingPlaybackControlsDidTapPlay:(id)arg1 ;
-(void)nowPlayingPlaybackControlsDidTapNextTrack:(id)arg1 ;
-(double)publisherLogoBottomMargin;
-(void)artworkTapped:(id)arg1 ;
-(void)titleViewTapped:(id)arg1 ;
-(void)dismissButtonTapped:(id)arg1 ;
-(NUNowPlayingPlaybackScrubber *)playbackScrubber;
-(NUNowPlayingBottomControls *)bottomControls;
-(NUNowPlayingPlaybackControls *)playbackControls;
-(void)setPlaybackScrubber:(NUNowPlayingPlaybackScrubber *)arg1 ;
-(void)setPlaybackControls:(NUNowPlayingPlaybackControls *)arg1 ;
-(void)setVolumeControl:(NUNowPlayingVolumeControl *)arg1 ;
-(void)setBottomControls:(NUNowPlayingBottomControls *)arg1 ;
@end

