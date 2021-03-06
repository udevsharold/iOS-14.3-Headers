/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TSCHSelectionPathType : NSObject <NSCopying> {

	NSString* mType;
	NSString* mName;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * type; 
+(id)seriesType;
+(id)axisLabelsType;
+(id)referenceLineValueLabelType;
+(id)referenceLineLabelType;
+(id)chartTitleType;
+(id)seriesLabelType;
+(id)chartDataSetNameType;
+(id)chartBodyType;
+(id)axisLineType;
+(id)legendSeriesNameType;
+(id)legendTrendLineNameType;
+(id)legendType;
+(id)axisTitleType;
+(id)valueAxisType;
+(id)categoryAxisType;
+(id)gridLineType;
+(id)seriesValueLabelType;
+(id)seriesSymbolType;
+(id)errorBarType;
+(id)trendLineType;
+(id)trendLineEquationType;
+(id)trendLineR2Type;
+(id)referenceLineType;
+(id)seriesEditModeType;
+(id)selectionPathTypeWithType:(id)arg1 name:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithArchive:(const ChartSelectionPathTypeArchive*)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)type;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithType:(id)arg1 name:(id)arg2 ;
-(NSString *)name;
-(void)saveToArchive:(ChartSelectionPathTypeArchive*)arg1 ;
-(BOOL)canApplyParagraphStyle;
-(BOOL)canApplyShapeStyle;
-(BOOL)canApplyChartStyleWithDescription:(id)arg1 ;
@end

