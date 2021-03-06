/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFCharacteristicValueSource <HFCharacteristicValueOperationBatching,NAIdentifiable>
@property (nonatomic,readonly) id<HFCharacteristicOperationContextProviding> contextProvider; 
@optional
-(void)executeActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)cachedErrorForExecutionOfActionSet:(id)arg1;
-(id)cachedErrorForWriteToCharacteristic:(id)arg1;
-(id<HFCharacteristicOperationContextProviding>)contextProvider;

@required
-(id)cachedValueForCharacteristic:(id)arg1;
-(id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2;
-(id)readValuesForCharacteristics:(id)arg1;
-(id)writeValuesForCharacteristics:(id)arg1;

@end

