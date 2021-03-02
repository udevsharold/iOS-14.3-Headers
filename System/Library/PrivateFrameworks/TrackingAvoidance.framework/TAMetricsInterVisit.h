/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TAMetricsProtocol.h>

@class TAInterVisitMetricPerDevice, TASPAdvertisement, NSString;

@interface TAMetricsInterVisit : NSObject <TAMetricsProtocol> {

	TAInterVisitMetricPerDevice* _currentInterVisitMetric;
	TAInterVisitMetricPerDevice* _totalInterVisitMetric;

}

@property (nonatomic,readonly) TAInterVisitMetricPerDevice * currentInterVisitMetric;              //@synthesize currentInterVisitMetric=_currentInterVisitMetric - In the implementation block
@property (nonatomic,readonly) TAInterVisitMetricPerDevice * totalInterVisitMetric;                //@synthesize totalInterVisitMetric=_totalInterVisitMetric - In the implementation block
@property (nonatomic,readonly) TASPAdvertisement * latestAdvertisement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)descriptionDictionary;
-(NSString *)description;
-(TASPAdvertisement *)latestAdvertisement;
-(unsigned long long)getMetricsCollectionType;
-(TAInterVisitMetricPerDevice *)currentInterVisitMetric;
-(TAInterVisitMetricPerDevice *)totalInterVisitMetric;
@end
