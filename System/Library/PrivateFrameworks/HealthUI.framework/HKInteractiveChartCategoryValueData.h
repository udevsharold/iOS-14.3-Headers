/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class NSDate, NSString;

@interface HKInteractiveChartCategoryValueData : NSObject <HKGraphSeriesChartData> {

	long long _value;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (assign,nonatomic) long long value;                       //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                      //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                        //@synthesize endDate=_endDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)endDate;
-(long long)value;
-(void)setValue:(long long)arg1 ;
-(unsigned long long)hash;
-(NSDate *)startDate;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
@end

