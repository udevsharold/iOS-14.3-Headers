/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CoreTelephonyClient;

@interface CTCellularPlanProvisioning : NSObject {

	CoreTelephonyClient* _client;

}
-(id)init;
-(BOOL)supportsCellularPlan;
-(void)addPlanWith:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

