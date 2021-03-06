/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHChartAxis.h>

@interface TSCHChartCategoryAxis : TSCHChartAxis
+(id)axisForInfo:(id)arg1 ;
+(unsigned char)styleOwnerPathType;
-(id)defaultProperties;
-(unsigned long long)indexForSelectionPathLabelIndex:(unsigned long long)arg1 ;
-(unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)arg1 ;
-(BOOL)isCategory;
-(pair<TSCH3DAxisLabelEnumerator *, TSCH3DAxisLabelEnumerator *>)labelEnumeratorPair;
-(int)specificPropertyForGeneric:(int)arg1 ;
-(BOOL)isRangeContinuous;
-(id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1 ;
-(id)g_genericToSpecificPropertyMap;
-(id)p_getGenericToCategoryPropertyMapForMultiData;
-(id)p_getGenericToCategoryPropertyMapForNonMultiData;
-(id)p_getGenericToCategoryPropertyMap;
@end

