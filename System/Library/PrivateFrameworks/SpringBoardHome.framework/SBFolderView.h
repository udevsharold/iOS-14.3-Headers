/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBIconListPageControlDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/SBIconListLayoutDelegate.h>
#import <libobjc.A.dylib/SBIconScrollViewDelegate.h>
#import <libobjc.A.dylib/SBFolderObserver.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBIconListViewDragDelegate.h>

@protocol SBFolderViewDelegate, SBIconListLayoutProvider, SBIconViewProviding;
@class NSMutableArray, NSMutableSet, SBIconListPageControl, SBIconScrollView, SBFolderTitleTextField, UIView, SBIconView, SBFolder, _UILegibilitySettings, SBFolderIconImageCache, SBHIconImageCache, SBIconPageIndicatorImageSetCache, UIPanGestureRecognizer, NSArray, NSString, UIScrollView, SBIconListView, SBIconListModel;

@interface SBFolderView : UIView <SBIconListPageControlDelegate, UITextFieldDelegate, SBIconListLayoutDelegate, SBIconScrollViewDelegate, SBFolderObserver, BSDescriptionProviding, SBIconListViewDragDelegate> {

	NSMutableArray* _iconListViews;
	NSMutableSet* _scrollingDisabledReasons;
	NSMutableSet* _pageControlDisabledReasons;
	SBIconListPageControl* _pageControl;
	SBIconScrollView* _scrollView;
	SBFolderTitleTextField* _titleTextField;
	NSMutableSet* _scrollViewIsScrollingOverrides;
	NSMutableSet* _parallaxDisabledReasons;
	UIView* _scalingView;
	SBVisibleColumnRange _visibleColumnRange;
	SBFolderPredictedVisibleColumn _predictedVisibleColumn;
	BOOL _isScalingViewBorrowed;
	BOOL _wasScrolling;
	NSMutableArray* _scrollFrames;
	unsigned long long _scrollFrameCount;
	double _scrollStartContentOffset;
	long long _scrollMinimumVisiblePageIndex;
	long long _scrollMaximumVisiblePageIndex;
	unsigned long long _ignoreScrollingDidEndNotificationsCount;
	NSMutableArray* _scrollCompletionBlocks;
	NSMutableArray* _rotationCompletionBlocks;
	double _headerHeight;
	SBIconView* _cachedHiddenIconView;
	BOOL _isEditing;
	BOOL _rotating;
	BOOL _occluded;
	BOOL _hasEverBeenInAWindow;
	BOOL _suppressesEditingStateForListViews;
	BOOL _automaticallyCreatesIconListViews;
	BOOL _includesHiddenIconListPages;
	long long _currentPageIndex;
	id<SBFolderViewDelegate> _delegate;
	SBFolder* _folder;
	id<SBIconListLayoutProvider> _listLayoutProvider;
	long long _orientation;
	unsigned long long _allowedOrientations;
	id<SBIconViewProviding> _iconViewProvider;
	unsigned long long _userInterfaceLayoutDirectionHandling;
	UIView* _headerView;
	_UILegibilitySettings* _legibilitySettings;
	SBFolderIconImageCache* _folderIconImageCache;
	SBHIconImageCache* _iconImageCache;
	SBIconPageIndicatorImageSetCache* _iconPageIndicatorImageSetCache;
	UIPanGestureRecognizer* _scrollingDisabledGestureRecognizer;

}

