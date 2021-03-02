/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBHTableViewController.h>
#import <libobjc.A.dylib/SBIconObserver.h>
#import <libobjc.A.dylib/SBIconViewObserver.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <UIKit/UITableViewDelegatePrivate.h>
#import <UIKit/UITableViewDragDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBHTableViewIconLibraryObserver.h>
#import <libobjc.A.dylib/SBHLibraryChildViewController.h>
#import <libobjc.A.dylib/SBHSearchResultsUpdating.h>

@protocol SBIconListLayoutProvider, SBIconViewProviding, SBHIconLibraryTableViewControllerObserver;
@class SBHLibrarySearchController, ATXAppDirectoryClient, NSHashTable, NSMapTable, SBHAppLibrarySettings, SBIconView, _UILegibilitySettings, SBHIconTableViewDiffableDataSource, SBHIconImageCache, SBHIconModel, SBRootFolder, SBHLibraryCategoryMap, UIView, SBHTableViewIconLibrary, SBHIconLibraryQuery, NSString, SBFolderIconImageCache, NSSet;

@interface SBHIconLibraryTableViewController : SBHTableViewController <SBIconObserver, SBIconViewObserver, PTSettingsKeyObserver, UITableViewDelegatePrivate, UITableViewDragDelegate, UIGestureRecognizerDelegate, SBHTableViewIconLibraryObserver, SBHLibraryChildViewController, SBHSearchResultsUpdating> {

	BOOL _showHeaders;
	BOOL _needsLowQualityAlphaFade;
	ATXAppDirectoryClient* _appDirectoryClient;
	NSHashTable* _grabbedIconViews;
	NSHashTable* _observedIcons;
	NSMapTable* _dragSessionsForIconView;
	SBHAppLibrarySettings* _settings;
	BOOL _hasAppeared;
	SBIconView* _cachedHiddenIconView;
	_UILegibilitySettings* _legibilitySettings;
	SBHIconTableViewDiffableDataSource* _dataSource;
	SBHIconImageCache* _iconImageCache;
	id<SBIconListLayoutProvider> _listLayoutProvider;
	SBHLibrarySearchController* _searchController;
	id<SBIconViewProviding> _iconViewProvider;
	id<SBHIconLibraryTableViewControllerObserver> _observer;
	SBHIconModel* _iconModel;
	SBRootFolder* _rootFolder;
	SBHLibraryCategoryMap* _libraryCategoryMap;
	UIView* _headerBlurView;
	SBHTableViewIconLibrary* _library;
	SBHIconLibraryQuery* _currentQuery;

}

