/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HeartHealth.framework/HeartHealth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKHRCardioFitnessFooter;

@interface HKHRCardioFitnessWatchSettings : NSObject {

	BOOL _settingVisible;
	BOOL _settingEnabled;
	HKHRCardioFitnessFooter* _footer;

}

@property (assign,nonatomic) BOOL settingVisible;                           //@synthesize settingVisible=_settingVisible - In the implementation block
@property (assign,nonatomic) BOOL settingEnabled;                           //@synthesize settingEnabled=_settingEnabled - In the implementation block
@property (nonatomic,retain) HKHRCardioFitnessFooter * footer;              //@synthesize footer=_footer - In the implementation block
+(id)hiddenSettings;
-(HKHRCardioFitnessFooter *)footer;
-(void)setSettingEnabled:(BOOL)arg1 ;
-(BOOL)settingEnabled;
-(void)setFooter:(HKHRCardioFitnessFooter *)arg1 ;
-(void)setSettingVisible:(BOOL)arg1 ;
-(BOOL)settingVisible;
-(id)initWithSettingVisible:(BOOL)arg1 settingEnabled:(BOOL)arg2 footer:(id)arg3 ;
@end
