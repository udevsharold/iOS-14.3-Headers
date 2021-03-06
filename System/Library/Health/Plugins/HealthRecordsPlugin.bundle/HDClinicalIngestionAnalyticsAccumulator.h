/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDHealthRecordsProfileExtension, NSSet, HDClinicalIngestionResponseTimeMetric, HDClinicalIngestionRequestFailureMetric, NSString;

@interface HDClinicalIngestionAnalyticsAccumulator : NSObject {

	HDHealthRecordsProfileExtension* _profileExtension;
	NSSet* _collectionEnabledCountryCodes;
	HDClinicalIngestionResponseTimeMetric* _responseTimes;
	HDClinicalIngestionRequestFailureMetric* _requestFailures;

}

@property (nonatomic,__weak,readonly) HDHealthRecordsProfileExtension * profileExtension;              //@synthesize profileExtension=_profileExtension - In the implementation block
@property (nonatomic,copy,readonly) NSSet * collectionEnabledCountryCodes;                             //@synthesize collectionEnabledCountryCodes=_collectionEnabledCountryCodes - In the implementation block
@property (nonatomic,readonly) HDClinicalIngestionResponseTimeMetric * responseTimes;                  //@synthesize responseTimes=_responseTimes - In the implementation block
@property (nonatomic,readonly) HDClinicalIngestionRequestFailureMetric * requestFailures;              //@synthesize requestFailures=_requestFailures - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsString; 
-(void)logMetrics;
-(void)accumulateIngestionAnalyticsMetric:(id)arg1 gatewayCountryCode:(id)arg2 ;
-(HDClinicalIngestionRequestFailureMetric *)requestFailures;
-(void)resetMetrics;
-(void)consumeAndResetIngestionAnalyticsMetricsFromAccumulator:(id)arg1 ;
-(void)submitMetricsWithCoordinator:(id)arg1 ;
-(HDHealthRecordsProfileExtension *)profileExtension;
-(NSSet *)collectionEnabledCountryCodes;
-(HDClinicalIngestionResponseTimeMetric *)responseTimes;
-(NSString *)analyticsString;
-(id)initWithProfileExtension:(id)arg1 ;
@end

