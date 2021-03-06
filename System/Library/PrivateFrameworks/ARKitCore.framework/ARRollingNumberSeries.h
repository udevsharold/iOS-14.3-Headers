/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ARRollingNumberSeries : NSObject {

	double* _series;
	unsigned long long _currentIndex;
	double _sumVariance;
	unsigned long long _windowSize;
	unsigned long long _count;
	double _sum;
	double _average;
	double _variance;

}

@property (nonatomic,readonly) unsigned long long windowSize;              //@synthesize windowSize=_windowSize - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                   //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) double sum;                                 //@synthesize sum=_sum - In the implementation block
@property (nonatomic,readonly) double max; 
@property (nonatomic,readonly) double min; 
@property (nonatomic,readonly) double average;                             //@synthesize average=_average - In the implementation block
@property (nonatomic,readonly) double variance;                            //@synthesize variance=_variance - In the implementation block
-(double)sum;
-(void)clear;
-(double)min;
-(void)dealloc;
-(double)variance;
-(id)initWithWindowSize:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(unsigned long long)windowSize;
-(double)max;
-(double)average;
-(void)appendNumber:(double)arg1 ;
@end

