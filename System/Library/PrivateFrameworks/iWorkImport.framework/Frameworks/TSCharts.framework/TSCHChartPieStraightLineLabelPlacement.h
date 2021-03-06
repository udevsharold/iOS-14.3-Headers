/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHChartPieLabelPlacement.h>

@class NSDictionary, NSMutableDictionary;

@interface TSCHChartPieStraightLineLabelPlacement : TSCHChartPieLabelPlacement {

	NSDictionary* mSeriesIndexToWedgeLayoutInfo;
	NSDictionary* mSeriesIndexToAllWedgeLayoutInfosToTheLeft;
	unsigned long long mCGPointCellSize;
	NSMutableDictionary* mSpatialMap;
	NSMutableDictionary* mSeriesIndexToConflictingWedgeLayoutInfos;

}
-(id)updateLabelTransformsToPreventOverlap;
-(id)newCalloutLinePaths:(id)arg1 startLineEnd:(id)arg2 outStartLineEndPath:(id*)arg3 endLineEnd:(id)arg4 outEndLineEndPath:(id*)arg5 stroke:(id)arg6 outStroke:(id*)arg7 context:(CGContextRef)arg8 contextScale:(float)arg9 ;
-(CGPoint)calloutLineStartpointForWedgeLayoutInfo:(id)arg1 ;
-(CGPoint)calloutLineEndpointForWedgeLayoutInfo:(id)arg1 ;
-(void)fixTitleConflictsIfNeeded;
-(void)setUpCaches;
-(void)fixConflictsForWedgeLayoutInfos;
-(void)createSeriesIndexToWedgeLayoutInfoMap;
-(void)createSeriesIndexToAllWedgeLayoutInfosToTheLeftMap;
-(void)createSpatialMap;
-(void)createSeriesIndexToConflictingWedgeLayoutInfosMap;
-(id)wedgeLayoutInfosToTheLeftOfWedgeLayoutInfo:(id)arg1 ;
-(unsigned long long)spatialMapCellSize;
-(void)updateSpatialMapWithInvalidatedWedgeLayoutInfo:(id)arg1 oldSetOfKeysForWedgeLayoutInfo:(id)arg2 ;
-(id)wedgeLayoutInfosThatShareCellsWithWedgeLayoutInfo:(id)arg1 ;
-(void)updateConflictsForWedgeLayoutInfo:(id)arg1 wedgeLayoutInfosThatShareCells:(id)arg2 ;
-(void)updateSeriesIndexToConflictingWedgeLayoutInfosMapForInvalidatedWedgeLayoutInfo:(id)arg1 oldSetOfKeysForWedgeLayoutInfo:(id)arg2 ;
-(id)setOfKeysForWedgeLayoutInfo:(id)arg1 ;
-(id)wedgeLayoutInfo:(id)arg1 conflictsWithWedgeLayoutInfos:(id)arg2 ;
-(CGPoint)cellForPoint:(CGPoint)arg1 ;
-(void)shiftLabelOutwards:(id)arg1 shiftAmount:(double)arg2 invalidateCahes:(BOOL)arg3 ;
-(BOOL)conflictsExist;
-(BOOL)shouldShiftWedgeLayoutInfo:(id)arg1 ;
-(double)shiftAmountForWedgeLayoutInfo:(id)arg1 ;
-(void)invalidateWedgeLayoutInfo:(id)arg1 oldSetOfKeysForWedgeLayoutInfo:(id)arg2 ;
@end

