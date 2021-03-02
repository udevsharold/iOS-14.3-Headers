/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKSPAnalyticsStore;

@interface HKSPAnalyticsManager : NSObject {

	HKSPAnalyticsStore* _analyticsStore;

}

@property (nonatomic,retain) HKSPAnalyticsStore * analyticsStore;              //@synthesize analyticsStore=_analyticsStore - In the implementation block
+(BOOL)isImproveHealthAndActivitySubmissionAllowed;
+(BOOL)isDiagnosticDataSubmissionAllowed;
+(id)currentDeviceType;
+(id)activePairedWatchProductType;
-(id)initWithUserDefaults:(id)arg1 ;
-(void)trackEvents:(id)arg1 ;
-(HKSPAnalyticsStore *)analyticsStore;
-(void)setAnalyticsStore:(HKSPAnalyticsStore *)arg1 ;
-(void)trackEvent:(id)arg1 ;
@end
