/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATXAppPanelLaunchRatioLogger : NSObject
+(void)logAppPanelAppLaunchWithSBPageIndex:(unsigned long long)arg1 ;
+(void)logNonAppPanelAppLaunchFromDockWithUserDefaults:(id)arg1 ;
+(void)logNonAppPanelAppLaunchWithSBPageIndex:(unsigned long long)arg1 userDefaults:(id)arg2 ;
+(void)logAppPanelAppLaunchWithSBPageIndex:(unsigned long long)arg1 userDefaults:(id)arg2 ;
+(void)logCountedAppLaunchesToEventTracker:(id)arg1 homeScreenConfigCache:(id)arg2 userDefaults:(id)arg3 ;
+(id)_getOrCreateDataDictionaryFromDefaults:(id)arg1 ;
+(void)_writeDataDictionaryToDefaults:(id)arg1 dataDictionary:(id)arg2 ;
+(void)logCountedAppLaunchesToEventTracker:(id)arg1 homeScreenPage:(id)arg2 dataDictionary:(id)arg3 ;
+(void)logCountedDockLaunchesToEventTracker:(id)arg1 dockAppList:(id)arg2 dataDictionary:(id)arg3 ;
+(void)_logRatioMetricToTracker:(id)arg1 location:(int)arg2 ratioType:(int)arg3 numAppLaunches:(unsigned long long)arg4 numAppsShown:(unsigned long long)arg5 ;
+(int)_homeScreenLocationFromPageIndex:(unsigned long long)arg1 ;
+(void)logNonAppPanelAppLaunchFromDock;
+(void)logNonAppPanelAppLaunchWithSBPageIndex:(unsigned long long)arg1 ;
+(void)logCountedAppLaunchesToEventTracker;
@end

