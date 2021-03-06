/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeriesDataSource.h>

@class HKGraphSeriesDataBlock;

@interface HKAudiogramDataSource : HKGraphSeriesDataSource {

	HKGraphSeriesDataBlock* _dataBlock;

}

@property (nonatomic,readonly) HKGraphSeriesDataBlock * dataBlock;              //@synthesize dataBlock=_dataBlock - In the implementation block
-(HKGraphSeriesDataBlock *)dataBlock;
-(SCD_Struct_HK1)blockPathForX:(id)arg1 zoom:(long long)arg2 ;
-(void)blocksRequestedFromPath:(SCD_Struct_HK1)arg1 toPath:(SCD_Struct_HK1)arg2 priorityDelegate:(id)arg3 ;
-(id)cachedBlockForPath:(SCD_Struct_HK1)arg1 context:(id)arg2 ;
-(id)_chartPointsFromSensitivityData:(id)arg1 leftEarSeries:(BOOL)arg2 ;
-(id)_flatPointsFromSensitivityData:(id)arg1 leftEarSeries:(BOOL)arg2 ;
-(id)initWithSensitivityData:(id)arg1 forLeftEar:(BOOL)arg2 ;
-(id)initWithFlatSensitivityData:(id)arg1 forLeftEar:(BOOL)arg2 ;
@end

