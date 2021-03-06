/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class TSCHChartGrid, NSString;

@interface TSCHChartGridAdapter : NSObject <NSFastEnumeration> {

	TSCHChartGrid* mGrid;
	unsigned long long mIndex;

}

@property (nonatomic,readonly) TSCHChartGrid * grid; 
@property (nonatomic,retain) NSString * name; 
-(void)setName:(NSString *)arg1 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(TSCHChartGrid *)grid;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(NSString *)name;
-(void)setValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithChartGrid:(id)arg1 index:(unsigned long long)arg2 ;
@end

