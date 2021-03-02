/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <libobjc.A.dylib/_UISheetPresentationControllerDelegate.h>
#import <libobjc.A.dylib/SBHAddWidgetSheetViewControllerDelegate.h>
#import <libobjc.A.dylib/SBHWidgetWrapperViewControllerDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <libobjc.A.dylib/SBHWidgetSheetViewControlling.h>
#import <libobjc.A.dylib/SBHWidgetDragHandlerPassing.h>

@protocol SBHAddWidgetSheetViewControllerDelegate, SBHWidgetSheetViewControllerPresenter, SBIconListLayoutProvider, SBIconViewProviding;
@class UIViewController, NSArray, SBHAddWidgetSheetAppCollectionViewCellConfigurator, MTMaterialView, UICollectionView, SBHWidgetSearchController, UIButton, SBHWidgetAddSheetTransitionContext, NSString;

@interface SBHAddWidgetSheetViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UISearchResultsUpdating, _UISheetPresentationControllerDelegate, SBHAddWidgetSheetViewControllerDelegate, SBHWidgetWrapperViewControllerDelegate, UISearchControllerDelegate, SBHWidgetSheetViewControlling, SBHWidgetDragHandlerPassing> {

	UIViewController* _barSwipeViewController;
	id<SBHAddWidgetSheetViewControllerDelegate> _delegate;
	id<SBHWidgetSheetViewControllerPresenter> _presenter;
	NSArray* _suggestedItems;
	NSArray* _applicationWidgetCollections;
	id<SBIconListLayoutProvider> _listLayoutProvider;
	id<SBIconViewProviding> _iconViewProvider;
	SBHAddWidgetSheetAppCollectionViewCellConfigurator* _appCellConfigurator;
	MTMaterialView* _backgroundView;
	UICollectionView* _collectionView;
	SBHWidgetSearchController* _searchController;
	NSArray* _searchBarGradientMaskLayers;
	NSArray* _filteredApplicationWidgetCollections;
	NSArray* _galleryItems;
	UIButton* _closeButton;
	double _horizontalSpacing;
	double _searchBarHeightAdjustment;
	SBHWidgetAddSheetTransitionContext* _transitionContext;
	NSDirectionalEdgeInsets _contentInsets;
	NSDirectionalEdgeInsets _applicationsSectionInsets;
	CGRect _keyboardFrameIntersect;

}

