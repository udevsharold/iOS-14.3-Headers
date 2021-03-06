/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFControlItem.h>

@class NSString;

@interface HFTemperatureUnitControlItem : HFControlItem {

	NSString* _temperatureUnitCharacteristicType;

}

@property (nonatomic,copy,readonly) NSString * temperatureUnitCharacteristicType;              //@synthesize temperatureUnitCharacteristicType=_temperatureUnitCharacteristicType - In the implementation block
+(Class)valueClass;
-(id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3 ;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(id)characteristicValuesForValue:(id)arg1 ;
-(NSString *)temperatureUnitCharacteristicType;
-(id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 displayResults:(id)arg3 ;
@end

