/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHChartLayoutItem.h>

@class TSCHChartAxisID;

@interface TSCHChartReferenceLineLabelsLayoutItem : TSCHChartLayoutItem {

	TSCHChartAxisID* mAxisID;

}

@property (nonatomic,retain,readonly) TSCHChartAxisID * axisID; 
-(TSCHChartAxisID *)axisID;
-(CGRect)p_drawingRectForModel:(id)arg1 ;
-(id)subselectionKnobPositionsForSelection:(id)arg1 ;
-(id)initWithParent:(id)arg1 axisID:(id)arg2 ;
-(CGSize)calcMinSize;
-(CGRect)calcDrawingRect;
-(void)protected_iterateHitChartElements:(CGPoint)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)p_areaLayoutItem;
@end

