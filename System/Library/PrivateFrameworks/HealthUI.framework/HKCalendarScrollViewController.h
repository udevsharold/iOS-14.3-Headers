/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/HKCalendarWeekViewDelegate.h>
#import <libobjc.A.dylib/HKDateCacheObserver.h>

@protocol HKCalendarScrollViewControllerDelegate;
@class NSCalendar, HKDateCache, HKMonthDayCell, NSDate, NSMutableArray, UIScrollView, NSString;

@interface HKCalendarScrollViewController : HKViewController <UIScrollViewDelegate, HKCalendarWeekViewDelegate, HKDateCacheObserver> {

	unsigned long long _numberOfRows;
	NSCalendar* _calendar;
	HKDateCache* _dateCache;
	HKMonthDayCell* _selectedCell;
	NSDate* _initiallyCenteredDate;
	NSMutableArray* _weekViews;
	BOOL _needsInitialOffset;
	double _topInset;
	id<HKCalendarScrollViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic) double topInset;                                                         //@synthesize topInset=_topInset - In the implementation block
@property (assign,nonatomic,__weak) id<HKCalendarScrollViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIScrollView *)scrollView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)dealloc;
-(CGRect)_visibleContentRect;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setDelegate:(id<HKCalendarScrollViewControllerDelegate>)arg1 ;
-(void)loadView;
-(double)topInset;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)setTopInset:(double)arg1 ;
-(id<HKCalendarScrollViewControllerDelegate>)delegate;
-(void)viewWillLayoutSubviews;
-(void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2 ;
-(id)_weekViewContainingTitleForThisMonth;
-(void)setSelectedCell:(id)arg1 ;
-(void)_selectTodayCell;
-(void)_createWeekViews;
-(CGPoint)_setWeekViewsToCenterDate:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(double)_heightOfAllWeekCells;
-(void)_selectCellForDate:(id)arg1 ;
-(void)updateVisibleAccessoryViews;
-(id)_weekForDate:(id)arg1 ;
-(id)_weekViewForToday;
-(void)_pulseCircle;
-(id)_currentlyCenteredVisibleWeek;
-(id)_startDateToTileWeekViews:(id)arg1 ;
-(CGPoint)_centerPointToCenterDate:(id)arg1 ;
-(BOOL)_dateIsVisible:(id)arg1 ;
-(void)scrollToDate:(id)arg1 animateIfPossible:(BOOL)arg2 ;
-(unsigned long long)_firstVisibleWeekIndex;
-(void)_findCenteredWeekAndUpdateTitleIfNecessary;
-(void)_refreshViewsAndUpdateToday;
-(void)week:(id)arg1 cellSelected:(id)arg2 ;
-(id)initWithSelectedDate:(id)arg1 ;
-(void)scrollToToday;
@end
