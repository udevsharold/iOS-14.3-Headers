/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUIServices/WorkflowUIServices-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIColor, CALayer, CAShapeLayer, UIImageView, UIImpactFeedbackGenerator;

@interface WFWorkflowProgressView : UIControl {

	double _fractionCompleted;
	double _stopSize;
	double _progressStrokeWidth;
	long long _currentState;
	UIColor* _resolvedTintColor;
	CALayer* _runningContainerLayer;
	CAShapeLayer* _totalRingLayer;
	CAShapeLayer* _partialRingLayer;
	CAShapeLayer* _stopGlyphLayer;
	CAShapeLayer* _waitingContainerLayer;
	CAShapeLayer* _bubbleGlyphLayer;
	UIImageView* _completedContainerView;
	UIImpactFeedbackGenerator* _feedbackGenerator;

}

@property (nonatomic,retain) UIColor * resolvedTintColor;                                  //@synthesize resolvedTintColor=_resolvedTintColor - In the implementation block
@property (assign,nonatomic) long long currentState;                                       //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,readonly) CALayer * runningContainerLayer;                            //@synthesize runningContainerLayer=_runningContainerLayer - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * totalRingLayer;                              //@synthesize totalRingLayer=_totalRingLayer - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * partialRingLayer;                            //@synthesize partialRingLayer=_partialRingLayer - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * stopGlyphLayer;                              //@synthesize stopGlyphLayer=_stopGlyphLayer - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * waitingContainerLayer;                       //@synthesize waitingContainerLayer=_waitingContainerLayer - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * bubbleGlyphLayer;                            //@synthesize bubbleGlyphLayer=_bubbleGlyphLayer - In the implementation block
@property (nonatomic,readonly) UIImageView * completedContainerView;                       //@synthesize completedContainerView=_completedContainerView - In the implementation block
@property (nonatomic,readonly) UIImpactFeedbackGenerator * feedbackGenerator;              //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,nonatomic) double fractionCompleted;                                     //@synthesize fractionCompleted=_fractionCompleted - In the implementation block
@property (assign,nonatomic) double stopSize;                                              //@synthesize stopSize=_stopSize - In the implementation block
@property (assign,nonatomic) double progressStrokeWidth;                                   //@synthesize progressStrokeWidth=_progressStrokeWidth - In the implementation block
-(void)transitionToState:(long long)arg1 ;
-(UIImpactFeedbackGenerator *)feedbackGenerator;
-(void)setCurrentState:(long long)arg1 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)currentState;
-(void)layoutSubviews;
-(double)fractionCompleted;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)transitionToState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setFractionCompleted:(double)arg1 ;
-(UIColor *)resolvedTintColor;
-(void)popCompletedCheckmark;
-(void)popCompletedCheckmarkWithHaptic:(BOOL)arg1 ;
-(void)setProgressStrokeWidth:(double)arg1 ;
-(void)setStopSize:(double)arg1 ;
-(void)setResolvedTintColor:(UIColor *)arg1 ;
-(void)updatePaths;
-(void)transitionRunningLayerToVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)transitionWaitingLayerToVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)beginBubbleGlyphAnimation;
-(void)stopBubbleGlyphAnimation;
-(void)transitionCompletedLayerToVisible:(BOOL)arg1 animated:(BOOL)arg2 haptic:(BOOL)arg3 ;
-(double)stopSize;
-(double)progressStrokeWidth;
-(CALayer *)runningContainerLayer;
-(CAShapeLayer *)totalRingLayer;
-(CAShapeLayer *)partialRingLayer;
-(CAShapeLayer *)stopGlyphLayer;
-(CAShapeLayer *)waitingContainerLayer;
-(CAShapeLayer *)bubbleGlyphLayer;
-(UIImageView *)completedContainerView;
@end
