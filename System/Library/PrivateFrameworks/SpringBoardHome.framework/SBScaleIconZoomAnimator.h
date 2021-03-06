/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBIconZoomAnimator.h>

@class UIView, SBIconView, SBReversibleLayerPropertyAnimator, NSMutableArray, SBIcon, SBHScaleZoomSettings;

@interface SBScaleIconZoomAnimator : SBIconZoomAnimator {

	UIEdgeInsets _iconScootch;
	double _naturalVisualAltitude;
	UIView* _scalingView;
	SBIconView* _targetIconView;
	SBReversibleLayerPropertyAnimator* _homeScreenScaleAnimator;
	SBReversibleLayerPropertyAnimator* _targetIconScaleXAnimator;
	SBReversibleLayerPropertyAnimator* _targetIconScaleYAnimator;
	NSMutableArray* _animationCompletions;
	SBIcon* _targetIcon;
	UIView* _targetIconPositioningView;
	CGPoint _zoomScaleDimension;
	CGPoint _zoomedTargetIconCenter;
	CGPoint _targetIconCenter;

}

@property (nonatomic,retain) SBReversibleLayerPropertyAnimator * homeScreenScaleAnimator;               //@synthesize homeScreenScaleAnimator=_homeScreenScaleAnimator - In the implementation block
@property (nonatomic,retain) SBReversibleLayerPropertyAnimator * targetIconScaleXAnimator;              //@synthesize targetIconScaleXAnimator=_targetIconScaleXAnimator - In the implementation block
@property (nonatomic,retain) SBReversibleLayerPropertyAnimator * targetIconScaleYAnimator;              //@synthesize targetIconScaleYAnimator=_targetIconScaleYAnimator - In the implementation block
@property (nonatomic,retain) NSMutableArray * animationCompletions;                                     //@synthesize animationCompletions=_animationCompletions - In the implementation block
@property (nonatomic,readonly) id<SBScaleIconZoomAnimationContaining> animationContainer; 
@property (nonatomic,readonly) SBIcon * targetIcon;                                                     //@synthesize targetIcon=_targetIcon - In the implementation block
@property (nonatomic,readonly) SBIconView * referenceIconView; 
@property (nonatomic,readonly) SBIconView * targetIconView; 
@property (nonatomic,readonly) UIView * targetIconContainerView; 
@property (nonatomic,readonly) UIView * defaultTargetIconContainerView; 
@property (nonatomic,readonly) UIView * targetIconPositioningView;                                      //@synthesize targetIconPositioningView=_targetIconPositioningView - In the implementation block
@property (nonatomic,readonly) double zoomScale; 
@property (nonatomic,readonly) double maxHomeScreenZoomScale; 
@property (nonatomic,readonly) BOOL fadesHomeScreen; 
@property (nonatomic,readonly) CGPoint zoomScaleDimension;                                              //@synthesize zoomScaleDimension=_zoomScaleDimension - In the implementation block
@property (nonatomic,readonly) CGPoint zoomedTargetIconCenter;                                          //@synthesize zoomedTargetIconCenter=_zoomedTargetIconCenter - In the implementation block
@property (nonatomic,readonly) CGPoint targetIconCenter;                                                //@synthesize targetIconCenter=_targetIconCenter - In the implementation block
@property (nonatomic,retain) SBHScaleZoomSettings * settings; 
+(BOOL)validateAnimationContainer:(id)arg1 targetIcon:(id)arg2 ;
-(double)zoomScale;
-(unsigned long long)_numberOfSignificantAnimations;
-(NSMutableArray *)animationCompletions;
-(void)hintToFraction:(double)arg1 ;
-(void)setAnimationCompletions:(NSMutableArray *)arg1 ;
-(SBIcon *)targetIcon;
-(CGPoint)_zoomedIconCenter;
-(void)_prepareAnimation;
-(void)_configureTargetIconPositioningView:(id)arg1 ;
-(double)_zoomedVisualAltitude;
-(BOOL)_forceSquareZoomDimension;
-(UIView *)defaultTargetIconContainerView;
-(id)initWithAnimationContainer:(id)arg1 targetIcon:(id)arg2 ;
-(void)_applyIconGridFadeFraction:(double)arg1 ;
-(void)_applyVisualAltitudeFraction:(double)arg1 ;
-(CGPoint)_targetIconScaleForZoomFraction:(double)arg1 ;
-(CGPoint)_referenceIconImageCenter;
-(double)_homeScreenScaleForZoomFraction:(double)arg1 ;
-(void)_setAnimationFraction:(double)arg1 ;
-(CGPoint)zoomedTargetIconCenter;
-(SBReversibleLayerPropertyAnimator *)targetIconScaleXAnimator;
-(void)_applyZoomFraction:(double)arg1 ;
-(SBIconView *)targetIconView;
-(void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(BOOL)arg4 sharedCompletion:(/*^block*/id)arg5 ;
-(void)_cleanupAnimation;
-(CGPoint)targetIconCenter;
-(UIView *)targetIconPositioningView;
-(SBIconView *)referenceIconView;
-(CGPoint)zoomScaleDimension;
-(void)setTargetIconScaleYAnimator:(SBReversibleLayerPropertyAnimator *)arg1 ;
-(BOOL)fadesHomeScreen;
-(void)_setZoomScale:(CGPoint)arg1 ;
-(SBReversibleLayerPropertyAnimator *)targetIconScaleYAnimator;
-(UIView *)targetIconContainerView;
-(void)setTargetIconScaleXAnimator:(SBReversibleLayerPropertyAnimator *)arg1 ;
-(BOOL)shouldMatchMoveWithDock;
-(SBReversibleLayerPropertyAnimator *)homeScreenScaleAnimator;
-(double)maxHomeScreenZoomScale;
-(CGRect)_zoomedFrame;
-(void)_setIconAlpha:(double)arg1 ;
-(void)setHomeScreenScaleAnimator:(SBReversibleLayerPropertyAnimator *)arg1 ;
@end

