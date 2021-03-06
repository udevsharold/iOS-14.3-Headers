/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/SBHIconRootViewProviding.h>

@class SBFolder, UIView, _UILegibilitySettings, UIViewController, SBFolderIconImageCache, SBHIconImageCache, NSSet, NSString;

@interface SBHIconRootTableViewController : UITableViewController <SBHIconRootViewProviding> {

	SBFolder* _folder;
	_UILegibilitySettings* _legibilitySettings;
	SBFolderIconImageCache* _folderIconImageCache;
	SBHIconImageCache* _iconImageCache;

}

@property (nonatomic,retain) SBFolder * folder;                                          //@synthesize folder=_folder - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                 //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) UIViewController * deepestFolderController; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (getter=isScrolling,nonatomic,readonly) BOOL scrolling; 
@property (getter=isScrollTracking,nonatomic,readonly) BOOL scrollTracking; 
@property (assign,nonatomic) long long currentPageIndex; 
@property (nonatomic,retain) SBFolderIconImageCache * folderIconImageCache;              //@synthesize folderIconImageCache=_folderIconImageCache - In the implementation block
@property (nonatomic,retain) SBHIconImageCache * iconImageCache;                         //@synthesize iconImageCache=_iconImageCache - In the implementation block
@property (nonatomic,copy,readonly) NSSet * presentedIconLocations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPresentingIconLocation:(id)arg1 ;
-(void)setIdleText:(id)arg1 ;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2 ;
-(BOOL)isDisplayingIconView:(id)arg1 inLocation:(id)arg2 ;
-(SBHIconImageCache *)iconImageCache;
-(void)setFolderIconImageCache:(SBFolderIconImageCache *)arg1 ;
-(void)setCurrentPageIndex:(long long)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setFolder:(SBFolder *)arg1 ;
-(id)iconViewForIcon:(id)arg1 location:(id)arg2 ;
-(id)firstIconViewForIcon:(id)arg1 ;
-(void)revealIcon:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2 ;
-(long long)currentPageIndex;
-(void)cancelScrolling;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2 ;
-(BOOL)isDisplayingIconView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)isDisplayingIcon:(id)arg1 inLocations:(id)arg2 ;
-(NSSet *)presentedIconLocations;
-(void)enumerateDisplayedIconViewsUsingBlock:(/*^block*/id)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(BOOL)isScrolling;
-(void)setIconImageCache:(SBHIconImageCache *)arg1 ;
-(SBFolderIconImageCache *)folderIconImageCache;
-(BOOL)isEditing;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(SBFolder *)folder;
-(void)noteUserIsInteractingWithIcons;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(UIView *)contentView;
-(BOOL)isScrollTracking;
-(void)viewDidLoad;
-(UIViewController *)deepestFolderController;
@end

