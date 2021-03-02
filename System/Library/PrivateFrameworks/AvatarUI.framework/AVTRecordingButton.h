/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIButton.h>

@protocol AVTRecordingButtonLongPressDelegate;
@class UIColor, CAShapeLayerAnimated, UIImageView, UIActivityIndicatorView, UIImpactFeedbackGenerator, NSDate;

@interface AVTRecordingButton : UIButton {

	BOOL _forceUsePhoneStyle;
	BOOL _ignoresLongPress;
	BOOL _isTrackingLongPress;
	id<AVTRecordingButtonLongPressDelegate> _longPressDelegate;
	unsigned long long _uiState;
	UIColor* _centerCircleColor;
	CAShapeLayerAnimated* _outerCircle;
	CAShapeLayerAnimated* _innerCircle;
	UIImageView* _iconView;
	UIActivityIndicatorView* _spinner;
	UIImpactFeedbackGenerator* _feedbackGenerator;
	NSDate* _lastFeedbackSent;

}

@property (nonatomic,retain) CAShapeLayerAnimated * outerCircle;                                            //@synthesize outerCircle=_outerCircle - In the implementation block
@property (nonatomic,retain) CAShapeLayerAnimated * innerCircle;                                            //@synthesize innerCircle=_innerCircle - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                                        //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                             //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) BOOL isTrackingLongPress;                                                      //@synthesize isTrackingLongPress=_isTrackingLongPress - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * feedbackGenerator;                                 //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (nonatomic,retain) NSDate * lastFeedbackSent;                                                     //@synthesize lastFeedbackSent=_lastFeedbackSent - In the implementation block
@property (assign,nonatomic,__weak) id<AVTRecordingButtonLongPressDelegate> longPressDelegate;              //@synthesize longPressDelegate=_longPressDelegate - In the implementation block
@property (assign,nonatomic) BOOL forceUsePhoneStyle;                                                       //@synthesize forceUsePhoneStyle=_forceUsePhoneStyle - In the implementation block
@property (assign,setter=setUIState:,nonatomic) unsigned long long uiState;                                 //@synthesize uiState=_uiState - In the implementation block
@property (nonatomic,retain) UIColor * centerCircleColor;                                                   //@synthesize centerCircleColor=_centerCircleColor - In the implementation block
@property (assign,nonatomic) BOOL ignoresLongPress;                                                         //@synthesize ignoresLongPress=_ignoresLongPress - In the implementation block
-(void)configure;
-(void)setIconView:(UIImageView *)arg1 ;
-(UIImageView *)iconView;
-(UIImpactFeedbackGenerator *)feedbackGenerator;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UIActivityIndicatorView *)spinner;
-(void)setFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(unsigned long long)uiState;
-(id)initWithCoder:(id)arg1 ;
-(CAShapeLayerAnimated *)outerCircle;
-(CAShapeLayerAnimated *)innerCircle;
-(void)setForceUsePhoneStyle:(BOOL)arg1 ;
-(BOOL)forceUsePhoneStyle;
-(UIColor *)centerCircleColor;
-(void)sendHapticFeedbackIfNeeded;
-(NSDate *)lastFeedbackSent;
-(void)setLastFeedbackSent:(NSDate *)arg1 ;
-(void)startLongPress;
-(BOOL)isTrackingLongPress;
-(void)endLongPress:(BOOL)arg1 ;
-(void)setIsTrackingLongPress:(BOOL)arg1 ;
-(id<AVTRecordingButtonLongPressDelegate>)longPressDelegate;
-(void)setUIState:(unsigned long long)arg1 ;
-(void)setLongPressDelegate:(id<AVTRecordingButtonLongPressDelegate>)arg1 ;
-(BOOL)ignoresLongPress;
-(void)setOuterCircle:(CAShapeLayerAnimated *)arg1 ;
-(void)setInnerCircle:(CAShapeLayerAnimated *)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setCenterCircleColor:(UIColor *)arg1 ;
-(void)setIgnoresLongPress:(BOOL)arg1 ;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end
