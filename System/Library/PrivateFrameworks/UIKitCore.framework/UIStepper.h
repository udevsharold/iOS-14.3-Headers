/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIStepperControl.h>

@protocol UIStepperVisualElement;
@class NSMutableDictionary, UIView;

@interface UIStepper : UIControl <UIStepperControl> {

	NSMutableDictionary* _dividerImages;
	NSMutableDictionary* _incrementImages;
	NSMutableDictionary* _decrementImages;
	NSMutableDictionary* _backgroundImages;
	BOOL _continuous;
	BOOL _autorepeat;
	BOOL _wraps;
	double _value;
	double _minimumValue;
	double _maximumValue;
	double _stepValue;
	UIView*<UIStepperVisualElement> _visualElement;

}

@property (nonatomic,retain) UIView*<UIStepperVisualElement> visualElement;              //@synthesize visualElement=_visualElement - In the implementation block
@property (assign,getter=isContinuous,nonatomic) BOOL continuous;                        //@synthesize continuous=_continuous - In the implementation block
@property (assign,nonatomic) BOOL autorepeat;                                            //@synthesize autorepeat=_autorepeat - In the implementation block
@property (assign,nonatomic) BOOL wraps;                                                 //@synthesize wraps=_wraps - In the implementation block
@property (assign,nonatomic) double value;                                               //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double minimumValue;                                        //@synthesize minimumValue=_minimumValue - In the implementation block
@property (assign,nonatomic) double maximumValue;                                        //@synthesize maximumValue=_maximumValue - In the implementation block
@property (assign,nonatomic) double stepValue;                                           //@synthesize stepValue=_stepValue - In the implementation block
+(BOOL)_allowsUnsupportedMacIdiomBehavior;
+(void)_setAllowsUnsupportedMacIdiomBehavior:(BOOL)arg1 ;
+(Class)_fallbackVisualElementClass;
+(Class)visualElementClassForTraitCollection:(id)arg1 ;
+(id)visualElementForTraitCollection:(id)arg1 ;
-(double)maximumValue;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(BOOL)wraps;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(double)stepValue;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(void)setTintColor:(id)arg1 ;
-(void)setStepValue:(double)arg1 ;
-(double)value;
-(void)tintColorDidChange;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(id)backgroundImageForState:(unsigned long long)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_refreshVisualElementForTraitCollection:(id)arg1 populatingAPIProperties:(BOOL)arg2 ;
-(UIView*<UIStepperVisualElement>)visualElement;
-(void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 ;
-(BOOL)isContinuous;
-(void)setValue:(double)arg1 ;
-(void)setMaximumValue:(double)arg1 ;
-(void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setWraps:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)autorepeat;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_commonStepperInit;
-(void)visualElementDidSetValue:(id)arg1 ;
-(void)setIncrementImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)incrementImageForState:(unsigned long long)arg1 ;
-(void)setDecrementImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)decrementImageForState:(unsigned long long)arg1 ;
-(id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 ;
-(void)visualElementSendValueChangedEvent:(id)arg1 ;
-(double)minimumValue;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMinimumValue:(double)arg1 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setVisualElement:(UIView*<UIStepperVisualElement>)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setContinuous:(BOOL)arg1 ;
-(void)_refreshVisualElement;
-(void)setFrame:(CGRect)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_emitValueChanged;
-(void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAutorepeat:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

