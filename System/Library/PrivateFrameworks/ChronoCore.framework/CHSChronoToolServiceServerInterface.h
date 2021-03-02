/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChronoCore.framework/ChronoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CHSChronoToolServiceServerInterface <NSObject>
@required
-(oneway void)cacheDescriptorsForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)disableWakeBudgetWithCompletion:(/*^block*/id)arg1;
-(oneway void)disableWakeBudgetForExtensionWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)widgetsWithTimelines:(/*^block*/id)arg1;
-(oneway void)resetWakeBudgetForExtensionWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)fetchStateWithCompletion:(/*^block*/id)arg1;
-(oneway void)resetWakeBudgetWithCompletion:(/*^block*/id)arg1;
-(oneway void)listStateCaptureIdentifiersWithCompletion:(/*^block*/id)arg1;
-(oneway void)wakesRemainingForExtensionWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)resetCaches:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)fetchStateForItemWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)timelineForWidgetKey:(id)arg1 completion:(/*^block*/id)arg2;

@end
