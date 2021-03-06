/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKitCore/_UIBasicAnimationFactory.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKitCore/_UIHostedFocusSystemDelegate.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIView, UIImageView, NSMutableArray, UISegment, UIColor, UIVibrancyEffect, _UIHostedFocusSystem, UILongPressGestureRecognizer, NSString;

@interface UISegmentedControl : UIControl <_UIBasicAnimationFactory, UIPopoverPresentationControllerDelegate, _UIHostedFocusSystemDelegate, CAAnimationDelegate, NSCoding> {

	UIView* _selectionIndicatorView;
	UIImageView* _selectionImageView;
	NSMutableArray* _segments;
	long long _selectedSegment;
	long long _highlightedSegment;
	long long _selectionIndicatorSegment;
	long long _hoveredSegment;
	UIView* _removedSegment;
	UISegment* _focusedSegment;
	long long _barStyle;
	id _appearanceStorage;
	double _enabledAlpha;
	UIColor* _selectedSegmentTintColor;
	UIColor* _backgroundTintColor;
	UIVibrancyEffect* _selectedSegmentVibrancyEffect;
	double _innerSegmentSpacing;
	struct {
		unsigned size : 2;
		unsigned delegateAlwaysNotifiesDelegateOfSegmentClicks : 1;
		unsigned momentaryClick : 1;
		unsigned tracking : 1;
		unsigned autosizeToFitSegments : 1;
		unsigned isSizingToFit : 1;
		unsigned autosizeText : 1;
		unsigned transparentBackground : 1;
		unsigned useProportionalWidthSegments : 1;
		unsigned translucentBackground : 1;
		unsigned appearanceNeedsUpdate : 1;
		unsigned selectionIndicatorDragged : 1;
		unsigned useInnerSegmentSpacing : 1;
		unsigned adjustsForContentSizeCategory : 1;
		unsigned useDynamicShadow : 1;
		unsigned animatingOutDynamicShadow : 1;
		unsigned animatingSeleciton : 1;
		unsigned animatingHoverOut : 1;
	}  _segmentedControlFlags;
	_UIHostedFocusSystem* _internalFocusSystem;
	UILongPressGestureRecognizer* _axLongPressGestureRecognizer;

}

