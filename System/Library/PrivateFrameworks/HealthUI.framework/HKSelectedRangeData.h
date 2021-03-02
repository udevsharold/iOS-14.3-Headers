/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSAttributedString, NSNumber, UIColor;

@interface HKSelectedRangeData : NSObject {

	long long _statisticsType;
	long long _dataType;
	NSAttributedString* _attributedString;
	NSNumber* _valueAsNumber;
	UIColor* _prefixColor;

}

@property (assign,nonatomic) long long statisticsType;                           //@synthesize statisticsType=_statisticsType - In the implementation block
@property (assign,nonatomic) long long dataType;                                 //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,retain) NSNumber * valueAsNumber;                           //@synthesize valueAsNumber=_valueAsNumber - In the implementation block
@property (nonatomic,retain) UIColor * prefixColor;                              //@synthesize prefixColor=_prefixColor - In the implementation block
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(long long)dataType;
-(NSAttributedString *)attributedString;
-(void)setDataType:(long long)arg1 ;
-(NSNumber *)valueAsNumber;
-(id)initWithStatisticsType:(long long)arg1 ;
-(void)setValueAsNumber:(NSNumber *)arg1 ;
-(void)setStatisticsType:(long long)arg1 ;
-(long long)statisticsType;
-(UIColor *)prefixColor;
-(void)setPrefixColor:(UIColor *)arg1 ;
@end
