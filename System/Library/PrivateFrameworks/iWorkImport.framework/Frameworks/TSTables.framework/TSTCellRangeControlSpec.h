/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSTCellSpec.h>

@interface TSTCellRangeControlSpec : TSTCellSpec {

	unsigned _interactionType;
	unsigned _legacyDisplayFormatType;
	double _minimum;
	double _maximum;
	double _increment;

}

@property (nonatomic,readonly) double minimum;                                //@synthesize minimum=_minimum - In the implementation block
@property (nonatomic,readonly) double maximum;                                //@synthesize maximum=_maximum - In the implementation block
@property (nonatomic,readonly) double increment;                              //@synthesize increment=_increment - In the implementation block
@property (nonatomic,readonly) unsigned legacyDisplayFormatType;              //@synthesize legacyDisplayFormatType=_legacyDisplayFormatType - In the implementation block
+(id)instanceWithArchive:(const CellSpecArchive*)arg1 unarchiver:(id)arg2 ;
+(BOOL)legalRangeControlMinimum:(double)arg1 maximum:(double)arg2 increment:(double)arg3 ;
+(id)defaultRangeControlSpecOfType:(unsigned)arg1 ;
+(double)defaultCellValueForInteractionType:(unsigned)arg1 ;
+(id)stepperSpecWithMinimum:(double)arg1 maximum:(double)arg2 increment:(double)arg3 ;
+(id)sliderSpecWithMinimum:(double)arg1 maximum:(double)arg2 increment:(double)arg3 ;
+(id)cellSpecFromTSKFormat:(id)arg1 ;
-(double)maximum;
-(double)minimum;
-(double)increment;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)interactionType;
-(id)initWithArchive:(const CellSpecArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(CellSpecArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithInteractionType:(unsigned)arg1 minimum:(double)arg2 maximum:(double)arg3 increment:(double)arg4 ;
-(double)recomputedValueFromValue:(double)arg1 changed:(BOOL*)arg2 ;
-(id)asRangeControlSpec;
-(double)valueFromString:(id)arg1 locale:(id)arg2 ;
-(BOOL)validateFormatAndValue:(id)arg1 ;
-(id)tskStepperSliderFormatWithDisplayFormatType:(unsigned)arg1 ;
-(unsigned)legacyDisplayFormatType;
@end
