/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHPropertyMapsGeneratedProtocol.h>
#import <TSCharts/TSCHStyleOwnerCollaborationSupport.h>
#import <TSCharts/TSCHUnretainedParent.h>
#import <TSCharts/TSCHStyleOwning.h>
#import <TSCharts/TSDMixing.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSCHChartInfo, NSString;

@interface TSCHLegendModel : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHUnretainedParent, TSCHStyleOwning, TSDMixing, NSCopying> {

	TSCHChartInfo* mChartInfo;
	CGRect mLegendFrame;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) TSCHChartInfo * chartInfo; 
@property (assign,nonatomic) CGPoint legendOffset; 
@property (assign,nonatomic) CGSize legendSize; 
+(unsigned char)styleOwnerPathType;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)model;
-(void)dealloc;
-(id)style;
-(id)defaultProperties;
-(id)valueForProperty:(int)arg1 ;
-(id)context;
-(CGSize)legendSize;
-(void)setLegendSize:(CGSize)arg1 ;
-(void)willModify;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(TSCHChartInfo *)chartInfo;
-(int)intValueForProperty:(int)arg1 defaultValue:(int)arg2 ;
-(id)objectValueForProperty:(int)arg1 ;
-(void)clearParent;
-(float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2 ;
-(id)g_genericToDefaultPropertyMap;
-(id)g_operationPropertyNameForGenericProperty:(int)arg1 ;
-(int)defaultPropertyForGeneric:(int)arg1 ;
-(id)p_genericToDefaultPropertyMap;
-(int)specificPropertyForGeneric:(int)arg1 ;
-(BOOL)hasIntValueForProperty:(int)arg1 value:(int*)arg2 ;
-(BOOL)hasFloatValueForProperty:(int)arg1 value:(float*)arg2 ;
-(BOOL)hasObjectValueForProperty:(int)arg1 value:(id*)arg2 ;
-(id)operationPropertyNameFromGenericProperty:(int)arg1 ;
-(id)nonstyle;
-(id)swapTuplesForMutations:(id)arg1 forImport:(BOOL)arg2 ;
-(id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2 ;
-(CGPoint)legendOffset;
-(void)setLegendOffset:(CGPoint)arg1 ;
-(void)setChartInfo:(TSCHChartInfo *)arg1 ;
-(void)loadFromPreUFFArchive:(const LegendModelArchive*)arg1 ;
-(void)loadFromUnityArchive:(const ChartArchive*)arg1 ;
-(void)saveToUnityArchive:(ChartArchive*)arg1 ;
@end