@property (nonatomic,readonly) SBHTableViewIconLibrary * library;                                        //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) SBHIconLibraryQuery * currentQuery;                                       //@synthesize currentQuery=_currentQuery - In the implementation block
@property (nonatomic,readonly) SBHIconTableViewDiffableDataSource * dataSource;                          //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) id<SBIconViewProviding> iconViewProvider;                                   //@synthesize iconViewProvider=_iconViewProvider - In the implementation block
@property (assign,nonatomic,__weak) id<SBHIconLibraryTableViewControllerObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,retain) SBHIconModel * iconModel;                                                   //@synthesize iconModel=_iconModel - In the implementation block
@property (nonatomic,retain) SBRootFolder * rootFolder;                                                  //@synthesize rootFolder=_rootFolder - In the implementation block
@property (nonatomic,retain) SBHLibraryCategoryMap * libraryCategoryMap;                                 //@synthesize libraryCategoryMap=_libraryCategoryMap - In the implementation block
@property (nonatomic,retain) UIView * headerBlurView;                                                    //@synthesize headerBlurView=_headerBlurView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SBHIconImageCache * iconImageCache;                                         //@synthesize iconImageCache=_iconImageCache - In the implementation block
@property (nonatomic,retain) id<SBIconListLayoutProvider> listLayoutProvider;                            //@synthesize listLayoutProvider=_listLayoutProvider - In the implementation block
@property (nonatomic,retain) SBFolderIconImageCache * folderIconImageCache; 
@property (nonatomic,copy,readonly) NSSet * presentedIconLocations; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                 //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic,__weak) SBHLibrarySearchController * searchController;                       //@synthesize searchController=_searchController - In the implementation block
+(Class)tableViewClass;
-(BOOL)isPresentingIconLocation:(id)arg1 ;
-(void)setRootFolder:(SBRootFolder *)arg1 ;
-(SBHTableViewIconLibrary *)library;
-(void)setIconModel:(SBHIconModel *)arg1 ;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setListLayoutProvider:(id<SBIconListLayoutProvider>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setIconViewProvider:(id<SBIconViewProviding>)arg1 ;
-(id<SBIconListLayoutProvider>)listLayoutProvider;
-(id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2 ;
-(BOOL)isDisplayingIconView:(id)arg1 inLocation:(id)arg2 ;
-(SBHIconModel *)iconModel;
-(SBHIconImageCache *)iconImageCache;
-(BOOL)isDisplayingIcon:(id)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(id)init;
-(id)iconViewForIcon:(id)arg1 location:(id)arg2 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)firstIconViewForIcon:(id)arg1 ;
-(SBHLibrarySearchController *)searchController;
-(/*^block*/id)_iconFilter;
-(id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(CGPoint)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)iconAccessoriesDidUpdate:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2 ;
-(BOOL)isDisplayingIconView:(id)arg1 ;
-(void)_updateHiddenIconViewForScrolling:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)_findHiddenIconView;
-(BOOL)isDisplayingIcon:(id)arg1 inLocations:(id)arg2 ;
-(id<SBHIconLibraryTableViewControllerObserver>)observer;
-(void)_setupObservedIcons;
-(void)_handleDidTapEmptyResultsArea:(id)arg1 ;
-(void)_updateTableViewSeparatorsForTraitCollection;
-(void)_reloadAppIcons:(BOOL)arg1 ;
-(void)_teardownObservedIcons;
-(void)_configureCell:(id)arg1 forIcon:(id)arg2 ;
-(void)_handleAlphaFadeForCellAtIndexPath:(id)arg1 ;
-(void)_updateShowHeadersFromQueryResult:(id)arg1 ;
-(void)_reloadVisibleCells;
-(id)_iconViewAtIndexPath:(id)arg1 ;
-(void)_logLaunchOfIcon:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)_observeIcon:(id)arg1 ;
-(void)_unobserveIcon:(id)arg1 ;
-(void)_handleLowQualityAlphaFade;
-(void)_refreshLibraryForSearchUpdate:(BOOL)arg1 ;
-(id)_indexPathForDefaultSearchResult;
-(BOOL)_isIndexPathVisible:(id)arg1 ;
-(id)_visibleIcons;
-(id)_visibleSectionIndicies;
-(id)_iconViewForIcon:(id)arg1 ;
-(void)_refreshIconIfVisible:(id)arg1 ;
-(BOOL)_startObservingIcon:(id)arg1 ;
-(void)_stopObservingIcon:(id)arg1 ;
-(id)_processDragItemsForIconView:(id)arg1 session:(id)arg2 ;
-(id)_iconViewForDragSession:(id)arg1 ;
-(void)_resetDragSession:(id)arg1 ;
-(void)_mapIconView:(id)arg1 forDragSession:(id)arg2 ;
-(BOOL)_shouldShowNoResultsViewForQueryResult:(id)arg1 ;
-(id)_visibleIndexPaths;
-(void)_reloadRowsAtIndexPaths:(id)arg1 ;
-(id)_createIconView;
-(void)_notifyDelegatesOfAppLaunchFromSearchController:(id)arg1 ;
-(void)_iconModelWillReload:(id)arg1 ;
-(void)_refreshLibrary:(id)arg1 ;
-(id)_dragSessionForIconView:(id)arg1 ;
-(void)setHeaderBlurView:(UIView *)arg1 ;
-(NSSet *)presentedIconLocations;
-(void)enumerateDisplayedIconViewsUsingBlock:(/*^block*/id)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setIconImageCache:(SBHIconImageCache *)arg1 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(SBHLibraryCategoryMap *)libraryCategoryMap;
-(void)setLibraryCategoryMap:(SBHLibraryCategoryMap *)arg1 ;
-(void)iconLibrary:(id)arg1 hasUpdatedQueryResult:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(SBRootFolder *)rootFolder;
-(id)initWithCoder:(id)arg1 ;
-(id<SBIconViewProviding>)iconViewProvider;
-(void)setSearchController:(SBHLibrarySearchController *)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(UIView *)headerBlurView;
-(BOOL)searchControllerShouldReturn:(id)arg1 ;
-(void)_handleClippingScrollViewDidScroll:(id)arg1 ;
-(void)setObserver:(id<SBHIconLibraryTableViewControllerObserver>)arg1 ;
-(CGRect)tableView:(id)arg1 frameForSectionIndexGivenProposedFrame:(CGRect)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(SBHIconLibraryQuery *)currentQuery;
-(SBHIconTableViewDiffableDataSource *)dataSource;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)tableView:(id)arg1 dragSessionWillBegin:(id)arg2 ;
-(id)tableView:(id)arg1 dragPreviewParametersForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 dragSessionDidEnd:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 dragSessionAllowsMoveOperation:(id)arg2 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)iconViewWillBeginDrag:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)iconViewDidEndDrag:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)_isViewControllerVisible;
@end
