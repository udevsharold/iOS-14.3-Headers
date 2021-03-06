/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, NSArray;


@protocol SBSHomeScreenServiceClientToServerInterface
@property (nonatomic,copy) NSNumber * lowDensityIconLayoutEnabledValue; 
@property (nonatomic,copy) NSNumber * addsNewIconsToHomeScreenValue; 
@property (nonatomic,copy) NSNumber * showsBadgesInAppLibraryValue; 
@property (nonatomic,copy,readonly) NSArray * allHomeScreenApplicationBundleIdentifiers; 
@property (nonatomic,copy,readonly) NSArray * allHomeScreenApplicationPlaceholderBundleIdentifiers; 
@required
-(void)runRemoveAndRestoreIconTest;
-(void)setLowDensityIconLayoutEnabledValue:(id)arg1;
-(void)changeDisplayedDateOffsetOverride:(id)arg1;
-(void)organizeAllIconsIntoFoldersWithPageCount:(id)arg1;
-(void)removeAllWidgets;
-(id)folderPathToIconWithBundleIdentifier:(id)arg1;
-(void)addWidgetToTodayViewWithBundleIdentifier:(id)arg1;
-(void)reloadIcons;
-(NSArray *)allHomeScreenApplicationBundleIdentifiers;
-(NSNumber *)lowDensityIconLayoutEnabledValue;
-(void)setShowsBadgesInAppLibraryValue:(id)arg1;
-(oneway void)forbidApplicationBundleIdentifierFromLibrary:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(oneway void)requestSuggestedApplicationWithBundleIdentifier:(id)arg1 assertionPort:(id)arg2 completion:(/*^block*/id)arg3;
-(id)configureCategoryMapProviderToUseCategoryMapAtURL:(id)arg1;
-(void)overrideBadgeValue:(id)arg1 forBundleIdentifier:(id)arg2;
-(BOOL)debugContinuityWithBadgeType:(id)arg1;
-(void)refreshAppLibrary:(id)arg1 reason:(id)arg2;
-(void)configureDeweyOneCategoryWithAllApps;
-(void)organizeAllIconsAcrossPagesWithPageCount:(id)arg1;
-(NSArray *)allHomeScreenApplicationPlaceholderBundleIdentifiers;
-(NSNumber *)showsBadgesInAppLibraryValue;
-(oneway void)unforbidApplicationBundleIdentifierFromLibrary:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)runDownloadingIconTest;
-(void)configureDeweyEachAppHasItsOwnCategory;
-(oneway void)resetCategoriesLayoutWithCompletion:(/*^block*/id)arg1;
-(void)changeDisplayedDateOverride:(id)arg1;
-(void)setAddsNewIconsToHomeScreenValue:(id)arg1;
-(void)requestAppLibraryUpdate:(id)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)hasWidgetWithBundleIdentifier:(id)arg1;
-(oneway void)runFloatingDockStressTestWithCompletion:(/*^block*/id)arg1;
-(oneway void)resetHomeScreenLayoutWithCompletion:(/*^block*/id)arg1;
-(void)ignoreAllApps;
-(NSNumber *)addsNewIconsToHomeScreenValue;

@end

