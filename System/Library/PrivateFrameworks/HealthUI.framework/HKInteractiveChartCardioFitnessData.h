/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKInteractiveChartSinglePointData.h>

@interface HKInteractiveChartCardioFitnessData : HKInteractiveChartSinglePointData {

	long long _biologicalSex;
	long long _age;
	long long _classification;
	unsigned long long _sampleCount;

}

@property (assign,nonatomic) long long biologicalSex;                     //@synthesize biologicalSex=_biologicalSex - In the implementation block
@property (assign,nonatomic) long long age;                               //@synthesize age=_age - In the implementation block
@property (assign,nonatomic) long long classification;                    //@synthesize classification=_classification - In the implementation block
@property (assign,nonatomic) unsigned long long sampleCount;              //@synthesize sampleCount=_sampleCount - In the implementation block
-(long long)age;
-(void)setClassification:(long long)arg1 ;
-(unsigned long long)sampleCount;
-(void)setAge:(long long)arg1 ;
-(id)description;
-(void)setBiologicalSex:(long long)arg1 ;
-(long long)biologicalSex;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(long long)classification;
@end
