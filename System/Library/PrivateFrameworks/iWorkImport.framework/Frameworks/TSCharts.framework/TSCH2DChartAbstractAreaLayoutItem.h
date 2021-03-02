/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHChartAbstractAreaLayoutItem.h>

@class TSCHChartTitleLayoutItem, TSCHChartDataSetNameLayoutItem, TSCHChartBodyLayoutItem;

@interface TSCH2DChartAbstractAreaLayoutItem : TSCHChartAbstractAreaLayoutItem {

	TSCHChartTitleLayoutItem* mTitleElement;
	TSCHChartDataSetNameLayoutItem* mDataSetNameElement;
	TSCHChartBodyLayoutItem* mChartBody;

}

@property (nonatomic,readonly) TSCHChartBodyLayoutItem * bodyLayoutItem; 
-(void)setChartBodyLayoutSize:(CGSize)arg1 ;
-(CGRect)chartBodyLayoutRect;
-(CGRect)i_currentBufferAreaUnitRect;
-(TSCHChartBodyLayoutItem *)bodyLayoutItem;
@end