@property (nonatomic,retain) UIView * removedSegment;                                                                            //@synthesize removedSegment=_removedSegment - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * axLongPressGestureRecognizer;                                        //@synthesize axLongPressGestureRecognizer=_axLongPressGestureRecognizer - In the implementation block
@property (getter=_internalFocusSystem,nonatomic,readonly) _UIHostedFocusSystem * internalFocusSystem;                           //@synthesize internalFocusSystem=_internalFocusSystem - In the implementation block
@property (getter=_useDynamicShadow,readonly) BOOL useDynamicShadow; 
@property (setter=_setAnimatingOutDynamicShdaow:,getter=_animatingOutDynamicShadow) BOOL animatingOutDynamicShadow; 
@property (assign,nonatomic) long long segmentedControlStyle; 
@property (assign,getter=isMomentary,nonatomic) BOOL momentary; 
@property (nonatomic,readonly) unsigned long long numberOfSegments; 
@property (assign,nonatomic) BOOL apportionsSegmentWidthsByContent; 
@property (assign,nonatomic) long long selectedSegmentIndex; 
@property (nonatomic,retain) UIColor * selectedSegmentTintColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_modernBackgroundSelected:(BOOL)arg1 disableShadow:(BOOL)arg2 maximumSize:(CGSize)arg3 highlighted:(BOOL)arg4 traitCollection:(id)arg5 tintColor:(id)arg6 size:(int)arg7 ;
+(double)defaultHeight;
+(CGColorRef)_backgroundPrimaryColorSelected:(BOOL)arg1 highlighted:(BOOL)arg2 traitCollection:(id)arg3 tintColor:(id)arg4 ;
+(BOOL)_updateDynamicShadowView:(id)arg1 withAnimationDelegate:(id)arg2 useDynamicShadow:(BOOL)arg3 animated:(BOOL)arg4 ;
+(CGRect)_selectionFrameForBounds:(CGRect)arg1 size:(int)arg2 traitCollection:(id)arg3 accessibilityView:(BOOL)arg4 ;
+(id)_modernDividerImageBackground:(BOOL)arg1 traitCollection:(id)arg2 tintColor:(id)arg3 size:(int)arg4 ;
+(CGColorRef)_dividerPrimaryColorBackground:(BOOL)arg1 traitCollection:(id)arg2 tintColor:(id)arg3 ;
+(double)_dividerWidthForTraitCollection:(id)arg1 size:(int)arg2 ;
+(double)_sectionIndicatorOverflowForTraitCollection:(id)arg1 size:(int)arg2 ;
+(BOOL)_selectFocusedSegmentAfterFocusUpdate;
+(double)_lineWidthForTraitCollection:(id)arg1 size:(int)arg2 ;
+(id)_tvDefaultTextColorSelected;
+(id)_tvDefaultTextColorFocused;
+(id)_tvDefaultTextColorDisabledSelected;
+(id)_tvDefaultTextColorNormalUserInterfaceStyleLight;
+(id)_tvDefaultTextColorDisabledUserInterfaceStyleLight;
+(id)_tvDefaultTextColorNormalUserInterfaceStyleDark;
+(id)_tvDefaultTextColorDisabledUserInterfaceStyleDark;
+(double)_sectionIndicatorInsetForTraitCollection:(id)arg1 size:(int)arg2 ;
+(double)_cornerRadiusForTraitCollection:(id)arg1 size:(int)arg2 ;
+(double)defaultHeightForStyle:(long long)arg1 size:(int)arg2 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(BOOL)_cursorInteractionEnabled;
+(BOOL)_useShadowForSelectedTintColor:(id)arg1 traitCollection:(id)arg2 ;
+(CATransform3D)_hiddenSelectionTransform;
+(id)_selectionPopAnimationForKey:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 ;
+(id)_selectionOpacityAnimationFromValue:(float)arg1 toValue:(float)arg2 ;
+(CATransform3D)_highlightSelectionTransform;
+(double)_selectionOffsetAdjustmentForSegment:(id)arg1 ;
+(id)_fontForTraitCollection:(id)arg1 size:(int)arg2 selected:(BOOL)arg3 ;
+(double)defaultHeightForStyle:(long long)arg1 ;
-(void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)initWithItems:(id)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setControlSize:(int)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(int)controlSize;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(id)viewForLastBaselineLayout;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(void)setBarStyle:(long long)arg1 ;
-(BOOL)canBecomeFocused;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(void)_setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 barMetrics:(long long)arg4 ;
-(long long)barStyle;
-(double)_barHeight;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 barMetrics:(long long)arg4 ;
-(void)_updateSelectionToSegment:(id)arg1 highlight:(BOOL)arg2 shouldAnimate:(BOOL)arg3 sameSegment:(BOOL)arg4 ;
-(CGRect)frame;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)_setSelected:(BOOL)arg1 highlighted:(BOOL)arg2 forSegmentAtIndex:(int)arg3 forceInfoDisplay:(BOOL)arg4 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setContentPositionAdjustment:(UIOffset)arg1 forSegmentType:(long long)arg2 barMetrics:(long long)arg3 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 withAnimator:(id)arg3 ;
-(void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 withAnimator:(id)arg3 ;
-(void)dealloc;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(CGRect)bounds;
-(unsigned long long)numberOfSegments;
-(void)_setSelected:(BOOL)arg1 forSegmentAtIndex:(int)arg2 forceInfoDisplay:(BOOL)arg3 ;
-(void)hoverOnSegment:(long long)arg1 ;
-(long long)_segmentIndexToHighlight:(BOOL*)arg1 ;
-(void)_setHoverOnSegment:(long long)arg1 hovered:(BOOL)arg2 ;
-(void)_insertSelectionViewForSegment:(id)arg1 ;
-(void)_clearSelectedSegment;
-(void)_setHighlightedSegmentHighlighted:(BOOL)arg1 ;
-(BOOL)_hasEnabledSegment;
-(int)_closestSegmentIndexAtPoint:(CGPoint)arg1 ;
-(void)setSegmentControlStyle:(long long)arg1 ;
-(void)_tapSegmentAtPoint:(CGPoint)arg1 touchDown:(BOOL)arg2 ;
-(BOOL)_shouldConsumeEventWithPresses:(id)arg1 ;
-(void)_selectFocusedSegment;
-(void)setAlpha:(double)arg1 ;
-(void)_cancelDelayedFocusAction;
-(void)_sendDelayedFocusActionIfNecessary;
-(BOOL)_usesNewAnimations;
-(id)titleTextAttributesForState:(unsigned long long)arg1 ;
-(BOOL)shouldTrack;
-(id)imageForSegment:(unsigned long long)arg1 ;
-(long long)segmentControlStyle;
-(id)_createSegmentAtIndex:(int)arg1 position:(unsigned)arg2 withInfo:(id)arg3 ;
-(void)setSegmentedControlStyle:(long long)arg1 ;
-(void)setTransparentBackground:(BOOL)arg1 ;
-(void)updateForMiniBarState:(BOOL)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_setAutosizeText:(BOOL)arg1 ;
-(id)_preferredFocusEnvironmentsForFocusSystem:(id)arg1 ;
-(void)_focusSystem:(id)arg1 didFinishUpdatingFocusInContext:(id)arg2 ;
-(id)_focusMapContainerForFocusSystem:(id)arg1 ;
-(float)widthForSegment:(unsigned long long)arg1 ;
-(BOOL)_focusSystem:(id)arg1 containsChildOfHostEnvironment:(id)arg2 ;
-(BOOL)apportionsSegmentWidthsByContent;
-(double)_innerSegmentSpacing;
-(void)setApportionsSegmentWidthsByContent:(BOOL)arg1 ;
-(id)_segmentAtIndex:(int)arg1 ;
-(void)_setSegmentedControlAppearance:(SCD_Struct_UI64*)arg1 ;
-(long long)segmentedControlStyle;
-(void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)_setAppearanceIsTiled:(BOOL)arg1 leftCapWidth:(unsigned long long)arg2 rightCapWidth:(unsigned long long)arg3 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(BOOL)adjustsForContentSizeCategory;
-(void)_setUsesNewAnimations:(BOOL)arg1 ;
-(BOOL)_animatingOutDynamicShadow;
-(id)titleForSegmentAtIndex:(unsigned long long)arg1 ;
-(void)insertSegmentWithImage:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)insertSegmentWithAction:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)_insertSegmentWithAttributedTitle:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)setAction:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(id)actionForSegmentAtIndex:(unsigned long long)arg1 ;
-(void)_setAttributedTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(UIView *)removedSegment;
-(id)_attributedTitleForSegmentAtIndex:(unsigned long long)arg1 ;
-(void)setImage:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(id)imageForSegmentAtIndex:(unsigned long long)arg1 ;
-(void)setWidth:(double)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(double)widthForSegmentAtIndex:(unsigned long long)arg1 ;
-(void)setContentOffset:(CGSize)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(CGSize)contentOffsetForSegmentAtIndex:(unsigned long long)arg1 ;
-(void)addSegmentWithTitle:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(BOOL)_alwaysEmitValueChanged;
-(BOOL)isEnabledForSegmentAtIndex:(unsigned long long)arg1 ;
-(void)_setInterSegmentSpacing:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_animateContentChangeWithAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setAlwaysEmitValueChanged:(BOOL)arg1 ;
-(id)_uiktest_labelsWithState:(unsigned long long)arg1 ;
-(UIOffset)contentPositionAdjustmentForSegmentType:(long long)arg1 barMetrics:(long long)arg2 ;
-(id)_badgeValueForSegmentAtIndex:(unsigned long long)arg1 ;
-(BOOL)useBlockyMagnificationInClassic;
-(void)_setBadgeValue:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(id)_uiktest_segmentAtIndex:(unsigned long long)arg1 ;
-(void)setImagePadding:(CGSize)arg1 forSegment:(unsigned long long)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)removeSegment:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setAlwaysNotifiesDelegateOfSegmentClicks:(BOOL)arg1 ;
-(void)insertSegment:(unsigned long long)arg1 withTitle:(id)arg2 animated:(BOOL)arg3 ;
-(void)insertSegment:(unsigned long long)arg1 withImage:(id)arg2 animated:(BOOL)arg3 ;
-(void)setTitle:(id)arg1 forSegment:(unsigned long long)arg2 ;
-(void)setImage:(id)arg1 forSegment:(unsigned long long)arg2 ;
-(void)setWidth:(float)arg1 forSegment:(unsigned long long)arg2 ;
-(void)setContentOffset:(CGSize)arg1 forSegment:(unsigned long long)arg2 ;
-(CGSize)contentOffsetForSegment:(unsigned long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 forSegment:(unsigned long long)arg2 ;
-(BOOL)isEnabledForSegment:(unsigned long long)arg1 ;
-(void)removeAllSegments;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isMomentary;
-(void)sizeToFit;
-(void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)layoutSubviews;
-(void)setMomentary:(BOOL)arg1 ;
-(id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(void)_highlightSegment:(long long)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)_diagnoseFocusabilityForReport:(id)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setAdjustsForContentSizeCategory:(BOOL)arg1 ;
-(BOOL)isSpringLoaded;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)infoViewForSegment:(long long)arg1 ;
-(void)setSelectedSegmentIndex:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 withStyle:(long long)arg2 withItems:(id)arg3 ;
-(void)setSpringLoaded:(BOOL)arg1 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)_useDynamicShadow;
-(void)_emitValueChanged;
-(UIColor *)selectedSegmentTintColor;
-(BOOL)transparentBackground;
-(id)_tintColorArchivingKey;
-(id)_backgroundTintColor;
-(id)_selectedSegmentVibrancyEffect;
-(void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setAnimatingOutDynamicShdaow:(BOOL)arg1 ;
-(id)_viewForLoweringBaselineLayoutAttribute:(int)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_sendValueChanged;
-(void)_updateSelectionIndicator;
-(void)_axLongPressHandler:(id)arg1 ;
-(void)selectSegment:(int)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setAxLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)axLongPressGestureRecognizer;
-(void)_updateAxLongPressGestureRecognizer;
-(void)hoverOffSegment:(long long)arg1 ;
-(void)_commonSegmentedControlInit;
-(void)_setBackgroundTintColor:(id)arg1 ;
-(CGSize)_baselineOffsetsAtSize:(CGSize)arg1 ;
-(void)__initWithFrameCommonOperations;
-(id)_internalFocusSystem;
-(long long)selectedSegment;
-(id)_createAndAddSegmentAtIndex:(int)arg1 position:(unsigned)arg2 withInfo:(id)arg3 ;
-(void)_setSelectedSegmentIndex:(long long)arg1 notify:(BOOL)arg2 animate:(BOOL)arg3 ;
-(void)_setEnabled:(BOOL)arg1 forcePropagateToSegments:(BOOL)arg2 ;
-(void)setSelectedSegmentTintColor:(UIColor *)arg1 ;
-(void)_setSelectedSegmentVibrancyEffect:(id)arg1 ;
-(id)titleForSegment:(unsigned long long)arg1 ;
-(void)_setNeedsBackgroundAndContentViewUpdate;
-(void)_updateDynamicShadow:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setNeedsAppearanceUpdate;
-(void)_resetForAppearanceChange;
-(void)_updateDividerImageForSegmentAtIndex:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setControlSize:(int)arg1 andInvalidate:(BOOL)arg2 ;
-(void)_insertSegment:(int)arg1 withInfo:(id)arg2 animated:(BOOL)arg3 ;
-(void)setRemovedSegment:(UIView *)arg1 ;
-(long long)segmentIndexForActionIdentifier:(id)arg1 ;
-(void)_setAction:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(BOOL)_disableSlidingControl;
-(void)removeSegmentAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_setSelectedSegmentIndex:(long long)arg1 notify:(BOOL)arg2 ;
-(void)setSelectedSegment:(long long)arg1 ;
-(BOOL)_shouldSelectSegmentAtIndex:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 actions:(id)arg2 ;
-(long long)selectedSegmentIndex;
@end

