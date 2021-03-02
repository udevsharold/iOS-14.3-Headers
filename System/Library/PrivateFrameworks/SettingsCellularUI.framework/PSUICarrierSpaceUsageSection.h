/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CTCarrierSpaceUsagePlanMetrics, CTCarrierSpaceUsageAccountMetrics, NSMutableArray;

@interface PSUICarrierSpaceUsageSection : NSObject {

	NSString* _sharedPlanIdentifier;
	CTCarrierSpaceUsagePlanMetrics* _primaryMetrics;
	CTCarrierSpaceUsageAccountMetrics* _accountMetrics;
	NSMutableArray* _otherMetrics;
	NSMutableArray* _barCategories;

}

@property (retain) NSString * sharedPlanIdentifier;                                 //@synthesize sharedPlanIdentifier=_sharedPlanIdentifier - In the implementation block
@property (retain) CTCarrierSpaceUsagePlanMetrics * primaryMetrics;                 //@synthesize primaryMetrics=_primaryMetrics - In the implementation block
@property (retain) CTCarrierSpaceUsageAccountMetrics * accountMetrics;              //@synthesize accountMetrics=_accountMetrics - In the implementation block
@property (retain) NSMutableArray * otherMetrics;                                   //@synthesize otherMetrics=_otherMetrics - In the implementation block
@property (retain) NSMutableArray * barCategories;                                  //@synthesize barCategories=_barCategories - In the implementation block
-(CTCarrierSpaceUsageAccountMetrics *)accountMetrics;
-(NSString *)sharedPlanIdentifier;
-(void)setSharedPlanIdentifier:(NSString *)arg1 ;
-(void)setAccountMetrics:(CTCarrierSpaceUsageAccountMetrics *)arg1 ;
-(id)description;
-(CTCarrierSpaceUsagePlanMetrics *)primaryMetrics;
-(NSMutableArray *)otherMetrics;
-(NSMutableArray *)barCategories;
-(BOOL)isSharedPlan;
-(void)setPrimaryMetrics:(CTCarrierSpaceUsagePlanMetrics *)arg1 ;
-(void)setOtherMetrics:(NSMutableArray *)arg1 ;
-(void)setBarCategories:(NSMutableArray *)arg1 ;
@end
