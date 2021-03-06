/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol _UISliderVisualElement;
@class UIView, _UISliderDataModel, NSArray, _UIEdgeFeedbackGenerator, _UIModulationFeedbackGenerator, UIImage, UIColor;

@interface UISlider : UIControl <NSCoding> {

	UIView*<_UISliderVisualElement> _visualElement;
	_UISliderDataModel* _data;
	NSArray* _dummyViews;

}

@property (assign,setter=_setTrackEnabled:,nonatomic) BOOL _trackEnabled; 
@property (setter=_setEdgeFeedbackGenerator:,getter=_edgeFeedbackGenerator,nonatomic,retain) _UIEdgeFeedbackGenerator * edgeFeedbackGenerator; 
@property (setter=_setModulationFeedbackGenerator:,getter=_modulationFeedbackGenerator,nonatomic,retain) _UIModulationFeedbackGenerator * modulationFeedbackGenerator; 
@property (setter=_setEdgeFeedbackBehavior:,getter=_edgeFeedbackBehavior,nonatomic,retain) _UIEdgeFeedbackGenerator * edgeFeedbackBehavior; 
@property (assign,nonatomic) float value; 
@property (assign,nonatomic) float minimumValue; 
@property (assign,nonatomic) float maximumValue; 
@property (nonatomic,retain) UIImage * minimumValueImage; 
@property (nonatomic,retain) UIImage * maximumValueImage; 
@property (assign,getter=isContinuous,nonatomic) BOOL continuous; 
@property (nonatomic,retain) UIColor * minimumTrackTintColor; 
@property (nonatomic,retain) UIColor * maximumTrackTintColor; 
@property (nonatomic,retain) UIColor * thumbTintColor; 
@property (nonatomic,readonly) UIImage * currentThumbImage; 
@property (nonatomic,readonly) UIImage * currentMinimumTrackImage; 
@property (nonatomic,readonly) UIImage * currentMaximumTrackImage; 
+(BOOL)_allowsUnsupportedMacIdiomBehavior;
+(void)_setAllowsUnsupportedMacIdiomBehavior:(BOOL)arg1 ;
+(BOOL)_allowActionsToQueue;
-(UIColor *)thumbTintColor;
-(float)maximumValue;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setTracking:(BOOL)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setMaximumValueImage:(UIImage *)arg1 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(void)setMaximumTrackImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(float)value;
-(BOOL)isTracking;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)init;
-(UIImage *)maximumValueImage;
-(UIColor *)minimumTrackTintColor;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isAccessibilityElementByDefault;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(BOOL)isContinuous;
-(void)setValue:(float)arg1 ;
-(void)setMaximumValue:(float)arg1 ;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(CGRect)minimumValueImageRectForBounds:(CGRect)arg1 ;
-(UIColor *)maximumTrackTintColor;
-(UIImage *)currentThumbImage;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)cancelTouchTracking;
-(void)_installVisualElement;
-(void)setShowValue:(BOOL)arg1 ;
-(CGRect)maximumValueImageRectForBounds:(CGRect)arg1 ;
-(void)_installVisualElement:(id)arg1 ;
-(void)_setEdgeFeedbackGenerator:(id)arg1 ;
-(id)_edgeFeedbackGenerator;
-(UIImage *)currentMinimumTrackImage;
-(UIImage *)currentMaximumTrackImage;
-(id)_modulationFeedbackGenerator;
-(void)setThumbImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)_setModulationFeedbackGenerator:(id)arg1 ;
-(void)_setEdgeFeedbackBehavior:(id)arg1 ;
-(id)_edgeFeedbackBehavior;
-(CGRect)valueTextRectForBounds:(CGRect)arg1 ;
-(void)_setTrackEnabled:(BOOL)arg1 ;
-(void)_setThumbEnabled:(BOOL)arg1 ;
-(id)_thumbView;
-(void)_setMinimumTrackVisible:(BOOL)arg1 withDuration:(double)arg2 ;
-(BOOL)_isThumbEnabled;
-(UIEdgeInsets)_thumbHitEdgeInsets;
-(void)_setUseLookNeue:(BOOL)arg1 ;
-(id)description;
-(BOOL)_alwaysHandleScrollerMouseEvent;
-(void)setMinimumValueImage:(UIImage *)arg1 ;
-(id)maximumTrackImageForState:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(float)minimumValue;
-(void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)cancelMouseTracking;
-(void)setMinimumTrackImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(UIImage *)minimumValueImage;
-(void)setThumbTintColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)minimumTrackImageForState:(unsigned long long)arg1 ;
-(void)setMinimumTrackTintColor:(UIColor *)arg1 ;
-(BOOL)isAnimatingValueChange;
-(void)setMinimumValue:(float)arg1 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(id)createThumbView;
-(id)thumbImageForState:(unsigned long long)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setMaxValue:(float)arg1 ;
-(void)_setMinValue:(float)arg1 ;
-(BOOL)_trackEnabled;
-(id)_minTrackView;
-(id)_maxTrackView;
-(id)_minValueView;
-(id)_maxValueView;
-(void)setMinimumTrackImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setContinuous:(BOOL)arg1 ;
-(void)setMaximumTrackTintColor:(UIColor *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setMaximumTrackImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_thumbViewNeue;
-(void)encodeWithCoder:(id)arg1 ;
@end

