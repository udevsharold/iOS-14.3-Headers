/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SBHIconModel.h>

@protocol SBIconModelApplicationDataSource;
@interface SBIconModel : SBHIconModel {

	BOOL _iconsHaveBeenLoadedOnce;
	BOOL _createsIconsForInternalApps;
	id<SBIconModelApplicationDataSource> _applicationDataSource;
	BOOL _allowsWebClips;

}

@property (nonatomic,readonly) id<SBIconModelApplicationDataSource> applicationDataSource;              //@synthesize applicationDataSource=_applicationDataSource - In the implementation block
@property (assign,nonatomic) BOOL allowsWebClips;                                                       //@synthesize allowsWebClips=_allowsWebClips - In the implementation block
+(id)migratedIdentifierForLeafIdentifier:(id)arg1 ;
-(void)adjustIconsToShow:(id)arg1 iconsToHide:(id)arg2 afterChangeToVisibleIconTags:(id)arg3 hiddenIconTags:(id)arg4 ;
-(id)exportFlattenedState:(BOOL)arg1 includeMissingIcons:(BOOL)arg2 ;
-(id)applicationWithBundleIdentifier:(id)arg1 ;
-(void)localeChanged;
-(id)addBookmarkIconForWebClip:(id)arg1 ;
-(void)willLayout;
-(id)modernizeRootArchive:(id)arg1 ;
-(id)expectedIconForDisplayIdentifier:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(void)dealloc;
-(id)bookmarkIconForWebClipIdentifier:(id)arg1 ;
-(id)exportPendingState:(BOOL)arg1 includeMissingIcons:(BOOL)arg2 ;
-(void)updateExistingBookmarkIcon:(id)arg1 forUpdatedWebClip:(id)arg2 ;
-(id)indexPathForIconInPlatformState:(id)arg1 ;
-(id)applicationIconForBundleIdentifier:(id)arg1 ;
-(id)initWithStore:(id)arg1 applicationDataSource:(id)arg2 ;
-(id)exportState:(BOOL)arg1 ;
-(id)addIconForApplication:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)isIconVisible:(id)arg1 ;
-(id)addIconForApplication:(id)arg1 ;
-(id)description;
-(BOOL)allowsWebClips;
-(id)_applicationIcons;
-(BOOL)_shouldSkipAddingIcon:(id)arg1 toRootFolder:(id)arg2 ;
-(void)loadAllIcons;
-(id<SBIconModelApplicationDataSource>)applicationDataSource;
-(void)_replaceAppIconsWithDownloadingIcons:(id)arg1 ;
-(BOOL)shouldAvoidPlacingIconOnFirstPage:(id)arg1 ;
-(id)addDownloadingIconForDownload:(id)arg1 ;
-(BOOL)shouldAvoidCreatingIconForApplication:(id)arg1 ;
-(BOOL)importState:(id)arg1 ;
-(void)_noteApplicationIconImageChanged:(id)arg1 ;
-(void)_replaceAppIconsWithDownloadingIcons;
-(id)forecastedLayoutForIconState:(id)arg1 includeMissingIcons:(BOOL)arg2 ;
-(id)placeholdersByDisplayID;
-(id)expectedIconForDisplayIdentifier:(id)arg1 ;
-(void)setAllowsWebClips:(BOOL)arg1 ;
@end

