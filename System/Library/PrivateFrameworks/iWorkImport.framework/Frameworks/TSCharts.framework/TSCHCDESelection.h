/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSReading/TSKSelection.h>

@class TSCHChartDrawableInfo;

@interface TSCHCDESelection : TSKSelection {

	TSCHChartDrawableInfo* mInfo;
	NSRange mRowRange;
	NSRange mColumnRange;

}

@property (nonatomic,retain,readonly) TSCHChartDrawableInfo * chartInfo; 
@property (nonatomic,readonly) NSRange rowRange; 
@property (nonatomic,readonly) NSRange columnRange; 
+(Class)archivedSelectionClass;
+(id)selectionWithChartInfo:(id)arg1 rowRange:(NSRange)arg2 columnRange:(NSRange)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSRange)columnRange;
-(BOOL)isEqual:(id)arg1 ;
-(NSRange)rowRange;
-(void)saveToArchive:(ChartCDESelectionArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const ChartCDESelectionArchive*)arg1 unarchiver:(id)arg2 ;
-(TSCHChartDrawableInfo *)chartInfo;
-(id)initWithChartInfo:(id)arg1 rowRange:(NSRange)arg2 columnRange:(NSRange)arg3 ;
-(id)initWithRowRange:(NSRange)arg1 columnRange:(NSRange)arg2 ;
@end

