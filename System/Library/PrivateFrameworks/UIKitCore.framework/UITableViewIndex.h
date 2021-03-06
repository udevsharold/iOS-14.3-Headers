/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIAccessibilityHUDGestureDelegate.h>

@class NSArray, UIFont, UIColor, UIAccessibilityHUDGestureManager, NSString;

@interface UITableViewIndex : UIControl <UIAccessibilityHUDGestureDelegate> {

	NSArray* _titles;
	UIFont* _font;
	long long _selectedSection;
	BOOL _pastTop;
	BOOL _pastBottom;
	CGSize _cachedSize;
	CGSize _cachedSizeToFit;
	UIColor* _indexColor;
	UIColor* _indexBackgroundColor;
	UIColor* _indexTrackingBackgroundColor;
	double _topPadding;
	double _bottomPadding;
	double _verticalTextHeightEstimate;
	NSArray* _entries;
	long long _idiom;
	UIAccessibilityHUDGestureManager* _axHUDGestureManager;
	UIEdgeInsets _drawingInsets;

}

@property (nonatomic,retain) NSArray * titles; 
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) UIEdgeInsets drawingInsets;                          //@synthesize drawingInsets=_drawingInsets - In the implementation block
@property (nonatomic,retain) UIColor * indexColor; 
@property (nonatomic,retain) UIColor * indexBackgroundColor; 
@property (nonatomic,retain) UIColor * indexTrackingBackgroundColor; 
@property (nonatomic,readonly) long long selectedSection;                         //@synthesize selectedSection=_selectedSection - In the implementation block
@property (nonatomic,readonly) NSString * selectedSectionTitle; 
@property (nonatomic,readonly) BOOL pastTop;                                      //@synthesize pastTop=_pastTop - In the implementation block
@property (nonatomic,readonly) BOOL pastBottom;                                   //@synthesize pastBottom=_pastBottom - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)pastTop;
-(long long)selectedSection;
-(void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(CGPoint)arg2 ;
-(BOOL)canBecomeFocused;
-(void)_cacheAndMeasureTitles;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setIndexColor:(UIColor *)arg1 ;
-(double)_minLineSpacingForIdiom:(long long)arg1 ;
-(void)tintColorDidChange;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)setIndexBackgroundColor:(UIColor *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_displayTitles;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(UIEdgeInsets)drawingInsets;
-(id)_externalDotImage;
-(void)setDrawingInsets:(UIEdgeInsets)arg1 ;
-(BOOL)_updateSectionForTouch:(id)arg1 withEvent:(id)arg2 ;
-(UIColor *)indexTrackingBackgroundColor;
-(NSString *)selectedSectionTitle;
-(NSArray *)titles;
-(id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(CGPoint)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(long long)_indexForEntryAtPoint:(CGPoint)arg1 ;
-(UIColor *)indexColor;
-(UIColor *)indexBackgroundColor;
-(BOOL)_accessibilityHUDGestureManagerCancelsTouchesInView:(id)arg1 ;
-(BOOL)pastBottom;
-(id)_fontForIdiom:(long long)arg1 ;
-(void)_setupAXHUDGestureIfNecessary;
-(void)_largeContentViewerEnabledStatusDidChange:(id)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(id)_dotImage;
-(CGRect)_effectiveBounds;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2 ;
-(void)setIndexTrackingBackgroundColor:(UIColor *)arg1 ;
-(long long)_idiom;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)_setIdiom:(long long)arg1 ;
-(void)setTitles:(NSArray *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)maximumNumberOfTitlesWithoutTruncationForHeight:(double)arg1 ;
-(CGRect)_visibleBoundsForRect:(CGRect)arg1 stride:(double*)arg2 ;
@end

