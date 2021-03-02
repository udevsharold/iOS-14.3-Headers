/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDNetworkRouterFirewallRuleManagerDebug <NSObject>
@required
-(void)dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(BOOL)arg3 verifySignatures:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(void)dumpAllLocalRulesIgnoringOverrides:(BOOL)arg1 rawOutput:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)addOverrides:(id)arg1 completion:(/*^block*/id)arg2;
-(void)dumpPairedMetadataForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 completion:(/*^block*/id)arg6;
-(void)setOverrides:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeAllOverridesWithCompletion:(/*^block*/id)arg1;
-(void)dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 completion:(/*^block*/id)arg6;
-(void)dumpLocalRulesForProductGroup:(id)arg1 ignoreOverrides:(BOOL)arg2 rawOutput:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)listCloudRecordsForProductGroup:(id)arg1 rawOutput:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 completion:(/*^block*/id)arg3;
-(void)removeAllLocalRulesWithCompletion:(/*^block*/id)arg1;
-(void)forceFetchCloudChangesAndForceChangeNotifications:(BOOL)arg1 completion:(/*^block*/id)arg2;

@end
