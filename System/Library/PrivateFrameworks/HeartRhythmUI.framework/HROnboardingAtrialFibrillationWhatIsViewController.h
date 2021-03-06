/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeartRhythmUI/HROnboardingHeroExplanationViewController.h>

@class HRVideoPlayerView;

@interface HROnboardingAtrialFibrillationWhatIsViewController : HROnboardingHeroExplanationViewController {

	HRVideoPlayerView* _videoPlayerView;

}

@property (nonatomic,retain) HRVideoPlayerView * videoPlayerView;              //@synthesize videoPlayerView=_videoPlayerView - In the implementation block
-(HRVideoPlayerView *)videoPlayerView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)titleString;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setUpUI;
-(id)bodyString;
-(id)createHeroView;
-(id)buttonTitleString;
-(void)setVideoPlayerView:(HRVideoPlayerView *)arg1 ;
-(id)initForOnboarding:(BOOL)arg1 upgradingFromAlgorithmVersion:(long long)arg2 ;
-(long long)stackedButtonViewLastButtonMode;
@end

