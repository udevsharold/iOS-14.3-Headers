/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <Pegasus/PGMaterialView.h>

@class PGVibrantFillView, UIViewPropertyAnimator, UIColor;

@interface PGProgressIndicator : PGMaterialView {

	PGVibrantFillView* _elapsedTrack;
	PGVibrantFillView* _completeTrack;
	UIViewPropertyAnimator* _pulseAnimator;
	long long _pulseState;
	BOOL _includesWaitingToPlayIndicator;
	double _progress;
	UIColor* _customElapsedTrackTintColor;

}

@property (assign,nonatomic) double progress;                                    //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) UIColor * customElapsedTrackTintColor;              //@synthesize customElapsedTrackTintColor=_customElapsedTrackTintColor - In the implementation block
@property (assign,nonatomic) BOOL includesWaitingToPlayIndicator;                //@synthesize includesWaitingToPlayIndicator=_includesWaitingToPlayIndicator - In the implementation block
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setProgress:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)progress;
-(void)setFrame:(CGRect)arg1 ;
-(void)_setCornerRadius:(double)arg1 ;
-(void)_updateElapsedTrackTintColor;
-(void)_performLayout;
-(void)_updatePulseAnimatorIfNeeded;
-(UIColor *)customElapsedTrackTintColor;
-(BOOL)includesWaitingToPlayIndicator;
-(void)_transitionToPulseStateIfNeeded:(long long)arg1 ;
-(void)_applyPulseState;
-(void)setCustomElapsedTrackTintColor:(UIColor *)arg1 ;
-(void)setIncludesWaitingToPlayIndicator:(BOOL)arg1 ;
@end
