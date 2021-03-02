/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBHHomeScreenUsageMonitorObserver.h>

@protocol SBProactiveHomeScreenUsageObserverDelegate;
@class ATXHomeScreenPrediction, SBHIconManager, NSString;

@interface SBProactiveHomeScreenUsageObserver : NSObject <SBHHomeScreenUsageMonitorObserver> {

	ATXHomeScreenPrediction* _currentPrediction;
	id<SBProactiveHomeScreenUsageObserverDelegate> _delegate;
	SBHIconManager* _iconManager;

}

@property (nonatomic,readonly) SBHIconManager * iconManager;                                              //@synthesize iconManager=_iconManager - In the implementation block
@property (nonatomic,retain) ATXHomeScreenPrediction * currentPrediction;                                 //@synthesize currentPrediction=_currentPrediction - In the implementation block
@property (assign,nonatomic,__weak) id<SBProactiveHomeScreenUsageObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBHIconManager *)iconManager;
-(void)pushCurrentTodayConfiguration;
-(id)iconModel;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteRootControllerWillAppearWithPageIndex:(unsigned long long)arg2 ;
-(void)deviceLockStateDidChange:(id)arg1 ;
-(void)logTodayViewDidAppear;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteDataSourceDidAppear:(id)arg2 forWidgetIcon:(id)arg3 ;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteDataSourceDidDisappear:(id)arg2 forWidgetIcon:(id)arg3 ;
-(id)rootFolder;
-(void)pushCurrentDockConfiguration;
-(void)setCurrentPrediction:(ATXHomeScreenPrediction *)arg1 ;
-(void)homeScreenUsageAggregatorDidNoteHomeScreenLayoutChanged:(id)arg1 ;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteWidgetIconStackChangedActiveWidget:(id)arg2 ;
-(id)proactiveWidgetForIconDataSource:(id)arg1 ofIcon:(id)arg2 ;
-(id)proactiveWidgetForWidget:(id)arg1 ofIcon:(id)arg2 ;
-(id)initWithIconManager:(id)arg1 ;
-(void)pushCurrentHomeScreenPagesConfiguration;
-(void)logHomeScreenPageDidAppearWithPageIndex:(unsigned long long)arg1 ;
-(id)proactiveStackForWidgetIcon:(id)arg1 atIndex:(unsigned long long)arg2 gridCellInfo:(id)arg3 ;
-(void)setDelegate:(id<SBProactiveHomeScreenUsageObserverDelegate>)arg1 ;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteTodayViewScrolledWithIconVisibility:(id)arg2 ;
-(void)iconModelDidLayout:(id)arg1 ;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteUserTappedWidgetIcon:(id)arg2 withURL:(id)arg3 ;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteCurrentPageIndexChanged:(unsigned long long)arg2 ;
-(void)pushCurrentHomeScreenConfiguration;
-(id<SBProactiveHomeScreenUsageObserverDelegate>)delegate;
-(ATXHomeScreenPrediction *)currentPrediction;
-(id)widgetIdentifiablesDictionaryForIconListModel:(id)arg1 ;
@end
