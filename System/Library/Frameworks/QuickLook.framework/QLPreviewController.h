/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScreenshotServiceDelegate.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/QLPreviewItemStoreDelegate.h>
#import <libobjc.A.dylib/QLPreviewItemProvider.h>
#import <libobjc.A.dylib/QLPreviewControllerStateProtocolHostOnly.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol QLPreviewControllerDataSource, QLPrintingProtocol, QLPreviewControllerDelegate, QLPreviewCollectionProtocol, QLRemotePopoverTracker;
@class QLBarButtonItem, NSMutableArray, NSString, QLErrorView, NSDate, UIColor, UIViewController, NSMutableDictionary, NSArray, UIAlertController, QLNavigationState, UINavigationController, QLToolbarController, QLPreviewItemStore, QLActivityItemProvider, QLCustomURLSharingProxyDelegate, UIDocumentInteractionController, NSURL, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, QLSwipeDownTracker, QLPinchRotationTracker, QLStateManager, QLTransitionController, QLItem;

@interface QLPreviewController : UIViewController <UIScreenshotServiceDelegate, UIDocumentInteractionControllerDelegate, UIGestureRecognizerDelegate, QLPreviewItemStoreDelegate, QLPreviewItemProvider, QLPreviewControllerStateProtocolHostOnly, UIPageViewControllerDelegate, UIViewControllerTransitioningDelegate, UINavigationControllerDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate> {

