/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKQuantity;

@interface HKCardioFitnessLookupProperties : NSObject {

	long long _biologicalSex;
	long long _age;
	HKQuantity* _vo2MaxQuantity;

}

@property (assign,nonatomic) long long biologicalSex;                  //@synthesize biologicalSex=_biologicalSex - In the implementation block
@property (assign,nonatomic) long long age;                            //@synthesize age=_age - In the implementation block
@property (nonatomic,retain) HKQuantity * vo2MaxQuantity;              //@synthesize vo2MaxQuantity=_vo2MaxQuantity - In the implementation block
-(long long)age;
-(void)setAge:(long long)arg1 ;
-(void)setBiologicalSex:(long long)arg1 ;
-(long long)biologicalSex;
-(HKQuantity *)vo2MaxQuantity;
-(void)setVo2MaxQuantity:(HKQuantity *)arg1 ;
@end

