/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetClimateSettingsInCarIntentExport.h>

@class NSNumber, NSMeasurement, INSpeakableString, NSString;

@interface INSetClimateSettingsInCarIntent : INIntent <INSetClimateSettingsInCarIntentExport>

@property (nonatomic,copy,readonly) NSNumber * enableFan; 
@property (nonatomic,copy,readonly) NSNumber * enableAirConditioner; 
@property (nonatomic,copy,readonly) NSNumber * enableClimateControl; 
@property (nonatomic,copy,readonly) NSNumber * enableAutoMode; 
@property (nonatomic,readonly) long long airCirculationMode; 
@property (nonatomic,copy,readonly) NSNumber * fanSpeedIndex; 
@property (nonatomic,copy,readonly) NSNumber * fanSpeedPercentage; 
@property (nonatomic,readonly) long long relativeFanSpeedSetting; 
@property (nonatomic,copy,readonly) NSMeasurement * temperature; 
@property (nonatomic,readonly) long long relativeTemperatureSetting; 
@property (nonatomic,readonly) long long climateZone; 
@property (nonatomic,copy,readonly) INSpeakableString * carName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)initWithEnableFan:(id)arg1 enableAirConditioner:(id)arg2 enableClimateControl:(id)arg3 enableAutoMode:(id)arg4 airCirculationMode:(long long)arg5 fanSpeedIndex:(id)arg6 fanSpeedPercentage:(id)arg7 relativeFanSpeedSetting:(long long)arg8 temperature:(id)arg9 relativeTemperatureSetting:(long long)arg10 climateZone:(long long)arg11 ;
-(id)initWithEnableFan:(id)arg1 enableAirConditioner:(id)arg2 enableClimateControl:(id)arg3 enableAutoMode:(id)arg4 airCirculationMode:(long long)arg5 fanSpeedIndex:(id)arg6 fanSpeedPercentage:(id)arg7 relativeFanSpeedSetting:(long long)arg8 temperature:(id)arg9 relativeTemperatureSetting:(long long)arg10 climateZone:(long long)arg11 carName:(id)arg12 ;
-(void)setTemperature:(NSMeasurement *)arg1 ;
-(NSMeasurement *)temperature;
-(void)setCarName:(INSpeakableString *)arg1 ;
-(id)_metadata;
-(INSpeakableString *)carName;
-(void)setVerb:(id)arg1 ;
-(id)domain;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(long long)climateZone;
-(long long)airCirculationMode;
-(void)setAirCirculationMode:(long long)arg1 ;
-(void)setClimateZone:(long long)arg1 ;
-(NSNumber *)enableAirConditioner;
-(void)setEnableAirConditioner:(NSNumber *)arg1 ;
-(NSNumber *)enableAutoMode;
-(void)setEnableAutoMode:(NSNumber *)arg1 ;
-(void)setEnableFan:(NSNumber *)arg1 ;
-(NSNumber *)enableClimateControl;
-(void)setEnableClimateControl:(NSNumber *)arg1 ;
-(NSNumber *)fanSpeedIndex;
-(void)setFanSpeedIndex:(NSNumber *)arg1 ;
-(NSNumber *)fanSpeedPercentage;
-(void)setFanSpeedPercentage:(NSNumber *)arg1 ;
-(long long)relativeFanSpeedSetting;
-(void)setRelativeFanSpeedSetting:(long long)arg1 ;
-(long long)relativeTemperatureSetting;
-(void)setRelativeTemperatureSetting:(long long)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)setParametersByName:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(NSNumber *)enableFan;
@end
