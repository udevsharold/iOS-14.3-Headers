/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIAccessibilityHUDGestureDelegate.h>

@protocol UIIndexBarViewDelegate, UIIndexBarVisualStyle;
@class UIColor, NSArray, UISelectionFeedbackGenerator, UIAccessibilityHUDGestureManager, NSString;

@interface UIIndexBarView : UIControl <UIAccessibilityHUDGestureDelegate> {

	UIColor* _indexColor;
	NSArray* _entries;
	id<UIIndexBarViewDelegate> _delegate;
	UIColor* _trackingBackgroundColor;
	long long _highlightStyle;
	double _highlightedIndex;
	double _deflection;
	double _cachedDisplayHighlightedIndex;
	UIColor* _nonTrackingBackgroundColor;
	UISelectionFeedbackGenerator* _selectionFeedbackGenerator;
	UIAccessibilityHUDGestureManager* _axHUDGestureManager;
	id<UIIndexBarVisualStyle> _visualStyle;
	NSArray* _displayEntries;

}

@property (assign,nonatomic) double cachedDisplayHighlightedIndex;                                   //@synthesize cachedDisplayHighlightedIndex=_cachedDisplayHighlightedIndex - In the implementation block
@property (nonatomic,copy) UIColor * nonTrackingBackgroundColor;                                     //@synthesize nonTrackingBackgroundColor=_nonTrackingBackgroundColor - In the implementation block
@property (nonatomic,retain) UISelectionFeedbackGenerator * selectionFeedbackGenerator;              //@synthesize selectionFeedbackGenerator=_selectionFeedbackGenerator - In the implementation block
@property (nonatomic,retain) UIAccessibilityHUDGestureManager * axHUDGestureManager;                 //@synthesize axHUDGestureManager=_axHUDGestureManager - In the implementation block
@property (nonatomic,retain) id<UIIndexBarVisualStyle> visualStyle;                                  //@synthesize visualStyle=_visualStyle - In the implementation block
@property (nonatomic,retain) NSArray * displayEntries;                                               //@synthesize displayEntries=_displayEntries - In the implementation block
@property (nonatomic,readonly) double displayHighlightedIndex; 
@property (nonatomic,copy) NSArray * entries;                                                        //@synthesize entries=_entries - In the implementation block
@property (assign,nonatomic,__weak) id<UIIndexBarViewDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) UIColor * indexColor;                                                     //@synthesize indexColor=_indexColor - In the implementation block
@property (nonatomic,copy) UIColor * trackingBackgroundColor;                                        //@synthesize trackingBackgroundColor=_trackingBackgroundColor - In the implementation block
@property (assign,nonatomic) long long highlightStyle;                                               //@synthesize highlightStyle=_highlightStyle - In the implementation block
@property (assign,nonatomic) double highlightedIndex;                                                //@synthesize highlightedIndex=_highlightedIndex - In the implementation block
@property (assign,nonatomic) double deflection;                                                      //@synthesize deflection=_deflection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVisualStyle:(id<UIIndexBarVisualStyle>)arg1 ;
-(void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(CGPoint)arg2 ;
-(void)_updateBackgroundColor;
-(void)setBackgroundColor:(id)arg1 ;
-(id<UIIndexBarVisualStyle>)visualStyle;
-(BOOL)canBecomeFocused;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setIndexColor:(UIColor *)arg1 ;
-(void)tintColorDidChange;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setEntries:(NSArray *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSArray *)entries;
-(void)resetDeflection:(BOOL)arg1 ;
-(BOOL)_canDrawContent;
-(void)setSelectionFeedbackGenerator:(UISelectionFeedbackGenerator *)arg1 ;
-(void)setNonTrackingBackgroundColor:(UIColor *)arg1 ;
-(id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(CGPoint)arg2 ;
-(UIColor *)nonTrackingBackgroundColor;
-(BOOL)_selectEntry:(id)arg1 atIndex:(long long)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(UIColor *)indexColor;
-(void)layoutSubviews;
-(BOOL)_accessibilityHUDGestureManagerCancelsTouchesInView:(id)arg1 ;
-(void)_setupAXHUDGestureIfNecessary;
-(void)_largeContentViewerEnabledStatusDidChange:(id)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)setDelegate:(id<UIIndexBarViewDelegate>)arg1 ;
-(UISelectionFeedbackGenerator *)selectionFeedbackGenerator;
-(double)deflection;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(long long)highlightStyle;
-(void)setFrame:(CGRect)arg1 ;
-(NSArray *)displayEntries;
-(void)setHighlightedIndex:(double)arg1 ;
-(void)_updateDisplayEntries;
-(void)setDisplayEntries:(NSArray *)arg1 ;
-(void)_userInteractionStarted;
-(void)_userInteractionStopped;
-(void)setDeflection:(double)arg1 ;
-(BOOL)_defaultCanBecomeFocused;
-(double)displayHighlightedIndex;
-(void)setTrackingBackgroundColor:(UIColor *)arg1 ;
-(void)setHighlightStyle:(long long)arg1 ;
-(BOOL)_didSelectEntry:(id)arg1 atIndex:(long long)arg2 ;
-(UIColor *)trackingBackgroundColor;
-(double)highlightedIndex;
-(double)cachedDisplayHighlightedIndex;
-(void)setCachedDisplayHighlightedIndex:(double)arg1 ;
-(UIAccessibilityHUDGestureManager *)axHUDGestureManager;
-(void)setAxHUDGestureManager:(UIAccessibilityHUDGestureManager *)arg1 ;
-(id)backgroundColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<UIIndexBarViewDelegate>)delegate;
@end

