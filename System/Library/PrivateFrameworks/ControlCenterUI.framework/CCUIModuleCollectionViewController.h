/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CCUIModuleInstanceManagerObserver.h>
#import <libobjc.A.dylib/CCUIModuleSettingsManagerObserver.h>
#import <libobjc.A.dylib/CCUILayoutViewLayoutSource.h>
#import <libobjc.A.dylib/CCUIContentModuleContainerViewControllerDelegate.h>
#import <libobjc.A.dylib/CCUISafeAppearancePropagationProvider.h>

@protocol OS_dispatch_group, CCUIModuleCollectionViewControllerDelegate;
@class NSArray, CCUIModuleInstanceManager, CCUIModuleSettingsManager, CCUIControlCenterPositionProvider, CCUILayoutOptions, NSDictionary, NSHashTable, NSObject, NSString, CCUIModuleCollectionView;

@interface CCUIModuleCollectionViewController : UIViewController <CCUIModuleInstanceManagerObserver, CCUIModuleSettingsManagerObserver, CCUILayoutViewLayoutSource, CCUIContentModuleContainerViewControllerDelegate, CCUISafeAppearancePropagationProvider> {

	CCUIModuleInstanceManager* _moduleManager;
	CCUIModuleSettingsManager* _settingsManager;
	CCUIControlCenterPositionProvider* _portraitPositionProvider;
	CCUIControlCenterPositionProvider* _landscapePositionProvider;
	CCUILayoutOptions* _layoutOptions;
	NSDictionary* _moduleViewControllerByIdentifier;
	NSDictionary* _moduleContainerViewByIdentifier;
	NSHashTable* _homeGestureDismissalAllowedModules;
	NSHashTable* _currentModules;
	NSHashTable* _expandedModules;
	NSObject*<OS_dispatch_group> _moduleCloseDispatchGroup;
	NSString* _topmostModuleIdentifier;
	NSArray* _portraitDoubleMarginIndices;
	NSArray* _landscapeDoubleMarginIndices;
	BOOL _pendingModulePopulation;
	BOOL _pendingModulePositionProviderRefresh;
	BOOL _homeGestureDismissalAllowed;
	id<CCUIModuleCollectionViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long expandedModuleCount; 
@property (getter=isHomeGestureDismissalAllowed,nonatomic,readonly) BOOL homeGestureDismissalAllowed;              //@synthesize homeGestureDismissalAllowed=_homeGestureDismissalAllowed - In the implementation block
@property (nonatomic,retain) CCUIModuleCollectionView * moduleCollectionView; 
@property (assign,nonatomic,__weak) id<CCUIModuleCollectionViewControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * childViewControllersForAppearancePropagation; 
-(void)willResignActive;
-(void)displayWillTurnOff;
-(long long)_interfaceOrientation;
-(void)dismissExpandedModuleAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)expandModuleWithIdentifier:(id)arg1 ;
-(void)moduleInstancesChangedForModuleInstanceManager:(id)arg1 ;
-(void)dismissPresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)_currentLayoutOptions;
-(BOOL)ccui_shouldPropagateAppearanceCalls;
-(void)_updateModuleControllers;
-(void)contentModuleContainerViewControllerDismissPresentedContent:(id)arg1 ;
-(CGSize)preferredContentSize;
-(NSArray *)childViewControllersForAppearancePropagation;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(id)queryAllTopLevelBlockingGestureRecognizers;
-(void)contentModuleContainerViewController:(id)arg1 willCloseExpandedModule:(id)arg2 ;
-(void)contentModuleContainerViewController:(id)arg1 didCloseExpandedModule:(id)arg2 ;
-(void)moduleInstancesLayoutChangedForModuleInstanceManager:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)contentModuleContainerViewController:(id)arg1 willDismissViewController:(id)arg2 ;
-(id)horizontalDoubleMarginIndicesForLayoutView:(id)arg1 ;
-(id)_positionProviderForInterfaceOrientation:(long long)arg1 ;
-(void)_removeAndTearDownModuleViewControllerFromHierarchy:(id)arg1 ;
-(void)setModuleCollectionView:(CCUIModuleCollectionView *)arg1 ;
-(void)_updateHomeGestureDismissalAllowed;
-(BOOL)isModuleExpandedForIdentifier:(id)arg1 ;
-(id)relevantSnapHeightsForOrientation:(long long)arg1 ;
-(id)_activePositionProvider;
-(BOOL)isHomeGestureDismissalAllowed;
-(void)_refreshPositionProvidersIfNecessary;
-(id)_setupAndAddModuleViewControllerToHierarchy:(id)arg1 ;
-(void)_refreshPositionProviders;
-(void)_updateEnabledModuleIdentifiers;
-(id)verticalDoubleMarginIndicesForLayoutView:(id)arg1 ;
-(id)topmostModuleView;
-(id)_doubleMarginIndicesForModuleIdentifiers:(id)arg1 moduleInstanceByIdentifier:(id)arg2 interfaceOrientation:(long long)arg3 ;
-(id)_moduleInstances;
-(void)_beginAppearanceTransition:(BOOL)arg1 affectedModule:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)isAtMaxHeight;
-(BOOL)contentModuleContainerViewController:(id)arg1 canBeginInteractionWithModule:(id)arg2 ;
-(void)_populateModulesIfNecessary;
-(id)initWithModuleInstanceManager:(id)arg1 ;
-(id)_sizesForModuleIdentifiers:(id)arg1 moduleInstanceByIdentifier:(id)arg2 interfaceOrientation:(long long)arg3 ;
-(void)contentModuleContainerViewController:(id)arg1 didFinishInteractionWithModule:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(CGRect)compactModeFrameForContentModuleContainerViewController:(id)arg1 ;
-(void)contentModuleContainerViewController:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)orderedEnabledModuleIdentifiersChangedForSettingsManager:(id)arg1 ;
-(void)setDelegate:(id<CCUIModuleCollectionViewControllerDelegate>)arg1 ;
-(void)_populateModuleViewControllers;
-(CCUIModuleCollectionView *)moduleCollectionView;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)loadView;
-(void)willBecomeActive;
-(void)_updatePositionProviders;
-(unsigned long long)expandedModuleCount;
-(CCUILayoutSize)layoutSizeForLayoutView:(id)arg1 ;
-(void)didUpdateHomeGestureDismissalAllowed:(BOOL)arg1 forModuleWithIdentifier:(id)arg2 ;
-(void)contentModuleContainerViewController:(id)arg1 didOpenExpandedModule:(id)arg2 ;
-(void)contentModuleContainerViewController:(id)arg1 willOpenExpandedModule:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)contentModuleContainerViewController:(id)arg1 didBeginInteractionWithModule:(id)arg2 ;
-(CCUILayoutRect)layoutView:(id)arg1 layoutRectForSubview:(id)arg2 ;
-(id<CCUIModuleCollectionViewControllerDelegate>)delegate;
-(void)viewDidLoad;
@end

