/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBFolderView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBFolderBackgroundViewDelegate.h>
#import <UIKit/UIScribbleInteractionDelegate.h>

@class SBFloatyFolderBackgroundClipView, NSMutableArray, NSMapTable, UITapGestureRecognizer, UIPinchGestureRecognizer, UILongPressGestureRecognizer, SBHFolderSettings, UIScribbleInteraction, NSString;

@interface SBFloatyFolderView : SBFolderView <UIGestureRecognizerDelegate, PTSettingsKeyObserver, SBFolderBackgroundViewDelegate, UIScribbleInteractionDelegate> {

	SBFloatyFolderBackgroundClipView* _scrollClipView;
	NSMutableArray* _pageBackgroundViews;
	NSMapTable* _pageBackgroundViewsForIconListViews;
	long long _scalingViewPageIndex;
	UITapGestureRecognizer* _tapGesture;
	UIPinchGestureRecognizer* _pinchGesture;
	UILongPressGestureRecognizer* _longPressGesture;
	SBHFolderSettings* _folderSettings;
	BOOL _displayingMultipleIconLists;
	BOOL _displaysMultipleIconListsInLandscapeOrientation;
	BOOL _convertingIconListStyle;
	BOOL _animatingRotation;
	unsigned long long _backgroundEffect;
	UIScribbleInteraction* _titleScribbleInteraction;

}

@property (nonatomic,readonly) BOOL displaysMultipleIconListsInLandscapeOrientation;                             //@synthesize displaysMultipleIconListsInLandscapeOrientation=_displaysMultipleIconListsInLandscapeOrientation - In the implementation block
@property (assign,getter=isDisplayingMultipleIconLists,nonatomic) BOOL displayingMultipleIconLists;              //@synthesize displayingMultipleIconLists=_displayingMultipleIconLists - In the implementation block
@property (assign,getter=isConvertingIconListStyle,nonatomic) BOOL convertingIconListStyle;                      //@synthesize convertingIconListStyle=_convertingIconListStyle - In the implementation block
@property (assign,getter=isAnimatingRotation,nonatomic) BOOL animatingRotation;                                  //@synthesize animatingRotation=_animatingRotation - In the implementation block
@property (nonatomic,retain) UIScribbleInteraction * titleScribbleInteraction;                                   //@synthesize titleScribbleInteraction=_titleScribbleInteraction - In the implementation block
@property (nonatomic,readonly) double cornerRadius; 
@property (assign,nonatomic) unsigned long long backgroundEffect;                                                //@synthesize backgroundEffect=_backgroundEffect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)countOfAdditionalPagesToKeepVisibleInOneDirection;
+(Class)_scrollViewClass;
+(double)defaultCornerRadius;
+(id)defaultIconLocation;
-(BOOL)_showsTitle;
-(void)_updateScrollingState:(BOOL)arg1 ;
-(void)_convertToSingleIconListAnimated:(BOOL)arg1 ;
-(double)scrollableWidthForVisibleColumnRange;
-(double)minimumVisibleScrollOffset;
-(id)accessibilityTintColorForBackgroundView:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_handlePinchGesture:(id)arg1 ;
-(CGPoint)visibleFolderRelativeImageCenterForIcon:(id)arg1 ;
-(id)floatyFolderConfiguration;
-(void)transitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)returnScalingView;
-(void)setDisplayingMultipleIconLists:(BOOL)arg1 ;
-(BOOL)_tapToCloseGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setLegibilitySettings:(id)arg1 ;
-(double)_rubberBandIntervalForOverscroll;
-(id)iconListViewAtPoint:(CGPoint)arg1 ;
-(CGRect)_frameForScalingView;
-(BOOL)_shouldManageScrolledHiddenClippedIconView;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setBackgroundAlpha:(double)arg1 ;
-(void)enumeratePageBackgroundViewsUsingBlock:(/*^block*/id)arg1 ;
-(void)_setScrollViewNeedsToClipCorners:(BOOL)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)_configureGestures;
-(BOOL)isAnimatingRotation;
-(void)_layoutSubviews;
-(id)_newPageBackgroundView;
-(double)cornerRadius;
-(void)_currentPageIndexDidChange;
-(BOOL)isDisplayingMultipleIconLists;
-(void)setConvertingIconListStyle:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(CGPoint)_scrollView:(id)arg1 adjustedOffsetForOffset:(CGPoint)arg2 translation:(CGPoint)arg3 startPoint:(CGPoint)arg4 locationInView:(CGPoint)arg5 horizontalVelocity:(inout double*)arg6 verticalVelocity:(inout double*)arg7 ;
-(unsigned long long)backgroundEffect;
-(void)_handleLongPressGesture:(id)arg1 ;
-(void)_convertToMultipleIconListsAnimated:(BOOL)arg1 ;
-(BOOL)_shouldConvertToMultipleIconListsInLandscapeOrientation;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(CGRect)_pageBackgroundFrameForPageRect:(CGRect)arg1 ;
-(void)accessibilityReduceTransparencyDidChange:(id)arg1 ;
-(void)setTitleScribbleInteraction:(UIScribbleInteraction *)arg1 ;
-(void)_updateScalingViewLocation;
-(void)setAnimatingRotation:(BOOL)arg1 ;
-(void)dealloc;
-(CGRect)_iconListFrameForPageRect:(CGRect)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_handleOutsideTap:(id)arg1 ;
-(BOOL)isConvertingIconListStyle;
-(BOOL)scribbleInteraction:(id)arg1 shouldBeginAtLocation:(CGPoint)arg2 ;
-(void)fadeContentForMagnificationFraction:(double)arg1 ;
-(void)_didAddIconListView:(id)arg1 ;
-(id)borrowScalingView;
-(void)_updateScalingViewFrame;
-(void)_didRemoveIconListView:(id)arg1 ;
-(id)legibilitySettingsForIconListViews;
-(BOOL)locationCountsAsInsideFolder:(CGPoint)arg1 ;
-(void)willTransitionAnimated:(BOOL)arg1 withSettings:(id)arg2 ;
-(void)didTransitionAnimated:(BOOL)arg1 ;
-(void)updateAccessibilityTintColors;
-(long long)iconVisibilityHandling;
-(void)fadeContentForMinificationFraction:(double)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_updateIconListContainment:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(double)_titleFontSize;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setBackgroundEffect:(unsigned long long)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_orientationDidChange:(long long)arg1 ;
-(UIScribbleInteraction *)titleScribbleInteraction;
-(BOOL)displaysMultipleIconListsInLandscapeOrientation;
@end

