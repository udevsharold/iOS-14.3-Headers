/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, INSpeakableString;


@protocol INSetSeatSettingsInCarIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSNumber * enableHeating; 
@property (nonatomic,copy) NSNumber * enableCooling; 
@property (nonatomic,copy) NSNumber * enableMassage; 
@property (assign,nonatomic) long long seat; 
@property (nonatomic,copy) NSNumber * level; 
@property (assign,nonatomic) long long relativeLevelSetting; 
@property (nonatomic,copy) INSpeakableString * carName; 
@required
-(long long)seat;
-(void)setCarName:(id)arg1;
-(void)setLevel:(id)arg1;
-(id)init;
-(void)setSeat:(long long)arg1;
-(NSNumber *)level;
-(INSpeakableString *)carName;
-(NSNumber *)enableHeating;
-(void)setEnableHeating:(id)arg1;
-(NSNumber *)enableCooling;
-(void)setEnableCooling:(id)arg1;
-(NSNumber *)enableMassage;
-(void)setEnableMassage:(id)arg1;
-(long long)relativeLevelSetting;
-(void)setRelativeLevelSetting:(long long)arg1;

@end

