/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUITableViewController.h>
#import <SearchUI/SearchUITableHeaderViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SearchUI/SearchUIShowMoreSectionsDelegate.h>

@class NSString, NSMutableSet, NSArray, NSMutableOrderedSet;

@interface SearchUIResultsTableViewController : SearchUITableViewController <SearchUITableHeaderViewDelegate, UIGestureRecognizerDelegate, SearchUIShowMoreSectionsDelegate> {

	BOOL _shortenTopFloatingHeader;
	NSString* _queryString;
	NSMutableSet* _expandedSections;
	NSMutableSet* _sectionsThatHaveBeenExpanded;
	NSArray* _hiddenSections;
	NSMutableSet* _potentiallyVisibleCells;
	NSMutableOrderedSet* _latestVisibleResultsAccountedForInFeedback;
	unsigned long long _lastVisibleResultsFeedbackEvent;
	NSMutableOrderedSet* _potentiallyVisibleHeaders;
	NSArray* _latestVisibleHeadersAccountedForInFeedback;
	double _cachedHeaderHeight;

}

@property (nonatomic,retain) NSMutableSet * expandedSections;                                               //@synthesize expandedSections=_expandedSections - In the implementation block
@property (nonatomic,retain) NSMutableSet * sectionsThatHaveBeenExpanded;                                   //@synthesize sectionsThatHaveBeenExpanded=_sectionsThatHaveBeenExpanded - In the implementation block
@property (nonatomic,retain) NSArray * hiddenSections;                                                      //@synthesize hiddenSections=_hiddenSections - In the implementation block
@property (nonatomic,retain) NSMutableSet * potentiallyVisibleCells;                                        //@synthesize potentiallyVisibleCells=_potentiallyVisibleCells - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * latestVisibleResultsAccountedForInFeedback;              //@synthesize latestVisibleResultsAccountedForInFeedback=_latestVisibleResultsAccountedForInFeedback - In the implementation block
@property (assign,nonatomic) unsigned long long lastVisibleResultsFeedbackEvent;                            //@synthesize lastVisibleResultsFeedbackEvent=_lastVisibleResultsFeedbackEvent - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * potentiallyVisibleHeaders;                               //@synthesize potentiallyVisibleHeaders=_potentiallyVisibleHeaders - In the implementation block
@property (nonatomic,retain) NSArray * latestVisibleHeadersAccountedForInFeedback;                          //@synthesize latestVisibleHeadersAccountedForInFeedback=_latestVisibleHeadersAccountedForInFeedback - In the implementation block
@property (assign,nonatomic) double cachedHeaderHeight;                                                     //@synthesize cachedHeaderHeight=_cachedHeaderHeight - In the implementation block
@property (nonatomic,readonly) double headerHeight; 
@property (nonatomic,retain) NSString * queryString;                                                        //@synthesize queryString=_queryString - In the implementation block
@property (assign,nonatomic) BOOL shortenTopFloatingHeader;                                                 //@synthesize shortenTopFloatingHeader=_shortenTopFloatingHeader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)hiddenSectionsFromSections:(id)arg1 ;
+(void)fetchContactsIfNeededForTableModel:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)cachedHeaderHeight;
-(void)setQueryString:(NSString *)arg1 ;
-(NSString *)queryString;
-(NSMutableOrderedSet *)potentiallyVisibleHeaders;
-(NSArray *)hiddenSections;
-(unsigned long long)lastVisibleResultsFeedbackEvent;
-(id)init;
-(double)headerHeight;
-(void)didEngageResult:(id)arg1 ;
-(void)setHiddenSections:(NSArray *)arg1 ;
-(void)updateWithResultSections:(id)arg1 scrollToTop:(BOOL)arg2 ;
-(id)indexPathToSelectForKeyboardOnQuickReturn;
-(NSArray *)latestVisibleHeadersAccountedForInFeedback;
-(void)setLastVisibleResultsFeedbackEvent:(unsigned long long)arg1 ;
-(void)toggleShowMoreForSection:(unsigned long long)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)modalViewControllerClosed;
-(void)performExpansion:(BOOL)arg1 withSectionIndex:(unsigned long long)arg2 ;
-(void)showMoreSectionsWithShowMoreButtonRowModel:(id)arg1 ;
-(NSMutableSet *)sectionsThatHaveBeenExpanded;
-(NSMutableSet *)expandedSections;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)setLatestVisibleHeadersAccountedForInFeedback:(NSArray *)arg1 ;
-(void)setCachedHeaderHeight:(double)arg1 ;
-(void)scrollSectionToTop:(unsigned long long)arg1 animate:(BOOL)arg2 ;
-(BOOL)view:(id)arg1 isVisibleInBounds:(CGRect)arg2 ;
-(void)expandCellsIfNeeded;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)sendVisibleFeedbackIfNecessary;
-(BOOL)sectionShouldBeExpanded:(id)arg1 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)visibleResultsWithinRegion:(CGRect)arg1 ;
-(void)setLatestVisibleResultsAccountedForInFeedback:(NSMutableOrderedSet *)arg1 ;
-(void)purgeMemory;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setSectionsThatHaveBeenExpanded:(NSMutableSet *)arg1 ;
-(void)purgeAndResetTable;
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(void)setShouldUseInsetRoundedSections:(BOOL)arg1 ;
-(void)setShortenTopFloatingHeader:(BOOL)arg1 ;
-(double)offScreenContentScrollDistance;
-(BOOL)shortenTopFloatingHeader;
-(id)cellForIndexPath:(id)arg1 reuseIfPossible:(BOOL)arg2 ;
-(void)scrollTableToTop;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)setPotentiallyVisibleHeaders:(NSMutableOrderedSet *)arg1 ;
-(void)setPotentiallyVisibleCells:(NSMutableSet *)arg1 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)replaceResult:(id)arg1 withResult:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)toggleExpansionForSection:(id)arg1 ;
-(void)setExpandedSections:(NSMutableSet *)arg1 ;
-(NSMutableOrderedSet *)latestVisibleResultsAccountedForInFeedback;
-(id)commandEnvironment;
-(BOOL)updateMustAccountForLayout;
-(NSMutableSet *)potentiallyVisibleCells;
-(void)highlightResult:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
@end
