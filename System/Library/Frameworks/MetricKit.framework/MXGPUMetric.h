/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricKit/MXMetric.h>

@class NSMeasurement;

@interface MXGPUMetric : MXMetric {

	NSMeasurement* _cumulativeGPUTime;

}

@property (readonly) NSMeasurement * cumulativeGPUTime;              //@synthesize cumulativeGPUTime=_cumulativeGPUTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCumulativeGPUTimeMeasurement:(id)arg1 ;
-(NSMeasurement *)cumulativeGPUTime;
@end
