/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDClinicalContentAnalyticsMetric.h>

@class NSMutableDictionary, NSString;

@interface HDClinicalContentAnalyticsUnknownRecordsMetric : NSObject <HDClinicalContentAnalyticsMetric> {

	NSMutableDictionary* _elements;

}

@property (readonly) unsigned long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reportedHostFromSourceURL:(id)arg1 resourceType:(id)arg2 ;
-(id)init;
-(void)enumerateElementsAsCoreAnalyticsPayloadUsingBlock:(/*^block*/id)arg1 ;
-(id)elements;
-(unsigned long long)count;
-(NSString *)debugDescription;
-(void)resetMetric;
-(id)analyticsString;
-(void)accumulateMetricForItem:(id)arg1 ;
-(void)_addMetricElementsForRulesVersion:(long long)arg1 sourceURL:(id)arg2 resourceType:(id)arg3 failureInfo:(id)arg4 ;
-(void)addUnknownRecordsMetricElement:(id)arg1 ;
-(long long)countForMetricElement:(id)arg1 ;
@end
