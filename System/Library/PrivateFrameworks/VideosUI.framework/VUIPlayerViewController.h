/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AVPlayer, UIView, NSString, NSArray, UIViewController, AVPlayerViewControllerCustomControlsView;


@protocol VUIPlayerViewController <NSObject>
@property (nonatomic,retain) AVPlayer * player; 
@property (nonatomic,readonly) UIView * contentOverlayView; 
@property (nonatomic,copy) NSString * videoGravity; 
@property (assign,nonatomic) BOOL allowsPictureInPicturePlayback; 
@property (assign,nonatomic) BOOL requiresLinearPlayback; 
@property (nonatomic,readonly) CGRect videoBounds; 
@property (nonatomic,copy) NSArray * customControlItems; 
@property (assign,nonatomic) BOOL playbackControlsIncludeTransportControls; 
@property (assign,nonatomic) BOOL playbackControlsIncludeDisplayModeControls; 
@property (assign,nonatomic) BOOL playbackControlsIncludeVolumeControls; 
@property (nonatomic,readonly) UIViewController * viewControllerForFullScreenPresentation; 
@property (nonatomic,readonly) AVPlayerViewControllerCustomControlsView * customControlsView; 
@property (nonatomic,readonly) CGSize videoDisplaySize; 
@property (nonatomic,readonly) double videoDisplayScale; 
@property (assign,nonatomic) BOOL allowAutorotate; 
@required
-(void)setPlayer:(id)arg1;
-(void)setVideoGravity:(id)arg1;
-(AVPlayerViewControllerCustomControlsView *)customControlsView;
-(double)videoDisplayScale;
-(BOOL)playbackControlsIncludeTransportControls;
-(void)setPlaybackControlsIncludeTransportControls:(BOOL)arg1;
-(BOOL)playbackControlsIncludeDisplayModeControls;
-(void)setPlaybackControlsIncludeDisplayModeControls:(BOOL)arg1;
-(void)setPlaybackControlsIncludeVolumeControls:(BOOL)arg1;
-(void)setCustomControlItems:(id)arg1;
-(UIViewController *)viewControllerForFullScreenPresentation;
-(BOOL)playbackControlsIncludeVolumeControls;
-(NSArray *)customControlItems;
-(AVPlayer *)player;
-(void)setRequiresLinearPlayback:(BOOL)arg1;
-(BOOL)allowsPictureInPicturePlayback;
-(BOOL)requiresLinearPlayback;
-(CGSize)videoDisplaySize;
-(void)setAllowsPictureInPicturePlayback:(BOOL)arg1;
-(UIView *)contentOverlayView;
-(void)stopPictureInPicture;
-(NSString *)videoGravity;
-(CGRect)videoBounds;
-(BOOL)allowAutorotate;
-(void)setAllowAutorotate:(BOOL)arg1;

@end

