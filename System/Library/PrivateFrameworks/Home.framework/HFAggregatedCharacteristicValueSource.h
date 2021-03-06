/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HFServiceDescriptor;


@protocol HFAggregatedCharacteristicValueSource <HFCharacteristicValueOperationBatching,NAIdentifiable,NSCopying>
@property (nonatomic,readonly) HFServiceDescriptor * primaryServiceDescriptor; 
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource; 
@required
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1;
-(HFServiceDescriptor *)primaryServiceDescriptor;
-(id)allServices;
-(id)readValuesForCharacteristicTypes:(id)arg1;
-(id)writeValuesForCharacteristicTypes:(id)arg1;
-(id)metadataForCharacteristicType:(id)arg1;
-(id)readValuesForServiceStateRecipe:(id)arg1;
-(id)writeValuesForCharacteristicRecipes:(id)arg1;
-(id)allCharacteristicsForCharacteristicType:(id)arg1;

@end