	QLBarButtonItem* _doneButton;
	QLBarButtonItem* _actionButton;
	QLBarButtonItem* _listButton;
	BOOL _previewCollectionNeedsConfiguration;
	BOOL _previewCollectionIsLoading;
	BOOL _changingCurrentPreview;
	NSMutableArray* _previewCollectionReadyCompletionBlocks;
	NSString* _loadingTextForMissingFiles;
	long long _whitePointAdaptivityStyle;
	long long _enqueuedWhitePointAdaptivityStyle;
	QLErrorView* _noDataView;
	BOOL _deferReloadData;
	long long _deferredSetIndex;
	NSDate* _lastCrashTimeStamp;
	unsigned long long _numberOfRetries;
	BOOL _viewWillAppearPerformed;
	UIColor* _backgroundColor;
	UIColor* _fullscreenBackgroundColor;
	UIColor* _navigationBarTintColor;
	UIColor* _toolbarTintColor;
	UIViewController* _modalRootViewController;
	BOOL _canChangeCurrentPage;
	BOOL _overlayHidden;
	BOOL _fullScreen;
	BOOL _previousStatusBarHidden;
	BOOL _willTransitionToInternalView;
	BOOL _didTransitionFromInternalView;
	BOOL _allowInteractiveTransitions;
	BOOL _canShowToolbar;
	BOOL _canShowNavBar;
	BOOL _currentPreviewHasRemoteUnsavedEdits;
	BOOL _isObtainingEditsFromServiceBeforeDismissing;
	BOOL _isContentManaged;
	BOOL _useCustomActionButton;
	BOOL _alwaysDisplayPreviewItemTitle;
	BOOL _showActionAsDefaultButton;
	BOOL _forceModalPresentation;
	long long _currentPreviewItemIndex;
	id<QLPreviewControllerDataSource> _dataSource;
	id<QLPrintingProtocol> _printer;
	id<QLPreviewControllerDelegate> _delegate;
	NSMutableDictionary* _previewKeyCommands;
	UIViewController*<QLPreviewCollectionProtocol> _previewCollection;
	NSArray* _previewToolbarButtons;
	NSArray* _excludedToolbarButtonIdentifiers;
	UIAlertController* _doneButtonAlertController;
	QLNavigationState* _previousNavigationVCState;
	UINavigationController* _internalNavigationController;
	QLToolbarController* _toolbarController;
	QLPreviewItemStore* _previewItemStore;
	QLActivityItemProvider* _currentItemProvider;
	QLCustomURLSharingProxyDelegate* _customURLSharingProxyDelegate;
	UIDocumentInteractionController* _sharingInteractionController;
	id<QLRemotePopoverTracker> _shareSheetPopoverTracker;
	/*^block*/id _shareSheetDismissCompletion;
	NSURL* _accessedUrlForDocumentInteractionController;
	NSArray* _originalLeftBarButtonItems;
	NSArray* _originalRightBarButtonItems;
	NSString* _currentTitleFromItemViewController;
	id<QLPreviewControllerDelegate> _strongDelegate;
	UIPanGestureRecognizer* _slideGesture;
	UIPinchGestureRecognizer* _pinchGesture;
	UIRotationGestureRecognizer* _rotationGesture;
	QLSwipeDownTracker* _swipeDownTracker;
	QLPinchRotationTracker* _pinchRotationTracker;
	QLStateManager* _stateManager;
	QLTransitionController* _currentAnimator;
	unsigned long long _quickLookVisibility;
	unsigned long long _appearanceActions;
	NSArray* _additionalLeftBarButtonItems;
	NSArray* _additionalRightBarButtonItems;
	unsigned long long _presentationMode;
	unsigned long long _forcedSupportedInterfaceOrientations;
	NSString* _overrideParentApplicationDisplayIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableDictionary * previewKeyCommands;                                     //@synthesize previewKeyCommands=_previewKeyCommands - In the implementation block
@property (assign,nonatomic) BOOL canChangeCurrentPage;                                                    //@synthesize canChangeCurrentPage=_canChangeCurrentPage - In the implementation block
@property (assign,nonatomic) BOOL overlayHidden;                                                           //@synthesize overlayHidden=_overlayHidden - In the implementation block
@property (assign,nonatomic) BOOL fullScreen;                                                              //@synthesize fullScreen=_fullScreen - In the implementation block
@property (assign,nonatomic) BOOL previousStatusBarHidden;                                                 //@synthesize previousStatusBarHidden=_previousStatusBarHidden - In the implementation block
@property (readonly) long long numberOfPreviewItems; 
@property (readonly) QLItem * internalCurrentPreviewItem; 
@property (readonly) UIViewController*<QLPreviewCollectionProtocol> previewCollection;                     //@synthesize previewCollection=_previewCollection - In the implementation block
@property (readonly) id<QLPrintingProtocol> printer;                                                       //@synthesize printer=_printer - In the implementation block
@property (readonly) NSArray * previewToolbarButtons;                                                      //@synthesize previewToolbarButtons=_previewToolbarButtons - In the implementation block
@property (readonly) NSArray * excludedToolbarButtonIdentifiers;                                           //@synthesize excludedToolbarButtonIdentifiers=_excludedToolbarButtonIdentifiers - In the implementation block
@property (assign,nonatomic,__weak) UIAlertController * doneButtonAlertController;                         //@synthesize doneButtonAlertController=_doneButtonAlertController - In the implementation block
@property (readonly) QLNavigationState * previousNavigationVCState;                                        //@synthesize previousNavigationVCState=_previousNavigationVCState - In the implementation block
@property (nonatomic,retain) UINavigationController * internalNavigationController;                        //@synthesize internalNavigationController=_internalNavigationController - In the implementation block
@property (assign,nonatomic) BOOL willTransitionToInternalView;                                            //@synthesize willTransitionToInternalView=_willTransitionToInternalView - In the implementation block
@property (assign,nonatomic) BOOL didTransitionFromInternalView;                                           //@synthesize didTransitionFromInternalView=_didTransitionFromInternalView - In the implementation block
@property (assign,nonatomic) BOOL allowInteractiveTransitions;                                             //@synthesize allowInteractiveTransitions=_allowInteractiveTransitions - In the implementation block
@property (nonatomic,readonly) QLToolbarController * toolbarController;                                    //@synthesize toolbarController=_toolbarController - In the implementation block
@property (readonly) QLPreviewItemStore * previewItemStore;                                                //@synthesize previewItemStore=_previewItemStore - In the implementation block
@property (retain) QLActivityItemProvider * currentItemProvider;                                           //@synthesize currentItemProvider=_currentItemProvider - In the implementation block
@property (nonatomic,retain) QLCustomURLSharingProxyDelegate * customURLSharingProxyDelegate;              //@synthesize customURLSharingProxyDelegate=_customURLSharingProxyDelegate - In the implementation block
@property (retain) UIDocumentInteractionController * sharingInteractionController;                         //@synthesize sharingInteractionController=_sharingInteractionController - In the implementation block
@property (nonatomic,retain) id<QLRemotePopoverTracker> shareSheetPopoverTracker;                          //@synthesize shareSheetPopoverTracker=_shareSheetPopoverTracker - In the implementation block
@property (nonatomic,copy) id shareSheetDismissCompletion;                                                 //@synthesize shareSheetDismissCompletion=_shareSheetDismissCompletion - In the implementation block
@property (nonatomic,retain) NSURL * accessedUrlForDocumentInteractionController;                          //@synthesize accessedUrlForDocumentInteractionController=_accessedUrlForDocumentInteractionController - In the implementation block
@property (retain) NSArray * originalLeftBarButtonItems;                                                   //@synthesize originalLeftBarButtonItems=_originalLeftBarButtonItems - In the implementation block
@property (retain) NSArray * originalRightBarButtonItems;                                                  //@synthesize originalRightBarButtonItems=_originalRightBarButtonItems - In the implementation block
@property (retain) NSString * currentTitleFromItemViewController;                                          //@synthesize currentTitleFromItemViewController=_currentTitleFromItemViewController - In the implementation block
@property (nonatomic,retain) id<QLPreviewControllerDelegate> strongDelegate;                               //@synthesize strongDelegate=_strongDelegate - In the implementation block
@property (retain) UIPanGestureRecognizer * slideGesture;                                                  //@synthesize slideGesture=_slideGesture - In the implementation block
@property (retain) UIPinchGestureRecognizer * pinchGesture;                                                //@synthesize pinchGesture=_pinchGesture - In the implementation block
@property (retain) UIRotationGestureRecognizer * rotationGesture;                                          //@synthesize rotationGesture=_rotationGesture - In the implementation block
@property (retain) QLSwipeDownTracker * swipeDownTracker;                                                  //@synthesize swipeDownTracker=_swipeDownTracker - In the implementation block
@property (retain) QLPinchRotationTracker * pinchRotationTracker;                                          //@synthesize pinchRotationTracker=_pinchRotationTracker - In the implementation block
@property (retain) QLStateManager * stateManager;                                                          //@synthesize stateManager=_stateManager - In the implementation block
@property (retain) QLTransitionController * currentAnimator;                                               //@synthesize currentAnimator=_currentAnimator - In the implementation block
@property (assign) BOOL canShowToolbar;                                                                    //@synthesize canShowToolbar=_canShowToolbar - In the implementation block
@property (assign) BOOL canShowNavBar;                                                                     //@synthesize canShowNavBar=_canShowNavBar - In the implementation block
@property (assign,nonatomic) BOOL currentPreviewHasRemoteUnsavedEdits;                                     //@synthesize currentPreviewHasRemoteUnsavedEdits=_currentPreviewHasRemoteUnsavedEdits - In the implementation block
@property (assign,nonatomic) BOOL isObtainingEditsFromServiceBeforeDismissing;                             //@synthesize isObtainingEditsFromServiceBeforeDismissing=_isObtainingEditsFromServiceBeforeDismissing - In the implementation block
@property (nonatomic,readonly) BOOL isTopPreviewController; 
@property (assign,nonatomic) unsigned long long quickLookVisibility;                                       //@synthesize quickLookVisibility=_quickLookVisibility - In the implementation block
@property (assign,nonatomic) unsigned long long appearanceActions;                                         //@synthesize appearanceActions=_appearanceActions - In the implementation block
@property (assign,nonatomic) BOOL isContentManaged;                                                        //@synthesize isContentManaged=_isContentManaged - In the implementation block
@property (assign,nonatomic) BOOL useCustomActionButton;                                                   //@synthesize useCustomActionButton=_useCustomActionButton - In the implementation block
@property (assign,nonatomic) BOOL alwaysDisplayPreviewItemTitle;                                           //@synthesize alwaysDisplayPreviewItemTitle=_alwaysDisplayPreviewItemTitle - In the implementation block
@property (assign,nonatomic) BOOL showActionAsDefaultButton;                                               //@synthesize showActionAsDefaultButton=_showActionAsDefaultButton - In the implementation block
@property (assign,nonatomic) BOOL forceModalPresentation;                                                  //@synthesize forceModalPresentation=_forceModalPresentation - In the implementation block
@property (retain) NSArray * additionalLeftBarButtonItems;                                                 //@synthesize additionalLeftBarButtonItems=_additionalLeftBarButtonItems - In the implementation block
@property (retain) NSArray * additionalRightBarButtonItems;                                                //@synthesize additionalRightBarButtonItems=_additionalRightBarButtonItems - In the implementation block
@property (nonatomic,retain) UIColor * toolbarTintColor;                                                   //@synthesize toolbarTintColor=_toolbarTintColor - In the implementation block
@property (nonatomic,retain) UIColor * navigationBarTintColor;                                             //@synthesize navigationBarTintColor=_navigationBarTintColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * fullscreenBackgroundColor;                                          //@synthesize fullscreenBackgroundColor=_fullscreenBackgroundColor - In the implementation block
@property (nonatomic,readonly) unsigned long long presentationMode;                                        //@synthesize presentationMode=_presentationMode - In the implementation block
@property (assign,nonatomic) unsigned long long forcedSupportedInterfaceOrientations;                      //@synthesize forcedSupportedInterfaceOrientations=_forcedSupportedInterfaceOrientations - In the implementation block
@property (nonatomic,copy) NSString * overrideParentApplicationDisplayIdentifier;                          //@synthesize overrideParentApplicationDisplayIdentifier=_overrideParentApplicationDisplayIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<QLPreviewControllerDataSource> dataSource;                          //@synthesize dataSource=_dataSource - In the implementation block
@property (assign) long long currentPreviewItemIndex;                                                      //@synthesize currentPreviewItemIndex=_currentPreviewItemIndex - In the implementation block
@property (readonly) id<QLPreviewItem> currentPreviewItem; 
@property (assign,nonatomic,__weak) id<QLPreviewControllerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
+(id)printPageRendererForItem:(id)arg1 ;
+(id)controllerWithItemStore:(id)arg1 ;
+(void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(BOOL)arg4 ;
+(void)logDeprecatedMessageForMethodName:(id)arg1 ;
+(void)logDeprecatedMessageForSelector:(SEL)arg1 ;
+(id)contentTypeForPreviewItem:(id)arg1 ;
+(id)titleForPreviewItem:(id)arg1 ;
+(BOOL)copyPreviewItemToPasteboard:(id)arg1 ;
+(BOOL)canPreviewDocumentType:(id)arg1 ;
+(BOOL)canPreviewMIMEType:(id)arg1 ;
+(BOOL)canPreviewItem:(id)arg1 ;
-(id)_doneButton;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(id)currentItem;
-(void)willMoveToParentViewController:(id)arg1 ;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(void)setFullScreen:(BOOL)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)_updateBackgroundColor;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)_reloadDataIfNeeded;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)setStrongDelegate:(id<QLPreviewControllerDelegate>)arg1 ;
-(void)reloadData;
-(BOOL)sourceIsManaged;
-(id)editedItems;
-(BOOL)forceModalPresentation;
-(void)didEditCopyOfPreviewItemAtIndex:(unsigned long long)arg1 editedCopy:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setCurrentTitleFromItemViewController:(NSString *)arg1 ;
-(void)updateNavigationTitle;
-(id)_topPreviewController;
-(BOOL)_topViewControllerBelongsToHierarchy:(id)arg1 ;
-(void)hideNoDataView;
-(id)_listButton;
-(id)childViewControllerForStatusBarHidden;
-(UIPinchGestureRecognizer *)pinchGesture;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(unsigned long long)presentationMode;
-(id)keyCommands;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(void)_updateAllowInteractiveTransitionsIfNeeded;
-(BOOL)allowInteractiveTransitions;
-(void)updateOverlayAnimated:(BOOL)arg1 forceRefresh:(BOOL)arg2 ;
-(UIViewController*<QLPreviewCollectionProtocol>)previewCollection;
-(void)prepareForActionSheetPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCurrentPreviewHasRemoteUnsavedEdits:(BOOL)arg1 ;
-(void)_refreshCurrentPreviewItemAnimated:(BOOL)arg1 ;
-(void)_setCurrentPreviewItemIndex:(long long)arg1 updatePreview:(BOOL)arg2 animated:(BOOL)arg3 ;
-(BOOL)_isQuickLookVisible;
-(UIColor *)toolbarTintColor;
-(void)previewItemAtIndex:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_updateBarTintColors;
-(UIColor *)fullscreenBackgroundColor;
-(void)_updateViewHierarchyPresentation;
-(BOOL)_shouldAllowInteractiveTransitions;
-(long long)numberOfPreviewItems;
-(void)setCanShowToolbar:(BOOL)arg1 ;
-(void)setCanShowNavBar:(BOOL)arg1 ;
-(void)_setFullScreen:(BOOL)arg1 animated:(BOOL)arg2 force:(BOOL)arg3 ;
-(void)_promptUserAndOpenURLIfNeeded:(id)arg1 ;
-(void)showShareSheetFromBarButton:(id)arg1 ;
-(void)dismissQuickLook;
-(void)_previousPreview;
-(void)_nextPreview;
-(void)_keyCommandWasPerformed:(id)arg1 ;
-(int)mode;
-(unsigned long long)itemStore:(id)arg1 editedFileBehaviorForItem:(id)arg2 ;
-(BOOL)itemStore:(id)arg1 canHandleEditedCopyOfPreviewItem:(id)arg2 ;
-(BOOL)itemStore:(id)arg1 canShareItem:(id)arg2 ;
-(BOOL)itemStore:(id)arg1 canEditItem:(id)arg2 ;
-(long long)itemStore:(id)arg1 editingModeForPreviewItem:(id)arg2 ;
-(void)setFullscreenBackgroundColor:(UIColor *)arg1 ;
-(void)previewCollectionUpdatePreviewItem:(long long)arg1 ;
-(void)previewCollectionPrefersWhitePointAdaptivityStyle:(long long)arg1 ;
-(void)setToolbarCanBeVisible:(BOOL)arg1 ;
-(void)setNavBarCanBeVisible:(BOOL)arg1 ;
-(void)updateOverlayButtons:(BOOL)arg1 ;
-(void)updateKeyCommands;
-(void)openURLIfAllowed:(id)arg1 ;
-(void)showShareSheet;
-(void)showShareSheetWithPopoverTracker:(id)arg1 customSharedURL:(id)arg2 dismissCompletion:(/*^block*/id)arg3 ;
-(void)triggerQuickLookDismissal;
-(void)updatePreferredContentSize:(CGSize)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(id)animatorForShowing:(BOOL)arg1 previewController:(id)arg2 presentingController:(id)arg3 ;
-(id)currentTracker;
-(id<QLPrintingProtocol>)printer;
-(void)setLoadingTextForMissingFiles:(id)arg1 ;
-(void)showShareSheetFromRemoteViewWithPopoverTracker:(id)arg1 customSharedURL:(id)arg2 dismissCompletion:(/*^block*/id)arg3 ;
-(void)_dismissQuickLookFromKeyboardCommand;
-(void)setPreviewKeyCommands:(NSMutableDictionary *)arg1 ;
-(void)setCanChangeCurrentPage:(BOOL)arg1 ;
-(id)previewItemAtIndex:(long long)arg1 ;
-(void)setWillTransitionToInternalView:(BOOL)arg1 ;
-(void)setDidTransitionFromInternalView:(BOOL)arg1 ;
-(void)setDataSource:(id<QLPreviewControllerDataSource>)arg1 ;
-(void)dealloc;
-(id)additionalActivitiesForDocumentInteractionController:(id)arg1 ;
-(id)activityItemForDocumentInteractionController:(id)arg1 ;
-(id)printInfoForDocumentInteractionController:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(QLActivityItemProvider *)currentItemProvider;
-(QLItem *)internalCurrentPreviewItem;
-(void)setCurrentItemProvider:(QLActivityItemProvider *)arg1 ;
-(void)setStateManager:(QLStateManager *)arg1 ;
-(void)setAdditionalRightBarButtonItems:(NSArray *)arg1 ;
-(void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(BOOL)arg4 ;
-(void)currentPreviewItemViewControllerHasUnsavedEdits:(BOOL)arg1 ;
-(void)forwardMessage:(id)arg1 toItemAtIndex:(unsigned long long)arg2 withUUID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)expandContentOfItemAtIndex:(unsigned long long)arg1 withUUID:(id)arg2 unarchivedItemsURLWrapper:(id)arg3 ;
-(void)presentAlertControllerForScenario:(long long)arg1 ;
-(void)updatePreviewItemAtIndex:(unsigned long long)arg1 editedCopy:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateTitle:(id)arg1 ;
-(void)remoteViewControllerWasInvalidated;
-(void)waitForPreviewCollectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setOverlayHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setUseCustomActionButton:(BOOL)arg1 ;
-(void)setShowActionAsDefaultButton:(BOOL)arg1 ;
-(void)setQuickLookVisibility:(unsigned long long)arg1 ;
-(BOOL)isTopPreviewController;
-(id)_topViewController;
-(BOOL)_quickLookWillBecomeVisible;
-(NSMutableDictionary *)previewKeyCommands;
-(void)_listButtonTapped:(id)arg1 ;
-(id)_copyBarButtons:(id)arg1 ;
-(void)_toolbarButtonPressed:(id)arg1 ;
-(id)flexibleSpace;
-(id)_additionalLeftButtonItems;
-(id)_openInButton;
-(BOOL)_needsListButton;
-(id)_additionalRightButtonItems;
-(BOOL)_canPerformBarButtonAction;
-(void)_performOpenInWithFileURL:(id)arg1 claimBinding:(id)arg2 additionalLaunchServicesOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_displayedButtonWithAccessibilityIdentifier:(id)arg1 ;
-(void)_showShareSheetFromBarButton:(id)arg1 ;
-(void)_stopAccessingUrlForDocumentInteractionController;
-(void)_performQuickLookDismissalAnimated:(BOOL)arg1 ;
-(void)didSelectPreviewItem:(id)arg1 ;
-(BOOL)fullScreen;
-(BOOL)prefersStatusBarHidden;
-(void)_setupDocumentInteractionControllerForPresentation:(/*^block*/id)arg1 ;
-(void)_setupDocumentInteractionControllerForPresentationWithURL:(id)arg1 isCustomURL:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_notifyPreviewCollectionOfDoneButtonTapWithSender:(id)arg1 ;
-(void)_obtainEditsFromServiceAndNotifyPreviewCollectionOfDoneButtonTappedWithSender:(id)arg1 ;
-(void)_willStartObtainingEditsFromService;
-(void)_didObtainEditsFromService;
-(BOOL)_displayDismissActionsForEditedPreviewItemsIfNeeded:(id)arg1 fromBarButtonItem:(id)arg2 ;
-(id)_editedItemsForDoneActionControllerWithItems:(id)arg1 ;
-(void)_triggerOverlayUpdateAfterDelay;
-(long long)preferredStatusBarUpdateAnimation;
-(long long)_preferredWhitePointAdaptivityStyle;
-(QLSwipeDownTracker *)swipeDownTracker;
-(void)setAccessoryViewVisible:(BOOL)arg1 ;
-(unsigned long long)currentOrbMode;
-(void)_updateOverlayButtonsIfNeededWithTraitCollection:(id)arg1 animated:(BOOL)arg2 updatedToolbarButtons:(id*)arg3 ;
-(id)_toolBarButtonsWithTraitCollection:(id)arg1 ;
-(id)_navigationBarLeftButtonsWithTraitCollection:(id)arg1 ;
-(id)_navigationBarRightButtonsWithTraitCollection:(id)arg1 ;
-(unsigned long long)_numberOfButtonsExcludingSpacersInButtons:(id)arg1 disappearingOnTap:(BOOL)arg2 ;
-(BOOL)_toolbarButtonArray:(id)arg1 isEqualToArray:(id)arg2 ;
-(void)_updateCurrentPopoverButtonIfNeeded:(id)arg1 newNavigationLeftButtons:(id)arg2 ;
-(id)_buttonWithAccessibilityIdentifierPointer:(id)arg1 inButtons:(id)arg2 ;
-(id)_listDescriptionStringWithTitle:(id)arg1 ;
-(void)_openInButtonTapped:(id)arg1 ;
-(void)_copyToButtonTapped:(id)arg1 ;
-(id)initWithPreviewItems:(id)arg1 ;
-(void)setSwipeDownTracker:(QLSwipeDownTracker *)arg1 ;
-(void)_updatePreviewItem:(id)arg1 editedCopy:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_synchronouslyUpdateContentsOfPreviewItem:(id)arg1 editedCopy:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_asynchronouslyUpdateContentsOfPreviewItem:(id)arg1 editedCopy:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)obtainAndUpdateEditedCopyOfCurrentPreviewItem:(/*^block*/id)arg1 ;
-(void)shareableURLForCurrentPreviewItem:(/*^block*/id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_childViewControllerForWhitePointAdaptivityStyle;
-(void)didEditCopyOfPreviewItemAtIndex:(unsigned long long)arg1 editedCopy:(id)arg2 ;
-(BOOL)willTransitionToInternalView;
-(BOOL)_isBeingFullyDismissed;
-(unsigned long long)quickLookVisibility;
-(void)updateStatusBarAnimated:(BOOL)arg1 ;
-(void)unregisterFromScreenshotService;
-(BOOL)_basePreviewControllerIsBeingFullyDismissed;
-(void)_invalidatePreviewCollectionIfNeeded;
-(void)_updateOverlayButtonsForTraitCollection:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateOverlayAnimated:(BOOL)arg1 forceRefresh:(BOOL)arg2 withTraitCollection:(id)arg3 ;
-(void)updateRemoteOverlayIfNeeded;
-(unsigned long long)forcedSupportedInterfaceOrientations;
-(BOOL)accessibilityPerformEscape;
-(void)setIsContentManaged:(BOOL)arg1 ;
-(void)_didEditCopyOfPreviewItemAtIndex:(unsigned long long)arg1 editedCopy:(id)arg2 synchronously:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handleEditedPreviewItem:(id)arg1 editedCopy:(id)arg2 synchronously:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setNavigationBarTintColor:(UIColor *)arg1 ;
-(BOOL)canChangeCurrentPage;
-(BOOL)overlayHidden;
-(BOOL)previousStatusBarHidden;
-(NSArray *)previewToolbarButtons;
-(NSArray *)excludedToolbarButtonIdentifiers;
-(UIAlertController *)doneButtonAlertController;
-(void)setDoneButtonAlertController:(UIAlertController *)arg1 ;
-(void)setInternalNavigationController:(UINavigationController *)arg1 ;
-(QLCustomURLSharingProxyDelegate *)customURLSharingProxyDelegate;
-(void)setCustomURLSharingProxyDelegate:(QLCustomURLSharingProxyDelegate *)arg1 ;
-(UIDocumentInteractionController *)sharingInteractionController;
-(void)setSharingInteractionController:(UIDocumentInteractionController *)arg1 ;
-(id<QLRemotePopoverTracker>)shareSheetPopoverTracker;
-(void)setShareSheetPopoverTracker:(id<QLRemotePopoverTracker>)arg1 ;
-(id)shareSheetDismissCompletion;
-(void)setShareSheetDismissCompletion:(id)arg1 ;
-(NSURL *)accessedUrlForDocumentInteractionController;
-(void)setAccessedUrlForDocumentInteractionController:(NSURL *)arg1 ;
-(UIPanGestureRecognizer *)slideGesture;
-(void)setOverlayHidden:(BOOL)arg1 ;
-(void)setCurrentOrbMode:(unsigned long long)arg1 ;
-(void)setCurrentPreviewItemIndex:(long long)arg1 ;
-(void)refreshCurrentPreviewItem;
-(id<QLPreviewItem>)currentPreviewItem;
-(void)_prepareDelayedAppearance;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setAllowInteractiveTransitions:(BOOL)arg1 ;
-(void)_registerForApplicationStateChangesNotifications;
-(BOOL)parentIsNavigationController;
-(void)_savePreviousNavigationVCState;
-(void)setPreviousStatusBarHidden:(BOOL)arg1 ;
-(void)setQuickLookVisibility:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(NSArray *)originalLeftBarButtonItems;
-(void)setOriginalLeftBarButtonItems:(NSArray *)arg1 ;
-(NSArray *)originalRightBarButtonItems;
-(void)setOriginalRightBarButtonItems:(NSArray *)arg1 ;
-(unsigned long long)_computePresentationMode;
-(void)_actionButtonTapped:(id)arg1 ;
-(void)setPrinter:(id<QLPrintingProtocol>)arg1 ;
-(id<QLPreviewControllerDataSource>)dataSource;
-(NSString *)currentTitleFromItemViewController;
-(void)setSlideGesture:(UIPanGestureRecognizer *)arg1 ;
-(void)setPinchGesture:(UIPinchGestureRecognizer *)arg1 ;
-(UIRotationGestureRecognizer *)rotationGesture;
-(void)setRotationGesture:(UIRotationGestureRecognizer *)arg1 ;
-(QLPinchRotationTracker *)pinchRotationTracker;
-(void)setPinchRotationTracker:(QLPinchRotationTracker *)arg1 ;
-(BOOL)canShowToolbar;
-(BOOL)canShowNavBar;
-(BOOL)currentPreviewHasRemoteUnsavedEdits;
-(BOOL)isObtainingEditsFromServiceBeforeDismissing;
-(void)setIsObtainingEditsFromServiceBeforeDismissing:(BOOL)arg1 ;
-(BOOL)useCustomActionButton;
-(BOOL)alwaysDisplayPreviewItemTitle;
-(void)setAlwaysDisplayPreviewItemTitle:(BOOL)arg1 ;
-(BOOL)showActionAsDefaultButton;
-(void)setForceModalPresentation:(BOOL)arg1 ;
-(NSArray *)additionalLeftBarButtonItems;
-(void)setAdditionalLeftBarButtonItems:(NSArray *)arg1 ;
-(NSArray *)additionalRightBarButtonItems;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setOverrideParentApplicationDisplayIdentifier:(NSString *)arg1 ;
-(NSString *)overrideParentApplicationDisplayIdentifier;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)currentPreviewItemIndex;
-(BOOL)_isInPickMode;
-(void)setDelegate:(id<QLPreviewControllerDelegate>)arg1 ;
-(void)_unregisterForApplicationStateChangesNotifications;
-(BOOL)hasItemsToPreview;
-(QLPreviewItemStore *)previewItemStore;
-(void)_showPreviewCollection;
-(void)_removePreviewCollectionFromViewHierarchy;
-(void)_presentLoadedPreviewCollection:(id)arg1 ;
-(void)_configurePreviewCollectionIfNeeded;
-(void)_invalidatePreviewCollectionIfNeededNow;
-(unsigned long long)appearanceActions;
-(QLToolbarController *)toolbarController;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)_actionButton;
-(QLStateManager *)stateManager;
-(void)screenshotService:(id)arg1 generatePDFRepresentationWithCompletion:(/*^block*/id)arg2 ;
-(long long)_preferredModalPresentationStyle;
-(void)loadView;
-(void)setToolbarTintColor:(UIColor *)arg1 ;
-(id<QLPreviewControllerDelegate>)strongDelegate;
-(void)beginInteractiveTransition;
-(void)_setPresentationMode:(unsigned long long)arg1 ;
-(void)_setPreferredWhitePointAdaptivityStyle:(long long)arg1 ;
-(void)_presentPreviewCollection;
-(BOOL)_isToolbarVisibleForTraitCollection:(id)arg1 ;
-(UINavigationController *)internalNavigationController;
-(void)updateOverlayAnimated:(BOOL)arg1 animatedButtons:(BOOL)arg2 forceRefresh:(BOOL)arg3 withTraitCollection:(id)arg4 ;
-(void)showNoDataViewIfNeeded;
-(void)_updateToolbarSuperview;
-(QLNavigationState *)previousNavigationVCState;
-(void)_notifyFirstAppearanceIfNeeded;
-(void)setCurrentAnimator:(QLTransitionController *)arg1 ;
-(void)_updateAppearance:(BOOL)arg1 ;
-(void)registerForScreenshotService;
-(BOOL)didTransitionFromInternalView;
-(BOOL)currentPreviewHasUnsavedEdits;
-(QLTransitionController *)currentAnimator;
-(void)setAppearanceActions:(unsigned long long)arg1 ;
-(void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1 ;
-(id)excludedActivityTypesForDocumentInteractionController:(id)arg1 ;
-(UIColor *)backgroundColor;
-(BOOL)isContentManaged;
-(id<QLPreviewControllerDelegate>)delegate;
-(id)_preferredBackgroundColor;
-(void)viewDidLoad;
-(UIColor *)navigationBarTintColor;
-(void)_doneButtonTapped:(id)arg1 ;
-(void)setForcedSupportedInterfaceOrientations:(unsigned long long)arg1 ;
@end