@property (assign,getter=isRotating,nonatomic) BOOL rotating;                                                     //@synthesize rotating=_rotating - In the implementation block
@property (assign,nonatomic) BOOL hasEverBeenInAWindow;                                                           //@synthesize hasEverBeenInAWindow=_hasEverBeenInAWindow - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * scrollingDisabledGestureRecognizer;                         //@synthesize scrollingDisabledGestureRecognizer=_scrollingDisabledGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIView * scalingView; 
@property (getter=isScalingViewBorrowed,nonatomic,readonly) BOOL scalingViewBorrowed;                             //@synthesize isScalingViewBorrowed=_isScalingViewBorrowed - In the implementation block
@property (assign,nonatomic) long long orientation;                                                               //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) SBIconListPageControl * pageControl;                                                 //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettingsForIconListViews; 
@property (getter=isParallaxEnabled,nonatomic,readonly) BOOL parallaxEnabled; 
@property (nonatomic,readonly) double pageControlAreaHeight; 
@property (nonatomic,readonly) long long minimumPageIndex; 
@property (nonatomic,readonly) long long maximumPageIndex; 
@property (nonatomic,readonly) long long defaultPageIndex; 
@property (nonatomic,readonly) long long firstIconPageIndex; 
@property (nonatomic,readonly) long long lastIconPageIndex; 
@property (nonatomic,readonly) unsigned long long pageCount; 
@property (nonatomic,readonly) unsigned long long countOfAdditionalPagesToKeepVisibleInOneDirection; 
@property (nonatomic,readonly) double additionalScrollWidthToKeepVisibleInOneDirection; 
@property (getter=_titleTextField,nonatomic,readonly) SBFolderTitleTextField * titleTextField; 
@property (nonatomic,readonly) long long iconVisibilityHandling; 
@property (nonatomic,readonly) BOOL updatesPredictedVisibleColumnWhileScrolling; 
@property (nonatomic,readonly) double scrollableWidthForVisibleColumnRange; 
@property (nonatomic,readonly) double minimumVisibleScrollOffset; 
@property (nonatomic,readonly) double maximumVisibleScrollOffset; 
@property (getter=isRTL,nonatomic,readonly) BOOL RTL; 
@property (assign,nonatomic) BOOL suppressesEditingStateForListViews;                                             //@synthesize suppressesEditingStateForListViews=_suppressesEditingStateForListViews - In the implementation block
@property (assign,nonatomic) BOOL automaticallyCreatesIconListViews;                                              //@synthesize automaticallyCreatesIconListViews=_automaticallyCreatesIconListViews - In the implementation block
@property (assign,nonatomic) BOOL includesHiddenIconListPages;                                                    //@synthesize includesHiddenIconListPages=_includesHiddenIconListPages - In the implementation block
@property (assign,nonatomic,__weak) id<SBFolderViewDelegate> delegate;                                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SBFolder * folder;                                                                   //@synthesize folder=_folder - In the implementation block
@property (nonatomic,readonly) id<SBIconListLayoutProvider> listLayoutProvider;                                   //@synthesize listLayoutProvider=_listLayoutProvider - In the implementation block
@property (getter=isEditing,nonatomic,readonly) BOOL editing;                                                     //@synthesize isEditing=_isEditing - In the implementation block
@property (getter=isScrolling,nonatomic,readonly) BOOL scrolling; 
@property (nonatomic,readonly) unsigned long long allowedOrientations;                                            //@synthesize allowedOrientations=_allowedOrientations - In the implementation block
@property (nonatomic,readonly) long long currentPageIndex;                                                        //@synthesize currentPageIndex=_currentPageIndex - In the implementation block
@property (nonatomic,copy,readonly) NSArray * iconListViews; 
@property (nonatomic,readonly) unsigned long long iconListViewCount; 
@property (nonatomic,__weak,readonly) id<SBIconViewProviding> iconViewProvider;                                   //@synthesize iconViewProvider=_iconViewProvider - In the implementation block
@property (nonatomic,readonly) unsigned long long userInterfaceLayoutDirectionHandling;                           //@synthesize userInterfaceLayoutDirectionHandling=_userInterfaceLayoutDirectionHandling - In the implementation block
@property (nonatomic,readonly) long long userInterfaceLayoutDirection; 
@property (nonatomic,copy,readonly) NSString * iconLocation; 
@property (nonatomic,readonly) UIView * headerView;                                                               //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) double headerHeight; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                          //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                                         //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) SBIconListView * currentIconListView; 
@property (nonatomic,readonly) SBIconListModel * currentIconListModel; 
@property (assign,getter=isPageControlHidden,nonatomic) BOOL pageControlHidden; 
@property (assign,nonatomic) double pageControlAlpha; 
@property (assign,getter=isOccluded,nonatomic) BOOL occluded;                                                     //@synthesize occluded=_occluded - In the implementation block
@property (nonatomic,retain) SBFolderIconImageCache * folderIconImageCache;                                       //@synthesize folderIconImageCache=_folderIconImageCache - In the implementation block
@property (nonatomic,retain) SBHIconImageCache * iconImageCache;                                                  //@synthesize iconImageCache=_iconImageCache - In the implementation block
@property (nonatomic,retain) SBIconPageIndicatorImageSetCache * iconPageIndicatorImageSetCache;                   //@synthesize iconPageIndicatorImageSetCache=_iconPageIndicatorImageSetCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)countOfAdditionalPagesToKeepVisibleInOneDirection;
+(Class)_scrollViewClass;
+(unsigned long long)_pageOffsetForOffset:(double)arg1 behavior:(long long)arg2 pageWidth:(double)arg3 pageSpacing:(double)arg4 pageCount:(unsigned long long)arg5 userInterfaceLayoutDirection:(long long)arg6 fractionOfDistanceThroughPage:(double*)arg7 ;
+(long long)_pageIndexForOffset:(double)arg1 minimumPage:(long long)arg2 maximumPage:(long long)arg3 pageCount:(unsigned long long)arg4 pageWidth:(double)arg5 pageSpacing:(double)arg6 userInterfaceLayoutDirection:(long long)arg7 behavior:(long long)arg8 fractionOfDistanceThroughPage:(double*)arg9 ;
+(id)defaultIconLocation;
+(Class)defaultIconListViewClass;
-(CGSize)_scrollViewContentSize;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)setNeedsLayout;
-(BOOL)hasEverBeenInAWindow;
-(void)setAutomaticallyCreatesIconListViews:(BOOL)arg1 ;
-(void)enumerateIconListViewsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)_showsTitle;
-(id)iconListViewWithList:(id)arg1 ;
-(BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id<SBIconListLayoutProvider>)listLayoutProvider;
-(CGRect)scalingViewFrame;
-(long long)_pageIndexForOffset:(double)arg1 behavior:(long long)arg2 fractionOfDistanceThroughPage:(double*)arg3 ;
-(id)iconListViewForPageIndex:(long long)arg1 ;
-(void)enumerateIconListViewsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)iconVisibilityDescription;
-(void)_setFolderName:(id)arg1 ;
-(void)_updateScrollingState:(BOOL)arg1 ;
-(id)iconListViewForDrag:(id)arg1 ;
-(unsigned long long)indexOfIconListView:(id)arg1 ;
-(BOOL)canChangeCurrentPageIndexToIndex:(unsigned long long)arg1 ;
-(void)animateScrollToDefaultPageWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)iconListViewAtScrollPoint:(CGPoint)arg1 ;
-(void)_checkIfScrollStateChanged;
-(void)updateIconListIndexAndVisibility;
-(double)scrollableWidthForVisibleColumnRange;
-(double)minimumVisibleScrollOffset;
-(void)_markListViewsAsPurged;
-(SBHIconImageCache *)iconImageCache;
-(void)updateIconListIndexAndVisibility:(BOOL)arg1 ;
-(void)_updateEditingStateAnimated:(BOOL)arg1 ;
-(void)_removeIconListView:(id)arg1 purge:(BOOL)arg2 ;
-(void)setFolderIconImageCache:(SBFolderIconImageCache *)arg1 ;
-(SBIconPageIndicatorImageSetCache *)iconPageIndicatorImageSetCache;
-(void)_resetIconListViews;
-(long long)pageIndexForIconListModel:(id)arg1 ;
-(double)_pageSpacing;
-(void)_updateIconListViews:(long long)arg1 ;
-(void)scrollViewDidEndScrolling:(id)arg1 ;
-(void)_enableUserInteractionAfterSignificantAnimation;
-(UIScrollView *)scrollView;
-(BOOL)suppressesEditingStateForListViews;
-(void)enumerateScrollViewPageViewsUsingBlock:(/*^block*/id)arg1 ;
-(void)_updateScrollingIfNeeded;
-(void)_backgroundContrastDidChange:(id)arg1 ;
-(void)transitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_updateTitleLegibilitySettings;
-(void)returnScalingView;
-(void)removeScrollViewIsScrollingOverrideReason:(id)arg1 ;
-(BOOL)iconScrollView:(id)arg1 shouldSetContentOffset:(CGPoint*)arg2 animated:(BOOL)arg3 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setIconPageIndicatorImageSetCache:(SBIconPageIndicatorImageSetCache *)arg1 ;
-(id)allIconListViews;
-(void)_updateParallaxSettings;
-(double)headerHeight;
-(double)pageControlAreaHeight;
-(id)iconListView:(id)arg1 customSpringAnimationBehaviorForDroppingItem:(id)arg2 ;
-(id)iconListViewAtPoint:(CGPoint)arg1 ;
-(id)iconListViewForTouch:(id)arg1 ;
-(void)setFolder:(SBFolder *)arg1 ;
-(unsigned long long)userInterfaceLayoutDirectionHandling;
-(unsigned long long)countOfAdditionalPagesToKeepVisibleInOneDirection;
-(CGRect)_frameForScalingView;
-(CGPoint)_scrollOffsetForContentAtPageIndex:(long long)arg1 ;
-(BOOL)_shouldManageScrolledHiddenClippedIconView;
-(void)layoutIconLists:(double)arg1 animationType:(long long)arg2 forceRelayout:(BOOL)arg3 ;
-(void)iconListView:(id)arg1 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg2 ;
-(double)_pageWidth;
-(void)_setParallaxDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(SBHFloatRange)_scrollRangeForPageAtIndex:(long long)arg1 pageWidth:(double)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)iconListModelIndexForPageIndex:(long long)arg1 ;
-(long long)currentPageIndex;
-(unsigned long long)_trailingCustomPageCount;
-(void)folder:(id)arg1 didAddList:(id)arg2 ;
-(void)setRotating:(BOOL)arg1 ;
-(void)_layoutSubviews;
-(void)cleanUpAfterTransition;
-(void)cancelScrolling;
-(void)updateVisibleColumnRangeWithTotalLists:(unsigned long long)arg1 columnsPerList:(unsigned long long)arg2 iconVisibilityHandling:(long long)arg3 ;
-(void)_currentPageIndexDidChange;
-(long long)_pageCountForPageControl;
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGPoint)_scrollOffsetForPageAtIndex:(long long)arg1 pageWidth:(double)arg2 ;
-(void)_setPageControlDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(SBVisibleColumnRange)visibleColumnRangeWithTotalLists:(unsigned long long)arg1 columnsPerList:(unsigned long long)arg2 iconVisibilityHandling:(long long)arg3 predictedVisibleColumn:(SBFolderPredictedVisibleColumn*)arg4 ;
-(void)folder:(id)arg1 didMoveList:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4 ;
-(unsigned long long)typeForPage:(long long)arg1 ;
-(CGSize)_iconListViewSize;
-(void)prepareForTransition;
-(void)folderWillChange:(id)arg1 ;
-(id)_legibilitySettingsWithPrimaryColor:(id)arg1 ;
-(id)_createIconListViewForList:(id)arg1 ;
-(id)_interactionTintColor;
-(void)_updateHiddenIconViewForScrolling:(BOOL)arg1 ;
-(void)updateVisibleColumnRange;
-(void)minimumHomeScreenScaleDidChange;
-(long long)defaultPageIndex;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_setCurrentPageIndex:(long long)arg1 deferringPageControlUpdate:(BOOL)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(double)_offsetToCenterPageControlInSpaceForPageControl;
-(id)_findHiddenIconView;
-(void)_willScrollToPageIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(CGPoint)_scrollOffsetForPageAtIndex:(long long)arg1 ;
-(BOOL)animatesRotationForAllVisibleIconListViews;
-(long long)maximumPageIndex;
-(UIView *)headerView;
-(id)firstIconListView;
-(void)setPageControlAlpha:(double)arg1 ;
-(void)_ignoreScrollingDidEndNotifications;
-(void)dealloc;
-(id)additionalIconListViews;
-(id)iconListView:(id)arg1 previewForDroppingIconDragItem:(id)arg2 proposedPreview:(id)arg3 ;
-(void)_setCurrentPageIndex:(long long)arg1 ;
-(BOOL)_isValidIconListViewIndex:(long long)arg1 ;
-(double)maximumVisibleScrollOffset;
-(BOOL)includesHiddenIconListPages;
-(unsigned)scrollingDirection;
-(BOOL)isParallaxEnabled;
-(void)setSuppressesEditingStateForListViews:(BOOL)arg1 ;
-(void)setContentAlpha:(double)arg1 ;
-(BOOL)automaticallyCreatesIconListViews;
-(BOOL)_isValidPageIndex:(long long)arg1 ;
-(CGRect)_iconListFrameForPageRect:(CGRect)arg1 atIndex:(unsigned long long)arg2 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)clearVisibleColumnRange;
-(BOOL)_hasLeadingCustomPages;
-(void)tearDownListViews;
-(void)_updatePageControlToIndex:(long long)arg1 ;
-(void)fadeContentForMagnificationFraction:(double)arg1 ;
-(void)scrollingDisabledGestureDidUpdate:(id)arg1 ;
-(id)iconListViewDisplayingIconView:(id)arg1 ;
-(void)iconListView:(id)arg1 willUseIconView:(id)arg2 forDroppingIconDragItem:(id)arg3 ;
-(unsigned long long)allowedOrientations;
-(void)resetContentOffsetToCurrentPageAnimated:(BOOL)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(NSString *)iconLocation;
-(BOOL)isScrolling;
-(void)_didAddIconListView:(id)arg1 ;
-(BOOL)hasIconPages;
-(void)setIconImageCache:(SBHIconImageCache *)arg1 ;
-(id)borrowScalingView;
-(SBIconListPageControl *)pageControl;
-(unsigned long long)iconPageCount;
-(void)_precacheIconImages;
-(id)accessibilityLegibilitySettingsForRect:(CGRect)arg1 tintStyle:(unsigned long long)arg2 ;
-(long long)pageIndexForIconListViewIndex:(unsigned long long)arg1 ;
-(BOOL)isPageTypeIcon:(long long)arg1 ;
-(void)_updateScalingViewFrame;
-(id)iconListView:(id)arg1 iconDropSessionDidUpdate:(id)arg2 ;
-(CGPoint)_scrollOffsetForFirstListView;
-(BOOL)_hasTrailingCustomPages;
-(SBIconListView *)currentIconListView;
-(void)setPageControlHidden:(BOOL)arg1 ;
-(void)setPageControl:(SBIconListPageControl *)arg1 ;
-(void)_didRemoveIconListView:(id)arg1 ;
-(void)iconListView:(id)arg1 iconDropSessionDidExit:(id)arg2 ;
-(SBFolderIconImageCache *)folderIconImageCache;
-(BOOL)isEditing;
-(void)_setScrollViewContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setOrientation:(long long)arg1 ;
-(BOOL)_shouldIgnoreScrollingDidEndNotifications;
-(void)_updateIconListFrames;
-(BOOL)isRTL;
-(_UILegibilitySettings *)legibilitySettingsForIconListViews;
-(void)_noteFolderListsDidChange:(unsigned long long)arg1 ;
-(BOOL)locationCountsAsInsideFolder:(CGPoint)arg1 ;
-(id)iconLocationForList:(id)arg1 ;
-(void)getLeadingVisiblePageIndex:(long long*)arg1 trailingVisiblePageIndex:(long long*)arg2 ;
-(void)willTransitionAnimated:(BOOL)arg1 withSettings:(id)arg2 ;
-(unsigned long long)iconListViewIndexForIconListModelIndex:(unsigned long long)arg1 ;
-(void)didTransitionAnimated:(BOOL)arg1 ;
-(void)updateAccessibilityTintColors;
-(long long)userInterfaceLayoutDirection;
-(long long)iconVisibilityHandling;
-(void)iconListView:(id)arg1 performIconDrop:(id)arg2 ;
-(id)accessibilityTintColorForRect:(CGRect)arg1 tintStyle:(unsigned long long)arg2 ;
-(NSArray *)iconListViews;
-(unsigned)userInterfaceLayoutDirectionAwareScrollingDirection;
-(void)setIncludesHiddenIconListPages:(BOOL)arg1 ;
-(void)_currentPageIndexDidChangeFromPageIndex:(long long)arg1 ;
-(double)additionalScrollWidthToKeepVisibleInOneDirection;
-(id)succinctDescription;
-(SBHFloatRange)_scrollRangeForContentAtPageIndex:(long long)arg1 pageWidth:(double)arg2 ;
-(long long)pageIndexForIconListModelIndex:(unsigned long long)arg1 ;
-(void)_updateIconListLegibilitySettings;
-(id)iconListView:(id)arg1 animatorForRemovingIcons:(id)arg2 proposedAnimator:(id)arg3 ;
-(void)iconScrollViewWillCancelTouchTracking:(id)arg1 ;
-(void)validateVisibleColumnRange;
-(BOOL)isPageControlHidden;
-(void)setScrollingDisabledGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(BOOL)iconListView:(id)arg1 canHandleIconDropSession:(id)arg2 ;
-(void)setOccluded:(BOOL)arg1 ;
-(void)fadeContentForMinificationFraction:(double)arg1 ;
-(void)iconListView:(id)arg1 iconDropSessionDidEnter:(id)arg2 ;
-(SBFolder *)folder;
-(void)_addScrollingCompletionBlock:(/*^block*/id)arg1 ;
-(Class)listViewClass;
-(BOOL)_useParallaxOnPageControl;
-(unsigned long long)iconListViewCount;
-(long long)_pageIndexForOffset:(double)arg1 ;
-(void)folderDidChange;
-(BOOL)doesPageContainIconListView:(long long)arg1 ;
-(void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3 ;
-(void)iconListView:(id)arg1 iconDropSession:(id)arg2 didPauseAtLocation:(CGPoint)arg3 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)_addIconListView:(id)arg1 ;
-(id)iconListViewAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)pageCount;
-(void)willMoveToWindow:(id)arg1 ;
-(id)_titleTextField;
-(long long)minimumPageIndex;
-(BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_removeIconListView:(id)arg1 ;
-(void)_updateIconListContainment:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)updatesPredictedVisibleColumnWhileScrolling;
-(void)_disableUserInteractionBeforeSignificantAnimation;
-(void)_updatePageControlCurrentPage;
-(void)noteUserIsInteractingWithIcons;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)_configureIconListView:(id)arg1 ;
-(void)_addIconListView:(id)arg1 atEnd:(BOOL)arg2 ;
-(CGRect)_frameForIconListAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)_leadingCustomPageCount;
-(id<SBIconViewProviding>)iconViewProvider;
-(void)addScrollViewIsScrollingOverrideReason:(id)arg1 ;
-(void)resetIconListViews;
-(CGSize)scrollView:(id)arg1 contentSizeForZoomScale:(double)arg2 withProposedSize:(CGSize)arg3 ;
-(double)pageControlAlpha;
-(double)_titleFontSize;
-(UIPanGestureRecognizer *)scrollingDisabledGestureRecognizer;
-(void)iconListView:(id)arg1 iconDragItem:(id)arg2 willAnimateDropWithAnimator:(id)arg3 ;
-(SBIconListModel *)currentIconListModel;
-(void)iconScrollViewDidCancelTouchTracking:(id)arg1 ;
-(SBHFloatRange)_scrollRangeForPageAtIndex:(long long)arg1 ;
-(BOOL)isRotating;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_updateIconListViewsWithCurrentPageIndex:(long long)arg1 currentIconListModel:(id)arg2 ;
-(void)_setScrollingDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(long long)orientation;
-(long long)closestIconPageIndexForPageIndex:(long long)arg1 ;
-(id)_newPageControl;
-(BOOL)iconScrollView:(id)arg1 shouldSetAutoscrollContentOffset:(CGPoint)arg2 ;
-(void)setHasEverBeenInAWindow:(BOOL)arg1 ;
-(void)_addIconListViewsForModels:(id)arg1 ;
-(void)prepareToOpen;
-(long long)lastIconPageIndex;
-(UIView *)scalingView;
-(id)iconListViewForIconListModelIndex:(unsigned long long)arg1 ;
-(unsigned long long)iconListViewIndexForPageIndex:(long long)arg1 ;
-(BOOL)isOccluded;
-(void)_updatePageControlNumberOfPages;
-(void)updateIconListViews;
-(id)lastIconListView;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)pageControl:(id)arg1 didMoveCurrentPageToPage:(long long)arg2 withScrubbing:(BOOL)arg3 ;
-(void)_handleClippingScrollViewDidScroll:(id)arg1 ;
-(void)_orientationDidChange:(long long)arg1 ;
-(NSString *)description;
-(BOOL)isScalingViewBorrowed;
-(void)_updateIconListViewsWithCurrentIconListModel:(id)arg1 ;
-(double)currentScrollOffset;
-(void)pageControlDidReceiveButtonTap:(id)arg1 ;
-(BOOL)isVisibleColumnRangeValid:(SBVisibleColumnRange)arg1 ;
-(void)_unignoreScrollingDidEndNotifications;
-(long long)firstIconPageIndex;
-(BOOL)iconListView:(id)arg1 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg2 onIconView:(id)arg3 ;
-(void)layoutSubviews;
-(id)succinctDescriptionBuilder;
-(void)didMoveToWindow;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)setDelegate:(id<SBFolderViewDelegate>)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id<SBFolderViewDelegate>)delegate;
@end

