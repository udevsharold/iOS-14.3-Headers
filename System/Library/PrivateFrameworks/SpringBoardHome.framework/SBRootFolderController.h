/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBFolderController.h>
#import <libobjc.A.dylib/SBFramewiseInteractiveTransitionAnimatorDelegate.h>
#import <libobjc.A.dylib/SBViewControllerTransitionContextDelegate.h>
#import <libobjc.A.dylib/SBRootFolderViewDelegate.h>
#import <libobjc.A.dylib/SBSearchGestureObserver.h>
#import <libobjc.A.dylib/SBHAddWidgetSheetViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBHWidgetSheetViewControllerPresenter.h>
#import <libobjc.A.dylib/SBHStackConfigurationViewControllerAppearanceDelegate.h>
#import <libobjc.A.dylib/SBHWidgetDragHandling.h>
#import <libobjc.A.dylib/SBRootFolderPageStateTransitioning.h>
#import <libobjc.A.dylib/SBHIconRootViewProviding.h>

@protocol SBHLegibility, SBHLibraryProvider, SBHSidebarProvider, SBRootFolderControllerAccessoryViewControllerDelegate, BSInvalidatable, SBRootFolderPageTransition;
@class SBViewControllerTransitionContext, SBFramewiseInteractiveTransitionAnimator, SBPercentPassthroughInteractiveTransition, NSHashTable, NSArray, SBHAddWidgetSheetViewController, UIViewController, SBSearchGesture, _SBRootFolderPageTransitionHandle, SBHRecentsDocumentExtensionProvider, CHSAvocadoDescriptorProvider, SBRootFolderView, SBRootFolder, NSSet, UIView, SBFParallaxSettings, NSString, _UILegibilitySettings, SBFolderIconImageCache, SBHIconImageCache;

@interface SBRootFolderController : SBFolderController <SBFramewiseInteractiveTransitionAnimatorDelegate, SBViewControllerTransitionContextDelegate, SBRootFolderViewDelegate, SBSearchGestureObserver, SBHAddWidgetSheetViewControllerDelegate, UIGestureRecognizerDelegate, SBHWidgetSheetViewControllerPresenter, SBHStackConfigurationViewControllerAppearanceDelegate, SBHWidgetDragHandling, SBRootFolderPageStateTransitioning, SBHIconRootViewProviding> {

	SBViewControllerTransitionContext* _currentTransitionContext;
	SBFramewiseInteractiveTransitionAnimator* _currentTransitionAnimator;
	SBPercentPassthroughInteractiveTransition* _currentTransitionInteractor;
	NSHashTable* _pageStateObservers;
	NSArray* _editingSuggestedWidgetItems;
	SBHAddWidgetSheetViewController* _addSheetViewController;
	BOOL _showsDoneButtonWhileEditing;
	BOOL _showsAddWidgetButtonWhileEditing;
	BOOL _suppressesExtraEditingButtons;
	BOOL _favoriteTodayViewVisible;
	BOOL _managesStatusBarWidth;
	long long _pageState;
	UIViewController* _pullDownSearchViewController;
	UIViewController*<SBHLegibility> _todayViewController;
	UIViewController*<SBHLibraryProvider> _trailingCustomViewController;
	UIViewController*<SBHSidebarProvider> _sidebarViewController;
	SBSearchGesture* _searchGesture;
	id<SBRootFolderControllerAccessoryViewControllerDelegate> _accessoryViewControllerDelegate;
	unsigned long long _presentationSource;
	double _effectiveSidebarVisibilityProgress;
	id<BSInvalidatable> _searchGestureIconViewTouchCancellationAssertion;
	_SBRootFolderPageTransitionHandle* _currentTransitionHandle;
	id<SBRootFolderPageTransition> _searchGestureTransition;
	id<SBRootFolderPageTransition> _implicitScrollTransition;
	SBHRecentsDocumentExtensionProvider* _recentsDocumentExtensionProvider;
	CHSAvocadoDescriptorProvider* _avocadoDescriptorProvider;

}

