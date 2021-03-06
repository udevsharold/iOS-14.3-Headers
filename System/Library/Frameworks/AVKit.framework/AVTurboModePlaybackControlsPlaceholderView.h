/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class AVStyleSheet, AVPlayerController, NSString, NSValue, AVVolumeButtonControl, UIView, AVButton, AVObservationController;

@interface AVTurboModePlaybackControlsPlaceholderView : UIView {

	AVStyleSheet* _styleSheet;
	AVPlayerController* _playerController;
	long long _preferredUnobscuredArea;
	long long _includedControlType;
	NSString* _volumeButtonMicaPackageStateName;
	NSValue* _overrideLayoutMarginsWhenEmbeddedInline;
	AVVolumeButtonControl* _volumeButton;
	UIView* _prominentPlayButtonContainer;
	AVButton* _prominentPlayButton;
	UIView* _volumeButtonContainer;
	UIView* _contentView;
	AVObservationController* _observationController;
	CGAffineTransform _overrideTransformForProminentPlayButton;

}

@property (nonatomic,retain) UIView * prominentPlayButtonContainer;                                  //@synthesize prominentPlayButtonContainer=_prominentPlayButtonContainer - In the implementation block
@property (assign,nonatomic,__weak) AVButton * prominentPlayButton;                                  //@synthesize prominentPlayButton=_prominentPlayButton - In the implementation block
@property (nonatomic,retain) UIView * volumeButtonContainer;                                         //@synthesize volumeButtonContainer=_volumeButtonContainer - In the implementation block
@property (assign,nonatomic,__weak) AVVolumeButtonControl * volumeButton;                            //@synthesize volumeButton=_volumeButton - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                                 //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) AVObservationController * observationController;                      //@synthesize observationController=_observationController - In the implementation block
@property (assign,nonatomic) long long includedControlType;                                          //@synthesize includedControlType=_includedControlType - In the implementation block
@property (nonatomic,retain) AVStyleSheet * styleSheet;                                              //@synthesize styleSheet=_styleSheet - In the implementation block
@property (nonatomic,retain) AVPlayerController * playerController;                                  //@synthesize playerController=_playerController - In the implementation block
@property (assign,nonatomic) long long preferredUnobscuredArea;                                      //@synthesize preferredUnobscuredArea=_preferredUnobscuredArea - In the implementation block
@property (nonatomic,copy) NSString * volumeButtonMicaPackageStateName;                              //@synthesize volumeButtonMicaPackageStateName=_volumeButtonMicaPackageStateName - In the implementation block
@property (assign,nonatomic) CGAffineTransform overrideTransformForProminentPlayButton;              //@synthesize overrideTransformForProminentPlayButton=_overrideTransformForProminentPlayButton - In the implementation block
@property (nonatomic,retain) NSValue * overrideLayoutMarginsWhenEmbeddedInline;                      //@synthesize overrideLayoutMarginsWhenEmbeddedInline=_overrideLayoutMarginsWhenEmbeddedInline - In the implementation block
-(NSValue *)overrideLayoutMarginsWhenEmbeddedInline;
-(void)dealloc;
-(void)setOverrideTransformForProminentPlayButton:(CGAffineTransform)arg1 ;
-(CGAffineTransform)overrideTransformForProminentPlayButton;
-(AVStyleSheet *)styleSheet;
-(void)setPreferredUnobscuredArea:(long long)arg1 ;
-(long long)preferredUnobscuredArea;
-(AVButton *)prominentPlayButton;
-(void)setProminentPlayButton:(AVButton *)arg1 ;
-(void)setStyleSheet:(AVStyleSheet *)arg1 ;
-(AVObservationController *)observationController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(void)setOverrideLayoutMarginsWhenEmbeddedInline:(NSValue *)arg1 ;
-(AVPlayerController *)playerController;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(BOOL)hasVisibleControls;
-(id)initWithFrame:(CGRect)arg1 styleSheet:(id)arg2 ;
-(void)setIncludedControlType:(long long)arg1 ;
-(void)setVolumeButtonMicaPackageStateName:(NSString *)arg1 ;
-(void)_updateFramesAndHitRectInsets;
-(CGRect)_frameForIncludedViewType:(long long)arg1 ;
-(void)_makeVolumeButtonAndContainerIfNeeded;
-(id)_makeVolumeButtonAndContainer;
-(void)_makeProminentPlayButtonAndContainerIfNeeded;
-(id)_makeProminentPlayButtonAndContainer;
-(long long)includedControlType;
-(AVVolumeButtonControl *)volumeButton;
-(NSString *)volumeButtonMicaPackageStateName;
-(void)setVolumeButton:(AVVolumeButtonControl *)arg1 ;
-(UIView *)prominentPlayButtonContainer;
-(void)setProminentPlayButtonContainer:(UIView *)arg1 ;
-(UIView *)volumeButtonContainer;
-(void)setVolumeButtonContainer:(UIView *)arg1 ;
-(UIView *)contentView;
-(void)setHidden:(BOOL)arg1 ;
@end

