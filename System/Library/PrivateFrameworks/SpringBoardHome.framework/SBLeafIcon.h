/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBIcon.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SBLeafIconDataSource;
@class NSString, NSMutableOrderedSet, NSArray;

@interface SBLeafIcon : SBIcon <NSCopying> {

	NSString* _leafIdentifier;
	NSString* _applicationBundleID;
	NSMutableOrderedSet* _dataSources;
	id<SBLeafIconDataSource> _activeDataSource;
	id<SBLeafIconDataSource> _manuallySetDataSource;
	id<SBLeafIconDataSource> _dataSourceAtUninstallation;
	unsigned long long _coalescedDataSourceUpdates;

}

@property (nonatomic,copy,readonly) NSString * sbh_iconLibraryItemIdentifier; 
@property (getter=_bestDataSource,nonatomic,readonly) id<SBLeafIconDataSource> bestDataSource; 
@property (getter=_fallbackBestDataSource,nonatomic,readonly) id<SBLeafIconDataSource> fallbackBestDataSource; 
@property (nonatomic,copy,readonly) NSString * applicationBundleID; 
@property (nonatomic,retain) id<SBLeafIconDataSource> activeDataSource; 
@property (nonatomic,copy,readonly) NSArray * iconDataSources; 
@property (nonatomic,readonly) id<SBLeafIconDataSource> firstIconDataSource; 
@property (nonatomic,readonly) id<SBLeafIconDataSource> lastIconDataSource; 
@property (nonatomic,readonly) unsigned long long iconDataSourceCount; 
+(Class)downloadingIconClass;
+(id)iconImageForDataSource:(id)arg1 ofIcon:(id)arg2 info:(SBIconImageInfo)arg3 ;
+(id)formattedBadgeNumberOrString:(id)arg1 ;
-(id<SBLeafIconDataSource>)activeDataSource;
-(BOOL)isUninstallSupported;
-(BOOL)isTimedOut;
-(NSArray *)iconDataSources;
-(id)displayNameForLocation:(id)arg1 ;
-(id)init;
-(double)progressPercent;
-(NSString *)applicationBundleID;
-(long long)progressState;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isLaunchEnabled;
-(BOOL)isLaunchDisabledForObscuredReason;
-(id)displayNameForObscuredDisabledLaunchForLocation:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(long long)accessoryTypeForLocation:(id)arg1 ;
-(void)setActiveDataSource:(id<SBLeafIconDataSource>)arg1 ;
-(unsigned long long)supportedGridSizeClasses;
-(void)launchFromLocation:(id)arg1 context:(id)arg2 ;
-(id)genericIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(void)dealloc;
-(long long)labelAccessoryType;
-(id)initWithLeafIdentifier:(id)arg1 applicationBundleID:(id)arg2 ;
-(void)addIconDataSource:(id)arg1 ;
-(void)removeIconDataSource:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BOOL)isProgressPaused;
-(unsigned long long)hash;
-(BOOL)supportsRasterization;
-(unsigned long long)iconDataSourceCount;
-(void)_noteActiveDataSourceDidChangeAndReloadIcon:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id<SBLeafIconDataSource>)firstIconDataSource;
-(BOOL)hasIconDataSource:(id)arg1 ;
-(BOOL)hasObserver:(id)arg1 ;
-(void)setUninstalled;
-(void)completeUninstall;
-(id)badgeNumberOrString;
-(void)insertIconDataSource:(id)arg1 beforeIconDataSource:(id)arg2 ;
-(void)insertIconDataSources:(id)arg1 atIndexes:(id)arg2 ;
-(void)replaceIconDataSource:(id)arg1 withIconDataSource:(id)arg2 ;
-(id)unmaskedIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(void)enumerateObserversUsingBlock:(/*^block*/id)arg1 ;
-(id)generateIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(NSString *)sbh_iconLibraryItemIdentifier;
-(BOOL)isLeafIcon;
-(id)leafIdentifier;
-(void)addIconDataSources:(id)arg1 ;
-(id)firstIconDataSourcePassingTest:(/*^block*/id)arg1 ;
-(id)iconDataSourcesOfClass:(Class)arg1 ;
-(id)_fallbackBestDataSource;
-(void)didAddIconDataSource:(id)arg1 ;
-(void)didRemoveIconDataSource:(id)arg1 ;
-(id)copyWithLeafIdentifier:(id)arg1 ;
-(void)_updateActiveDataSource;
-(id)_bestDataSource;
-(void)_noteActiveDataSourceDidChangeNotification:(id)arg1 ;
-(void)_noteActiveDataSourceDidGenerateImageNotification:(id)arg1 ;
-(void)didChangeActiveDataSource:(id)arg1 ;
-(void)_noteDataSourceDidInvalidateNotification:(id)arg1 ;
-(BOOL)canTruncateLabel;
-(BOOL)canTightenLabel;
-(id)accessoryTextForLocation:(id)arg1 ;
-(void)performCoalescedDataSourceUpdate:(/*^block*/id)arg1 ;
-(void)selectNextActiveDataSource;
-(void)removeIconDataSourcesOfClass:(Class)arg1 ;
-(id<SBLeafIconDataSource>)lastIconDataSource;
-(id)firstIconDataSourceOfClass:(Class)arg1 ;
-(id)firstIconDataSourceWithUniqueIdentifier:(id)arg1 ;
-(id)nodeIdentifier;
@end
