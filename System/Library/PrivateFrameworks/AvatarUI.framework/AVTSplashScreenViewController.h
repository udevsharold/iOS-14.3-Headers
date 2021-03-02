/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OBWelcomeFullCenterContentController.h>

@protocol AVTSplashScreenViewControllerDelegate;
@class OBBoldTrayButton, UIView, AVTSplashScreenConfiguration, AVPlayerLooper, AVQueuePlayer, AVPlayerViewController, NSLayoutConstraint;

@interface AVTSplashScreenViewController : OBWelcomeFullCenterContentController {

	BOOL _isPlayingVideos;
	id<AVTSplashScreenViewControllerDelegate> _delegate;
	OBBoldTrayButton* _continueButton;
	UIView* _videoContentView;
	AVTSplashScreenConfiguration* _configuration;
	AVPlayerLooper* _playerLooper;
	AVQueuePlayer* _queuePlayer;
	AVPlayerViewController* _playerViewController;
	AVPlayerLooper* _secondaryPlayerLooper;
	AVQueuePlayer* _secondaryQueuePlayer;
	AVPlayerViewController* _secondaryPlayerViewController;
	NSLayoutConstraint* _videoContentWidthConstraint;
	NSLayoutConstraint* _videoContentHeightConstraint;

}

@property (nonatomic,retain) OBBoldTrayButton * continueButton;                                      //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) UIView * videoContentView;                                              //@synthesize videoContentView=_videoContentView - In the implementation block
@property (nonatomic,retain) AVTSplashScreenConfiguration * configuration;                           //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) BOOL isPlayingVideos;                                                   //@synthesize isPlayingVideos=_isPlayingVideos - In the implementation block
@property (nonatomic,retain) AVPlayerLooper * playerLooper;                                          //@synthesize playerLooper=_playerLooper - In the implementation block
@property (nonatomic,retain) AVQueuePlayer * queuePlayer;                                            //@synthesize queuePlayer=_queuePlayer - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * playerViewController;                          //@synthesize playerViewController=_playerViewController - In the implementation block
@property (nonatomic,retain) AVPlayerLooper * secondaryPlayerLooper;                                 //@synthesize secondaryPlayerLooper=_secondaryPlayerLooper - In the implementation block
@property (nonatomic,retain) AVQueuePlayer * secondaryQueuePlayer;                                   //@synthesize secondaryQueuePlayer=_secondaryQueuePlayer - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * secondaryPlayerViewController;                 //@synthesize secondaryPlayerViewController=_secondaryPlayerViewController - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * videoContentWidthConstraint;                       //@synthesize videoContentWidthConstraint=_videoContentWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * videoContentHeightConstraint;                      //@synthesize videoContentHeightConstraint=_videoContentHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<AVTSplashScreenViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) AVPlayerViewController * primaryVideoController; 
@property (nonatomic,readonly) AVPlayerLooper * primaryVideoLooper; 
-(AVTSplashScreenConfiguration *)configuration;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(AVPlayerViewController *)playerViewController;
-(OBBoldTrayButton *)continueButton;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setContinueButton:(OBBoldTrayButton *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setVideoContentView:(UIView *)arg1 ;
-(UIView *)videoContentView;
-(void)didTapContinueButton:(id)arg1 ;
-(void)setPlayerLooper:(AVPlayerLooper *)arg1 ;
-(AVPlayerLooper *)playerLooper;
-(void)setSecondaryQueuePlayer:(AVQueuePlayer *)arg1 ;
-(AVQueuePlayer *)secondaryQueuePlayer;
-(void)setSecondaryPlayerLooper:(AVPlayerLooper *)arg1 ;
-(void)setSecondaryPlayerViewController:(AVPlayerViewController *)arg1 ;
-(AVPlayerViewController *)secondaryPlayerViewController;
-(double)desiredHeightForVideoContent;
-(void)setVideoContentWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setVideoContentHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)videoContentWidthConstraint;
-(NSLayoutConstraint *)videoContentHeightConstraint;
-(void)startPlayingVideos;
-(void)stopPlayingVideos;
-(AVPlayerViewController *)primaryVideoController;
-(BOOL)isPlayingVideos;
-(void)setIsPlayingVideos:(BOOL)arg1 ;
-(id)initWithDefaultConfiguration;
-(id)initWithConfiguration:(id)arg1 styleProvider:(id)arg2 ;
-(AVPlayerLooper *)primaryVideoLooper;
-(void)detachVideoControllerAndLooper;
-(AVPlayerLooper *)secondaryPlayerLooper;
-(void)setConfiguration:(AVTSplashScreenConfiguration *)arg1 ;
-(AVQueuePlayer *)queuePlayer;
-(void)setQueuePlayer:(AVQueuePlayer *)arg1 ;
-(void)setDelegate:(id<AVTSplashScreenViewControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPlayerViewController:(AVPlayerViewController *)arg1 ;
-(id<AVTSplashScreenViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
@end
