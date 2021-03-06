/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARPersonDetectionResult.h>

@interface ARDepthBasedPersonDetectionResult : ARPersonDetectionResult {

	float _sumDepthValues;
	long long _numberDepthPixels;
	float _sumDepthValuesWithHighConfidence;
	long long _numberDepthPixelsWithHighConfidence;
	double _initialBoundingBoxAvg;

}

@property (assign,nonatomic) double initialBoundingBoxAvg;                      //@synthesize initialBoundingBoxAvg=_initialBoundingBoxAvg - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfSamples; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)numberOfSamples;
-(float)meanValue;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBoundingBox:(CGRect)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)addSampleValueWithHighConfidence:(float)arg1 ;
-(void)addSampleValue:(float)arg1 ;
-(void)setInitialBoundingBoxAvg:(double)arg1 ;
-(double)initialBoundingBoxAvg;
@end

