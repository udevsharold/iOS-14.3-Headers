/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthUI/HealthUI-Structs.h>
@class NSArray;

@interface HKGraphSeriesBlockCoordinateList : NSObject

@property (nonatomic,readonly) NSArray * coordinates; 
@property (nonatomic,readonly) long long numCoordinates; 
@property (nonatomic,readonly) SCD_Struct_HK12 blockPathStart; 
@property (nonatomic,readonly) SCD_Struct_HK12 blockPathEnd; 
+(id)coordinateListWithCoordinates:(id)arg1 blockPath:(SCD_Struct_HK12)arg2 ;
+(id)coordinateListByCombiningSubCoordinates:(id)arg1 chartableValueRange:(id)arg2 ;
-(NSArray *)coordinates;
-(void)enumerateCoordinatesWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 block:(/*^block*/id)arg3 ;
-(long long)numCoordinates;
-(id)firstCoordinateWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(id)lastCoordinateWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(void)_enumerateCoordinatesWithTransform:(CGAffineTransform)arg1 chartableValueRange:(id)arg2 roundToViewScale:(BOOL)arg3 block:(/*^block*/id)arg4 ;
-(id)_coordinatesInChartableRange:(id)arg1 ;
-(long long)_numCoordinatesInChartableRange:(id)arg1 ;
-(SCD_Struct_HK12)blockPathStart;
-(SCD_Struct_HK12)blockPathEnd;
@end
