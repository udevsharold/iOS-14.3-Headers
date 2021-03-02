/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChronoCore.framework/ChronoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CHSChronoWidgetServiceServerInterface <NSObject>
@optional
-(oneway void)setMetricsSpecification:(id)arg1;

@required
-(oneway void)flushPowerlog;
-(oneway void)setConfiguredWidgetContainerDescriptors:(id)arg1;
-(id)widgetEnvironmentDataForBundleIdentifier:(id)arg1;
-(id)_URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)arg1 info:(id)arg2;
-(oneway void)applicationWithBundleIdentifierEnteredForeground:(id)arg1;
-(void)reloadTimelineForAvocadoWithIdentifier:(id)arg1 inBundleWithIdentifier:(id)arg2 error:(id*)arg3;
-(oneway void)expireLocationGracePeriods;

@end
