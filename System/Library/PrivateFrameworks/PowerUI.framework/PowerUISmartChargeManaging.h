/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PowerUISmartChargeManaging <NSObject>
@required
-(void)simulateCurrentOutputAsOfDate:(id)arg1 overrideAllSignals:(BOOL)arg2 withHandler:(/*^block*/id)arg3;
-(void)isOBCSupportedWithHandler:(/*^block*/id)arg1;
-(void)isSmartChargingCurrentlyEnabledWithHandler:(/*^block*/id)arg1;
-(void)resetDevelopmentMode;
-(void)enterDevelopmentMode;
-(void)powerLogStatusWithHandler:(/*^block*/id)arg1;
-(void)client:(id)arg1 setState:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3;
-(void)fullChargeDeadlineWithHandler:(/*^block*/id)arg1;
-(void)isOBCEngagedWithHandler:(/*^block*/id)arg1;
-(void)statusWithHandler:(/*^block*/id)arg1;

@end
