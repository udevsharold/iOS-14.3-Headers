/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CTCarrierSpaceClient;

@interface SSBDatabaseUpdateSupport : NSObject {

	CTCarrierSpaceClient* _carrierSpaceClient;
	BOOL _onHighCellularDataPlan;

}

@property (nonatomic,readonly) BOOL onHighCellularDataPlan;              //@synthesize onHighCellularDataPlan=_onHighCellularDataPlan - In the implementation block
-(id)init;
-(void)_fetchCellularDataPlan;
-(void)_fetchCellularDataPlanWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)fetchCellularDataPlanSynchronously;
-(BOOL)onHighCellularDataPlan;
@end