@property (assign,nonatomic) BOOL managesStatusBarWidth;                                                                                               //@synthesize managesStatusBarWidth=_managesStatusBarWidth - In the implementation block
@property (nonatomic,readonly) SBRootFolderView * rootFolderView; 
@property (nonatomic,retain) SBSearchGesture * searchGesture;                                                                                          //@synthesize searchGesture=_searchGesture - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> searchGestureIconViewTouchCancellationAssertion;                                                      //@synthesize searchGestureIconViewTouchCancellationAssertion=_searchGestureIconViewTouchCancellationAssertion - In the implementation block
@property (assign,nonatomic) long long pageState;                                                                                                      //@synthesize pageState=_pageState - In the implementation block
@property (nonatomic,retain) _SBRootFolderPageTransitionHandle * currentTransitionHandle;                                                              //@synthesize currentTransitionHandle=_currentTransitionHandle - In the implementation block
@property (nonatomic,retain) id<SBRootFolderPageTransition> searchGestureTransition;                                                                   //@synthesize searchGestureTransition=_searchGestureTransition - In the implementation block
@property (nonatomic,retain) id<SBRootFolderPageTransition> implicitScrollTransition;                                                                  //@synthesize implicitScrollTransition=_implicitScrollTransition - In the implementation block
@property (nonatomic,retain) SBHRecentsDocumentExtensionProvider * recentsDocumentExtensionProvider;                                                   //@synthesize recentsDocumentExtensionProvider=_recentsDocumentExtensionProvider - In the implementation block
@property (nonatomic,readonly) long long todayViewPageIndex; 
@property (nonatomic,readonly) long long favoriteTodayViewPageIndex; 
@property (nonatomic,readonly) long long sidebarPageIndex; 
@property (nonatomic,readonly) long long trailingCustomViewPageIndex; 
@property (nonatomic,readonly) CHSAvocadoDescriptorProvider * avocadoDescriptorProvider;                                                               //@synthesize avocadoDescriptorProvider=_avocadoDescriptorProvider - In the implementation block
@property (assign,nonatomic,__weak) id<SBRootFolderControllerDelegate> folderDelegate; 
@property (nonatomic,retain) SBRootFolder * folder; 
@property (assign,nonatomic) unsigned long long dockEdge; 
@property (nonatomic,readonly) double dockHeight; 
@property (getter=isDockExternal,nonatomic,readonly) BOOL dockExternal; 
@property (getter=isDockPinnedForRotation,nonatomic,readonly) BOOL dockPinnedForRotation; 
@property (nonatomic,copy,readonly) NSSet * nonDockPresentedIconLocations; 
@property (nonatomic,readonly) BOOL showsDoneButtonWhileEditing;                                                                                       //@synthesize showsDoneButtonWhileEditing=_showsDoneButtonWhileEditing - In the implementation block
@property (nonatomic,readonly) BOOL showsAddWidgetButtonWhileEditing;                                                                                  //@synthesize showsAddWidgetButtonWhileEditing=_showsAddWidgetButtonWhileEditing - In the implementation block
@property (assign,nonatomic) BOOL suppressesExtraEditingButtons;                                                                                       //@synthesize suppressesExtraEditingButtons=_suppressesExtraEditingButtons - In the implementation block
@property (nonatomic,readonly) UIViewController * pullDownSearchViewController;                                                                        //@synthesize pullDownSearchViewController=_pullDownSearchViewController - In the implementation block
@property (nonatomic,readonly) UIViewController*<SBHLegibility> todayViewController;                                                                   //@synthesize todayViewController=_todayViewController - In the implementation block
@property (nonatomic,readonly) UIViewController*<SBHLibraryProvider> trailingCustomViewController;                                                     //@synthesize trailingCustomViewController=_trailingCustomViewController - In the implementation block
@property (nonatomic,readonly) UIViewController*<SBHSidebarProvider> sidebarViewController;                                                            //@synthesize sidebarViewController=_sidebarViewController - In the implementation block
@property (nonatomic,readonly) double spotlightFirstIconRowOffset; 
@property (assign,nonatomic,__weak) id<SBRootFolderControllerAccessoryViewControllerDelegate> accessoryViewControllerDelegate;                         //@synthesize accessoryViewControllerDelegate=_accessoryViewControllerDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long presentationSource;                                                                                    //@synthesize presentationSource=_presentationSource - In the implementation block
@property (nonatomic,copy,readonly) NSArray * folderControllers; 
@property (assign,nonatomic) BOOL allowsAutoscrollToTodayView; 
@property (getter=isTodayViewVisible,nonatomic,readonly) BOOL todayViewVisible; 
@property (getter=isFavoriteTodayViewVisible,nonatomic,readonly) BOOL favoriteTodayViewVisible;                                                        //@synthesize favoriteTodayViewVisible=_favoriteTodayViewVisible - In the implementation block
@property (getter=isTodayViewTransitioning,nonatomic,readonly) BOOL todayViewTransitioning; 
@property (assign,getter=isTodayViewPageHidden,nonatomic) BOOL todayViewPageHidden; 
@property (getter=isPullDownSearchVisible,nonatomic,readonly) BOOL pullDownSearchVisible; 
@property (getter=isPullDownSearchVisibleOrTransitioningToVisible,nonatomic,readonly) BOOL pullDownSearchVisibleOrTransitioningToVisible; 
@property (getter=isPullDownSearchTransitioning,nonatomic,readonly) BOOL pullDownSearchTransitioning; 
@property (getter=isPullDownSearchVisibleOrTransitioning,nonatomic,readonly) BOOL pullDownSearchVisibleOrTransitioning; 
@property (getter=isOnTodayPage,nonatomic,readonly) BOOL todayPage; 
@property (getter=isTodayViewVisibleOrTransitionDestination,nonatomic,readonly) BOOL todayViewVisibleOrTransitionDestination; 
@property (getter=isTodayViewSearchVisible,nonatomic,readonly) BOOL todayViewSearchVisible; 
@property (getter=isTodayViewSearchTransitioning,nonatomic,readonly) BOOL todayViewSearchTransitioning; 
@property (getter=isTodayViewSearchVisibleOrTransitioning,nonatomic,readonly) BOOL todayViewSearchVisibleOrTransitioning; 
@property (getter=isAnySearchVisible,nonatomic,readonly) BOOL anySearchVisible; 
@property (getter=isAnySearchVisibleOrTransitioning,nonatomic,readonly) BOOL anySearchVisibleOrTransitioning; 
@property (nonatomic,readonly) UIView * searchableTodayWrapperView; 
@property (nonatomic,readonly) UIView * searchBackdropView; 
@property (assign,nonatomic) double sidebarVisibilityProgress; 
@property (assign,nonatomic) double effectiveSidebarVisibilityProgress;                                                                                //@synthesize effectiveSidebarVisibilityProgress=_effectiveSidebarVisibilityProgress - In the implementation block
@property (getter=isSidebarVisible,nonatomic,readonly) BOOL sidebarVisible; 
@property (getter=isSidebarEffectivelyVisible,nonatomic,readonly) BOOL sidebarEffectivelyVisible; 
@property (getter=isSidebarEffectivelyAtLeastHalfVisible,nonatomic,readonly) BOOL sidebarEffectivelyAtLeastHalfVisible; 
@property (assign,getter=isSidebarPinned,nonatomic) BOOL sidebarPinned; 
@property (getter=isSidebarVisibilityGestureActive,nonatomic,readonly) BOOL sidebarVisibilityGestureActive; 
@property (nonatomic,readonly) SBFParallaxSettings * parallaxSettings; 
@property (getter=isPageManagementUIVisible,nonatomic,readonly) BOOL pageManagementUIVisible; 
@property (assign,getter=isOccludedByOverlay,nonatomic) BOOL occludedByOverlay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<SBHWidgetDragHandling> widgetDragHandler; 
@property (assign,nonatomic) double titledButtonsAlpha; 
@property (getter=isTransitioningPageState,nonatomic,readonly) BOOL transitioningPageState; 
@property (nonatomic,readonly) long long destinationPageState; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) UIViewController * deepestFolderController; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (getter=isScrolling,nonatomic,readonly) BOOL scrolling; 
@property (getter=isScrollTracking,nonatomic,readonly) BOOL scrollTracking; 
@property (assign,nonatomic) long long currentPageIndex; 
@property (nonatomic,retain) SBFolderIconImageCache * folderIconImageCache; 
@property (nonatomic,retain) SBHIconImageCache * iconImageCache; 
@property (nonatomic,copy,readonly) NSSet * presentedIconLocations; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(id)iconLocation;
+(Class)configurationClass;
+(Class)_contentViewClass;
+(id)dockIconLocation;
+(SBRootFolderPageStateTransitionSnapshot)pageStateTransitionSnapshotForScrollOffset:(double)arg1 pageWidth:(double)arg2 pageSpacing:(double)arg3 pages:(const long long*)arg4 pageCount:(unsigned long long)arg5 userInterfaceLayoutDirection:(long long)arg6 currentPageState:(long long)arg7 ;
-(void)setTodayViewPageHidden:(BOOL)arg1 ;
-(UIViewController*<SBHSidebarProvider>)sidebarViewController;
-(void)setSearchGesture:(SBSearchGesture *)arg1 ;
-(void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2 ;
-(BOOL)isPresentingIconLocation:(id)arg1 ;
-(double)sidebarVisibilityProgress;
-(SBSearchGesture *)searchGesture;
-(BOOL)allowsAutoscrollToTodayView;
-(void)setIdleText:(id)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg1 options:(unsigned long long)arg2 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(double)pageTransitionProgress;
-(BOOL)isOnTodayPage;
-(long long)sidebarPageIndex;
-(id)beginModifyingDockOffscreenFractionForReason:(id)arg1 ;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(long long)destinationPageState;
-(BOOL)isDockVisible;
-(SBFParallaxSettings *)parallaxSettings;
-(BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(UIViewController*<SBHLegibility>)todayViewController;
-(void)stackConfigurationViewControllerViewWillAppear:(id)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg1 inLocation:(id)arg2 ;
-(unsigned long long)_depth;
-(void)stackConfigurationViewControllerViewDidAppear:(id)arg1 ;
-(void)stackConfigurationViewControllerViewWillDisappear:(id)arg1 ;
-(void)stackConfigurationViewControllerViewDidDisappear:(id)arg1 ;
-(void)prepareToTearDown;
-(id)dockListView;
-(void)setDockEdge:(unsigned long long)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(double)dockHeight;
-(BOOL)isDisplayingIcon:(id)arg1 ;
-(SBHRecentsDocumentExtensionProvider *)recentsDocumentExtensionProvider;
-(void)folderController:(id)arg1 didBeginEditingTitle:(id)arg2 ;
-(long long)trailingCustomViewPageIndex;
-(void)transitionWillBegin:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(unsigned long long)dockEdge;
-(id)iconViewForIcon:(id)arg1 location:(id)arg2 ;
-(BOOL)isSidebarVisible;
-(BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2 ;
-(BOOL)showsAddWidgetButtonWhileEditing;
-(void)setAllowsAutoscrollToTodayView:(BOOL)arg1 ;
-(id)extraViewsContainers;
-(void)setPresentationSource:(unsigned long long)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)enumeratePageStateObserversUsingBlock:(/*^block*/id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)transitionDidFinish:(id)arg1 ;
-(UIView *)searchableTodayWrapperView;
-(UIView *)searchBackdropView;
-(BOOL)isPageManagementUIVisible;
-(NSSet *)presentedIconLocations;
-(void)enumerateDisplayedIconViewsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)presenterType;
-(void)setSuppressesEditingStateForListView:(BOOL)arg1 ;
-(BOOL)isSidebarEffectivelyVisible;
-(void)enterPageManagementUIWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addWidgetSheetViewControllerWillAppear:(id)arg1 ;
-(void)addWidgetSheetViewControllerDidAppear:(id)arg1 ;
-(long long)pageState;
-(void)addWidgetSheetViewControllerWillDisappear:(id)arg1 ;
-(void)addWidgetSheetViewControllerDidDisappear:(id)arg1 ;
-(id)addWidgetSheetViewController:(id)arg1 widgetIconForDescriptor:(id)arg2 sizeClass:(long long)arg3 ;
-(BOOL)shouldAnimateLastTwoViewsAsOne;
-(double)effectiveSidebarVisibilityProgress;
-(UIViewController *)pullDownSearchViewController;
-(SBRootFolderView *)rootFolderView;
-(void)setPageState:(long long)arg1 ;
-(double)_todayViewVisibilityProgress;
-(double)_trailingCustomViewVisibilityProgress;
-(void)updateViewsAfterOrientationChange;
-(BOOL)isTodayViewSearchVisible;
-(BOOL)isTodayViewVisibleOrTransitionDestination;
-(BOOL)isAnySearchVisibleOrTransitioning;
-(void)updateExtraButtonVisibilityAnimated:(BOOL)arg1 ;
-(BOOL)isTodayViewVisible;
-(BOOL)isFavoriteTodayViewVisible;
-(void)setManagesStatusBarWidth:(BOOL)arg1 ;
-(void)presentWidgetEditingViewControllerFromViewController:(id)arg1 ;
-(BOOL)_isDescriptorAllowed:(id)arg1 ;
-(void)_addShortcutsSpecialAvocadoToApplicationWidgetCollections:(id)arg1 ;
-(void)_addSiriSuggestionsSpecialAvocadosToApplicationWidgetCollections:(id)arg1 ;
-(void)setOccludedByOverlay:(BOOL)arg1 ;
-(void)_addFilesSpecialAvocadosToApplicationWidgetCollections:(id)arg1 ;
-(void)_addBatteriesSpecialAvocadosToApplicationWidgetCollections:(id)arg1 ;
-(id)_vendorNameForBundleIdentifier:(id)arg1 ;
-(void)_insertSmartStackSpecialAvocadosAtTheTopOfApplicationWidgetCollections:(id)arg1 ;
-(double)_additionalMinimumOffsetForSheetPresentation;
-(BOOL)_isVisibilityWidgetDefined:(long long)arg1 ;
-(BOOL)managesStatusBarWidth;
-(long long)todayViewPageIndex;
-(BOOL)_isDescriptorVisibleByDefault:(id)arg1 ;
-(BOOL)_shouldAddSpecialAvocadoOfType:(unsigned long long)arg1 ;
-(id)widgetIconForDescriptor:(id)arg1 sizeClass:(long long)arg2 ;
-(id)_widgetIconForDescriptors:(id)arg1 sizeClass:(long long)arg2 ;
-(void)_handleWidgetSheetViewControllerWillAppear:(id)arg1 ;
-(void)_handleWidgetSheetViewControllerDidAppear:(id)arg1 ;
-(void)_handleWidgetSheetViewControllerWillDisappear:(id)arg1 ;
-(id)viewControllerForPageState:(long long)arg1 ;
-(BOOL)isDockExternal;
-(void)_handleWidgetSheetViewControllerDidDisappear:(id)arg1 ;
-(BOOL)_isDockSwitchedForOrientation:(long long)arg1 ;
-(BOOL)_dockLayoutReversedForInterfaceOrientation:(long long)arg1 ;
-(unsigned long long)_dockEdgeForInterfaceOrientation:(long long)arg1 ;
-(void)configureAppStatusBarInsets;
-(void)_configureDockViewForOrientationWithoutAnimation:(long long)arg1 ;
-(void)_configureAppStatusBarInsetsForOrientation:(long long)arg1 ;
-(BOOL)isAnySearchVisible;
-(void)_configureTodayViewPageForOrientation:(long long)arg1 ;
-(BOOL)_todayViewPageIsVisibleForOrientation:(long long)arg1 ;
-(id)firstIconViewForIcon:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)_shouldUseDockAnimationWindowForRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(BOOL)_shouldSlideDockOutDuringRotationFromOrientation:(long long)arg1 toOrientation:(long long)arg2 ;
-(void)_configureDockViewForOrientationDuringAnimation:(long long)arg1 dockAnimationWindow:(id)arg2 dockBorrowedAssertion:(id)arg3 ;
-(void)_configureViewForOrientationWithoutAnimation:(long long)arg1 ;
-(id)updateStateTransitionsDuringScrollingScrollView:(id)arg1 pageBounceComparator:(/*function pointer*/void*)arg2 ;
-(id<SBRootFolderPageTransition>)implicitScrollTransition;
-(BOOL)isTransitiongBetweenPageStateVerticalGroups;
-(void)setImplicitScrollTransition:(id<SBRootFolderPageTransition>)arg1 ;
-(SBRootFolderPageStateTransitionSnapshot)pageStateTransitionSnapshotForScrollOffset:(double)arg1 ;
-(BOOL)isTransitioningPageState;
-(_SBRootFolderPageTransitionHandle *)currentTransitionHandle;
-(BOOL)isPullDownSearchVisibleOrTransitioning;
-(void)performPageStateTransitionToState:(long long)arg1 reason:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)canTransitionPageStateToState:(long long)arg1 ;
-(BOOL)isAnySearchTransitioning;
-(void)performDefaultPageStateTransitionToState:(long long)arg1 reason:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)beginPageStateTransitionToState:(long long)arg1 reason:(id)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4 ;
-(BOOL)isPullDownSearchVisibleOrTransitioningToVisible;
-(BOOL)isPullDownSearchVisible;
-(BOOL)isPullDownSearchTransitioning;
-(BOOL)isTodayViewSearchTransitioning;
-(double)visibilityProgressTowardPageStateMatchingTest:(/*^block*/id)arg1 ;
-(void)dismissSpotlightAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCurrentTransitionHandle:(_SBRootFolderPageTransitionHandle *)arg1 ;
-(void)willBeginTransitionToState:(long long)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(double)_anySearchVisibilityProgress;
-(id<SBRootFolderControllerAccessoryViewControllerDelegate>)accessoryViewControllerDelegate;
-(BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(id)defaultTransitionForTransitioningFromPageState:(long long)arg1 toPageState:(long long)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4 ;
-(void)_checkForImproperScrollOffsetForPageState;
-(void)didContinueTransitionToState:(long long)arg1 progress:(double)arg2 ;
-(void)willEndTransitionToState:(long long)arg1 successfully:(BOOL)arg2 ;
-(void)setSearchGestureTransition:(id<SBRootFolderPageTransition>)arg1 ;
-(void)didEndTransitionFromState:(long long)arg1 toState:(long long)arg2 successfully:(BOOL)arg3 ;
-(void)_cancelTouchesForSearchGestureOnIconView:(id)arg1 ;
-(id<SBRootFolderPageTransition>)searchGestureTransition;
-(void)_invalidateSearchGestureIconViewTouchCancellationAssertion;
-(NSArray *)folderControllers;
-(id)viewControllerForTransitioningFromPageState:(long long)arg1 toPageState:(long long)arg2 ;
-(BOOL)isTodayViewTransitioning;
-(id)_widgetIconAnimationExtraViewsProvider;
-(void)transitionContext:(id)arg1 updateTransitionProgress:(double)arg2 ;
-(void)rootFolderView:(id)arg1 wantsToAdjustTodayContentForEdgeBounceForScrollOffset:(CGPoint)arg2 ;
-(double)distanceToTopOfSpotlightIconsForRootFolderView:(id)arg1 ;
-(void)rootFolderViewWantsToEndEditing:(id)arg1 ;
-(double)maxExternalDockHeightForRootFolderView:(id)arg1 ;
-(double)externalDockHeightForRootFolderView:(id)arg1 ;
-(double)preferredExternalDockVerticalMarginForRootFolderView:(id)arg1 ;
-(id)backgroundViewForDockForRootFolderView:(id)arg1 ;
-(id)backgroundViewForEditingDoneButtonForRootFolderView:(id)arg1 ;
-(void)rootFolderView:(id)arg1 didChangeSidebarVisibilityProgress:(double)arg2 ;
-(void)rootFolderView:(id)arg1 didChangeEffectiveSidebarVisibilityProgress:(double)arg2 ;
-(void)rootFolderView:(id)arg1 didEndSidebarVisibilityTransitionWithEffectiveProgress:(double)arg2 ;
-(void)rootFolderView:(id)arg1 didOverscrollOnFirstPageByAmount:(double)arg2 ;
-(UIViewController*<SBHLibraryProvider>)trailingCustomViewController;
-(void)rootFolderView:(id)arg1 didEndOverscrollOnFirstPageWithVelocity:(double)arg2 translation:(double)arg3 ;
-(void)rootFolderView:(id)arg1 didOverscrollOnLastPageByAmount:(double)arg2 ;
-(void)rootFolderView:(id)arg1 didEndOverscrollOnLastPageWithVelocity:(double)arg2 translation:(double)arg3 ;
-(id)widgetIconForGalleryItem:(id)arg1 sizeClass:(long long)arg2 ;
-(void)rootFolderViewWantsWidgetEditingViewControllerPresented:(id)arg1 ;
-(void)rootFolderView:(id)arg1 willPresentPageManagementUsingAnimator:(id)arg2 context:(id)arg3 ;
-(void)rootFolderView:(id)arg1 willDismissPageManagementUsingAnimator:(id)arg2 context:(id)arg3 ;
-(void)didBeginDraggingWidgetIcon:(id)arg1 ;
-(id)rootFolderViewIfLoaded;
-(void)rootFolderView:(id)arg1 didDismissPageManagementWithContext:(id)arg2 ;
-(void)setSuppressesExtraEditingButtons:(BOOL)arg1 ;
-(void)setPullDownSearchViewController:(UIViewController *)arg1 ;
-(double)spotlightFirstIconRowOffset;
-(NSSet *)nonDockPresentedIconLocations;
-(void)setParallaxDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(BOOL)isSidebarEffectivelyAtLeastHalfVisible;
-(void)_configureAppStatusBarInsetsAnimated:(BOOL)arg1 ;
-(void)presentSpotlightAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isTodayViewSearchVisibleOrTransitioning;
-(BOOL)isTodayViewOrTodayViewSearchVisible;
-(BOOL)suppressesExtraEditingButtons;
-(BOOL)isTransitioningBetweenIconAndTodayView;
-(BOOL)isTransitioningBetweenIconPageAndTodayPage;
-(BOOL)isTransitioningBetweenIconAndTrailingCustomView;
-(BOOL)isTransitioningBetweenIconPageAndTrailingCustomPage;
-(BOOL)isTransitioningBetweenHorizontalPageStates;
-(void)pageTransitionHandle:(id)arg1 updateCurrentPageStateTransitionToProgress:(double)arg2 ;
-(void)pageTransitionHandle:(id)arg1 endPageStateTransitionSuccessfully:(BOOL)arg2 ;
-(void)_setupDebugTapGestureRecognizerForDockIconListView:(id)arg1 ;
-(void)setAccessoryViewControllerDelegate:(id<SBRootFolderControllerAccessoryViewControllerDelegate>)arg1 ;
-(BOOL)isDockPinnedForRotation;
-(void)setEffectiveSidebarVisibilityProgress:(double)arg1 ;
-(id<BSInvalidatable>)searchGestureIconViewTouchCancellationAssertion;
-(void)setSearchGestureIconViewTouchCancellationAssertion:(id<BSInvalidatable>)arg1 ;
-(void)setRecentsDocumentExtensionProvider:(SBHRecentsDocumentExtensionProvider *)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(double)titledButtonsAlpha;
-(void)prepareToOpen;
-(unsigned long long)presentationSource;
-(BOOL)isSidebarVisibilityGestureActive;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)favoriteTodayViewPageIndex;
-(void)_reduceTransparencyChanged;
-(void)addPageStateObserver:(id)arg1 ;
-(BOOL)isTodayViewPageHidden;
-(BOOL)shouldAnimateFirstTwoViewsAsOne;
-(void)setSidebarViewController:(UIViewController*<SBHSidebarProvider>)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2 options:(unsigned long long)arg3 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_doPageManagementEducation;
-(void)addWidgetSheetViewControllerDidCancel:(id)arg1 ;
-(void)addWidgetSheetViewController:(id)arg1 didSelectWidgetIconView:(id)arg2 ;
-(void)setTitledButtonsAlpha:(double)arg1 ;
-(id<SBHWidgetDragHandling>)widgetDragHandler;
-(BOOL)isOccludedByOverlay;
-(id)dockIconListView;
-(void)searchGesture:(id)arg1 completedShowing:(BOOL)arg2 ;
-(void)searchGesture:(id)arg1 resetAnimated:(BOOL)arg2 ;
-(BOOL)isDisplayingIcon:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setSidebarPinned:(BOOL)arg1 ;
-(void)setFolderDelegate:(id<SBRootFolderControllerDelegate>)arg1 ;
-(BOOL)isSidebarPinned;
-(void)setSidebarVisibilityProgress:(double)arg1 ;
-(void)transitionWillReverse:(id)arg1 ;
-(void)transitionWillFinish:(id)arg1 ;
-(id)_makeContentViewWithConfiguration:(id)arg1 ;
-(id)_viewControllersToNotifyForViewObscuration;
-(void)searchGesture:(id)arg1 startedShowing:(BOOL)arg2 ;
-(void)prepareToClose;
-(void)viewWillTransitionToSize:(CGSize)arg1 forOperation:(long long)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)orientationDidChange:(long long)arg1 ;
-(id)viewControllersForPageIndex:(long long)arg1 ;
-(BOOL)closesAfterDragExits;
-(id)extraViews;
-(BOOL)canAcceptFolderIconDrags;
-(BOOL)_listIndexIsVisible:(unsigned long long)arg1 ;
-(BOOL)shouldOpenFolderIcon:(id)arg1 ;
-(BOOL)disablesScrollingWhileIconDragIsDropping;
-(CHSAvocadoDescriptorProvider *)avocadoDescriptorProvider;
-(void)folderView:(id)arg1 currentPageIndexWillChange:(long long)arg2 ;
-(void)folderView:(id)arg1 currentPageIndexDidChange:(long long)arg2 ;
-(void)folderViewWillBeginDragging:(id)arg1 ;
-(void)folderViewWillBeginScrolling:(id)arg1 ;
-(void)folderViewDidScroll:(id)arg1 ;
-(void)folderViewWillEndDragging:(id)arg1 ;
-(void)folderViewWillUpdatePageDuringScrolling:(id)arg1 ;
-(void)folderViewDidEndScrolling:(id)arg1 ;
-(void)folderView:(id)arg1 willAnimateScrollToPageIndex:(long long)arg2 ;
-(void)removePageStateObserver:(id)arg1 ;
-(void)folderController:(id)arg1 didEndEditingTitle:(id)arg2 ;
-(BOOL)showsDoneButtonWhileEditing;
-(void)folderView:(id)arg1 didBeginEditingTitle:(id)arg2 ;
-(void)folderView:(id)arg1 didEndEditingTitle:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)suspendsWallpaperAnimationWhileOpen;
-(UIEdgeInsets)statusBarInsetsForOrientation:(long long)arg1 ;
-(void)setTodayViewController:(UIViewController*<SBHLegibility>)arg1 ;
-(void)exitPageManagementUIWithCompletionHandler:(/*^block*/id)arg1 ;
@end

