/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, HKQuantityType, HKCategoryType, NSString, HKSampleType;

@interface WFHKContentQueryData : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	HKQuantityType* _quantityType;
	HKCategoryType* _categoryType;
	NSString* _sourceName;

}

@property (nonatomic,retain) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                           //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) HKQuantityType * quantityType;              //@synthesize quantityType=_quantityType - In the implementation block
@property (nonatomic,retain) HKCategoryType * categoryType;              //@synthesize categoryType=_categoryType - In the implementation block
@property (nonatomic,readonly) HKSampleType * sampleType; 
@property (nonatomic,retain) NSString * sourceName;                      //@synthesize sourceName=_sourceName - In the implementation block
-(HKQuantityType *)quantityType;
-(NSDate *)endDate;
-(void)setQuantityType:(HKQuantityType *)arg1 ;
-(NSString *)sourceName;
-(HKSampleType *)sampleType;
-(void)setSourceName:(NSString *)arg1 ;
-(void)setCategoryType:(HKCategoryType *)arg1 ;
-(NSDate *)startDate;
-(HKCategoryType *)categoryType;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
@end