@property (nonatomic,retain) id<SBIconListLayoutProvider> listLayoutProvider;                                       //@synthesize listLayoutProvider=_listLayoutProvider - In the implementation block
@property (nonatomic,retain) id<SBIconViewProviding> iconViewProvider;                                              //@synthesize iconViewProvider=_iconViewProvider - In the implementation block
@property (nonatomic,retain) SBHAddWidgetSheetAppCollectionViewCellConfigurator * appCellConfigurator;              //@synthesize appCellConfigurator=_appCellConfigurator - In the implementation block
@property (nonatomic,retain) MTMaterialView * backgroundView;                                                       //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                                     //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) SBHWidgetSearchController * searchController;                                          //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) NSArray * searchBarGradientMaskLayers;                                                 //@synthesize searchBarGradientMaskLayers=_searchBarGradientMaskLayers - In the implementation block
@property (nonatomic,retain) NSArray * filteredApplicationWidgetCollections;                                        //@synthesize filteredApplicationWidgetCollections=_filteredApplicationWidgetCollections - In the implementation block
@property (nonatomic,copy) NSArray * galleryItems;                                                                  //@synthesize galleryItems=_galleryItems - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                                                //@synthesize closeButton=_closeButton - In the implementation block
@property (assign,nonatomic) double horizontalSpacing;                                                              //@synthesize horizontalSpacing=_horizontalSpacing - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets contentInsets;                                                 //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets applicationsSectionInsets;                                     //@synthesize applicationsSectionInsets=_applicationsSectionInsets - In the implementation block
@property (assign,nonatomic) double searchBarHeightAdjustment;                                                      //@synthesize searchBarHeightAdjustment=_searchBarHeightAdjustment - In the implementation block
@property (assign,nonatomic) CGRect keyboardFrameIntersect;                                                         //@synthesize keyboardFrameIntersect=_keyboardFrameIntersect - In the implementation block
@property (nonatomic,retain) SBHWidgetAddSheetTransitionContext * transitionContext;                                //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,retain) UIViewController * barSwipeViewController;                                             //@synthesize barSwipeViewController=_barSwipeViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SBHAddWidgetSheetViewControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBHWidgetSheetViewControllerPresenter> presenter;                            //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,retain) NSArray * suggestedItems;                                                              //@synthesize suggestedItems=_suggestedItems - In the implementation block
@property (nonatomic,retain) NSArray * applicationWidgetCollections;                                                //@synthesize applicationWidgetCollections=_applicationWidgetCollections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<SBHWidgetDragHandling> widgetDragHandler; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setTransitionContext:(SBHWidgetAddSheetTransitionContext *)arg1 ;
-(void)setListLayoutProvider:(id<SBIconListLayoutProvider>)arg1 ;
-(void)setIconViewProvider:(id<SBIconViewProviding>)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id<SBIconListLayoutProvider>)listLayoutProvider;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)setContentInsets:(NSDirectionalEdgeInsets)arg1 ;
-(id<SBHWidgetSheetViewControllerPresenter>)presenter;
-(void)setBackgroundView:(MTMaterialView *)arg1 ;
-(void)setPresenter:(id<SBHWidgetSheetViewControllerPresenter>)arg1 ;
-(NSDirectionalEdgeInsets)contentInsets;
-(SBHWidgetSearchController *)searchController;
-(void)_updateCollectionViewInsets;
-(void)_keyboardWillShow:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)scrollViewDidScroll:(id)arg1 ;
-(MTMaterialView *)backgroundView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)_sizeClasses;
-(void)_makeGalleryItemsFromHomeScreenItems:(id)arg1 ;
-(unsigned long long)_sectionIndexForSection:(unsigned long long)arg1 ;
-(id)_collectionViewLayoutGallerySectionWithWidth:(double)arg1 sizeClasses:(id)arg2 ;
-(void)_updateSearchBarContentInsets;
-(NSArray *)galleryItems;
-(id)_collectionViewLayoutApplicationsSectionWithWidth:(double)arg1 ;
-(void)_layoutSearchBarGradientMaskLayers;
-(void)_backgroundTapped:(id)arg1 ;
-(void)_addBarSwipeView;
-(void)addWidgetSheetViewControllerWillAppear:(id)arg1 ;
-(void)_keyboardWillDismiss:(id)arg1 ;
-(void)addWidgetSheetViewControllerDidAppear:(id)arg1 ;
-(void)addWidgetSheetViewControllerWillDisappear:(id)arg1 ;
-(void)addWidgetSheetViewControllerDidDisappear:(id)arg1 ;
-(BOOL)_isSearchVisible;
-(id)applicationWidgetCollectionsToUse;
-(id)_collectionViewGalleryCellForItemAtIndexPath:(id)arg1 ;
-(BOOL)_shouldUseTableViewCellStyle;
-(void)_presentDetailSheetForGalleryCellAtIndexPath:(id)arg1 ;
-(void)_presentDetailSheetViewControllerForApplicationWidgetCollection:(id)arg1 ;
-(id)_currentPresenter;
-(void)_presentDetailSheetViewControllerForApplicationWidgetCollection:(id)arg1 configuredWithGalleryItem:(id)arg2 selectedSizeClass:(long long)arg3 fromCell:(id)arg4 atIndexPath:(id)arg5 ;
-(id)_newWrapperViewControllerWithGalleryItem:(id)arg1 sizeClass:(long long)arg2 ;
-(void)setGalleryItems:(NSArray *)arg1 ;
-(id)_itemsArrayWithSizeClasses:(id)arg1 nSmallsGroup:(id)arg2 mediumAndSmallGroup:(id)arg3 usesThreeColumnLayout:(BOOL)arg4 ;
-(id)initWithListLayoutProvider:(id)arg1 iconViewProvider:(id)arg2 suggestedItems:(id)arg3 ;
-(void)setBarSwipeViewController:(UIViewController *)arg1 ;
-(UIViewController *)barSwipeViewController;
-(NSArray *)applicationWidgetCollections;
-(void)setApplicationWidgetCollections:(NSArray *)arg1 ;
-(NSArray *)searchBarGradientMaskLayers;
-(void)setSearchBarGradientMaskLayers:(NSArray *)arg1 ;
-(NSArray *)filteredApplicationWidgetCollections;
-(void)setFilteredApplicationWidgetCollections:(NSArray *)arg1 ;
-(double)horizontalSpacing;
-(void)setHorizontalSpacing:(double)arg1 ;
-(CGRect)keyboardFrameIntersect;
-(NSDirectionalEdgeInsets)applicationsSectionInsets;
-(void)setApplicationsSectionInsets:(NSDirectionalEdgeInsets)arg1 ;
-(double)searchBarHeightAdjustment;
-(void)setSearchBarHeightAdjustment:(double)arg1 ;
-(void)setKeyboardFrameIntersect:(CGRect)arg1 ;
-(void)setCloseButton:(UIButton *)arg1 ;
-(void)setSuggestedItems:(NSArray *)arg1 ;
-(NSArray *)suggestedItems;
-(UIButton *)closeButton;
-(void)presentationControllerWillDismiss:(id)arg1 ;
-(id<SBIconViewProviding>)iconViewProvider;
-(void)viewDidLayoutSubviews;
-(void)setSearchController:(SBHWidgetSearchController *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didDismissSearchController:(id)arg1 ;
-(SBHWidgetAddSheetTransitionContext *)transitionContext;
-(UICollectionView *)collectionView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setDelegate:(id<SBHAddWidgetSheetViewControllerDelegate>)arg1 ;
-(void)addWidgetSheetViewControllerDidCancel:(id)arg1 ;
-(void)addWidgetSheetViewController:(id)arg1 didSelectWidgetIconView:(id)arg2 ;
-(id<SBHWidgetDragHandling>)widgetDragHandler;
-(SBHAddWidgetSheetAppCollectionViewCellConfigurator *)appCellConfigurator;
-(void)setAppCellConfigurator:(SBHAddWidgetSheetAppCollectionViewCellConfigurator *)arg1 ;
-(void)loadView;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(id<SBHAddWidgetSheetViewControllerDelegate>)delegate;
-(void)viewWillLayoutSubviews;
-(void)closeButtonTapped:(id)arg1 ;
@end
