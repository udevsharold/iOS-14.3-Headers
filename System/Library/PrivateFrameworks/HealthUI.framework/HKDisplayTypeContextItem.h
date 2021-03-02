/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSAttributedString, HKUIMetricColors;

@interface HKDisplayTypeContextItem : NSObject {

	BOOL _infoHidden;
	BOOL _useTightSpacingBetweenValueAndUnit;
	NSString* _title;
	NSString* _unit;
	NSString* _value;
	NSString* _valueContext;
	NSAttributedString* _attributedValue;
	NSString* _dateString;
	HKUIMetricColors* _metricColors;
	HKUIMetricColors* _selectedMetricColors;

}

@property (nonatomic,copy) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL infoHidden;                                      //@synthesize infoHidden=_infoHidden - In the implementation block
@property (assign,nonatomic) BOOL useTightSpacingBetweenValueAndUnit;              //@synthesize useTightSpacingBetweenValueAndUnit=_useTightSpacingBetweenValueAndUnit - In the implementation block
@property (nonatomic,copy) NSString * unit;                                        //@synthesize unit=_unit - In the implementation block
@property (nonatomic,copy) NSString * value;                                       //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * valueContext;                                //@synthesize valueContext=_valueContext - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedValue;                   //@synthesize attributedValue=_attributedValue - In the implementation block
@property (nonatomic,copy) NSString * dateString;                                  //@synthesize dateString=_dateString - In the implementation block
@property (nonatomic,retain) HKUIMetricColors * metricColors;                      //@synthesize metricColors=_metricColors - In the implementation block
@property (nonatomic,retain) HKUIMetricColors * selectedMetricColors;              //@synthesize selectedMetricColors=_selectedMetricColors - In the implementation block
-(NSString *)value;
-(void)setUnit:(NSString *)arg1 ;
-(NSString *)unit;
-(void)setValue:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSAttributedString *)attributedValue;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)dateString;
-(void)setDateString:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)debugDescription;
-(void)setAttributedValue:(NSAttributedString *)arg1 ;
-(NSString *)title;
-(void)setInfoHidden:(BOOL)arg1 ;
-(void)setUseTightSpacingBetweenValueAndUnit:(BOOL)arg1 ;
-(void)setValueContext:(NSString *)arg1 ;
-(void)setMetricColors:(HKUIMetricColors *)arg1 ;
-(void)setSelectedMetricColors:(HKUIMetricColors *)arg1 ;
-(NSString *)valueContext;
-(BOOL)useTightSpacingBetweenValueAndUnit;
-(HKUIMetricColors *)metricColors;
-(HKUIMetricColors *)selectedMetricColors;
-(BOOL)isEqualToContextItem:(id)arg1 ;
-(BOOL)infoHidden;
@end
