/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class TSCHChartInfo;

@interface TSCH3DAbstractLimitingSeriesUpgrader : NSObject {

	TSCHChartInfo* mChartInfo;
	/*^block*/id mWillModifyBlock;

}

@property (nonatomic,copy) id willModifyBlock; 
+(id)upgraderWithChartInfo:(id)arg1 ;
+(double)depthFactorForAdjustingNumberOfSeries:(unsigned long long)arg1 chartType:(id)arg2 fromOldLimitingSeries:(unsigned long long)arg3 toNewLimitingSeries:(unsigned long long)arg4 ;
+(BOOL)chartTypeUsesSeriesLimiting:(id)arg1 ;
-(void)dealloc;
-(id)initWithChartInfo:(id)arg1 ;
-(unsigned long long)numberOfSeries;
-(void)upgradeForSpice:(BOOL)arg1 naturalSize:(CGSize)arg2 ;
-(SCD_Struct_TS50)oldLayoutSettings;
-(void)mutateInfoWithContainingViewport:(id)arg1 scene:(id)arg2 ;
-(void)setWillModifyBlock:(id)arg1 ;
-(SCD_Struct_TS50)p_oldLayoutSettingsForSpice:(BOOL)arg1 ;
-(void)configureScene:(id)arg1 ;
-(id)constantDepthInfoChartScaleForInfoChartScale:(id)arg1 ;
-(void)mutateInfoWithMutations:(id)arg1 ;
-(id)adjustedScaleFromLayoutSettings:(const SCD_Struct_TS50*)arg1 toLayoutSettings:(const SCD_Struct_TS50*)arg2 ;
-(SCD_Struct_TS50)upgradedLayoutSettings;
-(id)configuredSceneWithLayoutSettings:(SCD_Struct_TS50)arg1 ;
-(void)mutateInfoByAdjustingScaleFromLayoutSettings:(const SCD_Struct_TS50*)arg1 toLayoutSettings:(const SCD_Struct_TS50*)arg2 ;
-(id)willModifyBlock;
@end
