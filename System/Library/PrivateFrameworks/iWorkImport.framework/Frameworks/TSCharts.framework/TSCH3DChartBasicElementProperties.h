/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DChartMutableElementProperties.h>

@class TSCH3DChartModelEnumerator;

@interface TSCH3DChartBasicElementProperties : TSCH3DChartMutableElementProperties {

	TSCH3DChartModelEnumerator* mEnumerator;
	tvec2<int> mSize;

}

@property (nonatomic,readonly) tvec2<int> size; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(tvec2<int>)size;
-(void)resetWithEnumerator:(id)arg1 layoutSettings:(SCD_Struct_TS0)arg2 ;
-(void)createResources;
-(id)texcoordsForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(id)geometryForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(id)boundsGeometryForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(id)normalsForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
@end

