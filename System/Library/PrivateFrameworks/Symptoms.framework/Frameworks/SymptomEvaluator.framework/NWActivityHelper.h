/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AnalyticsWorkspace;

@interface NWActivityHelper : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	AnalyticsWorkspace* _workspace;

}
-(id)init;
-(id)analyticsWorkspace;
-(void)_uploadCompleteNWActivityMetrics;
-(void)_garbageCollectNWActivityMetrics;
-(void)_deleteAllMetrics;
-(void)_deleteOldMetrics;
-(void)_deleteAllFragmentsMatchingPredicate:(id)arg1 ;
-(id)_fetchActivitiesWithPredicate:(id)arg1 batch:(BOOL)arg2 ;
-(void)_deleteNWActivityFragment:(id)arg1 fromContext:(id)arg2 ;
-(id)_findNWActivityMetricsForUploading;
-(void)sendReportToMetricStream:(id)arg1 ;
-(BOOL)shouldSendMetricStream;
-(void)startNWActivitySuperMetricProcessing;
-(void)cleanOutNWActivityMetrics;
-(void)purgeOldNWActivityMetrics;
@end
