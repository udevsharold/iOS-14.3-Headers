/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDClinicalIngestionAnalyticsMetric.h>

@class NSMutableDictionary, NSDictionary, NSNumber, NSString;

@interface HDClinicalIngestionResponseTimeMetric : NSObject <HDClinicalIngestionAnalyticsMetric> {

	NSMutableDictionary* _elements;

}

@property (nonatomic,retain) NSMutableDictionary * elements;                 //@synthesize elements=_elements - In the implementation block
@property (nonatomic,readonly) NSDictionary * collectedMetrics; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,copy,readonly) NSNumber * analyticsString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)combineWithMetric:(id)arg1 ;
-(void)enumerateElementsAsCoreAnalyticsPayloadUsingBlock:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)elements;
-(void)addResponseTimeMetricElement:(id)arg1 ;
-(unsigned long long)count;
-(NSDictionary *)collectedMetrics;
-(NSString *)debugDescription;
-(void)setElements:(NSMutableDictionary *)arg1 ;
-(void)resetMetric;
-(NSNumber *)analyticsString;
@end
