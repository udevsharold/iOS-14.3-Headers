/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATXHomeScreenLogWidgetSetupDictionaries, ATXHomeScreenLogWidgetEventDictionaries, ATXHomeScreenLogWidgetRotationDictionaries, ATXHomeScreenLogSystemEventDictionaries, ATXHomeScreenLogSystemChangeDictionary, ATXHomeScreenLogWidgetAddSheetDictionaries;

@interface ATXHomeScreenLogUploader : NSObject {

	ATXHomeScreenLogWidgetSetupDictionaries* _widgetSetupDictionaries;
	ATXHomeScreenLogWidgetEventDictionaries* _widgetEventDictionaries;
	ATXHomeScreenLogWidgetRotationDictionaries* _widgetRotationDictionaries;
	ATXHomeScreenLogSystemEventDictionaries* _systemEventDictionary;
	ATXHomeScreenLogSystemChangeDictionary* _systemChangeDictionary;
	ATXHomeScreenLogWidgetAddSheetDictionaries* _widgetAddSheetDictionaries;

}
+(BOOL)_shouldProcessATXUIEvent:(id)arg1 startTime:(double)arg2 ;
-(id)init;
-(void)uploadHomeScreenSummaryLogsToCoreAnalyticsWithActivity:(id)arg1 customStartDate:(id)arg2 dryRunCompletionHandler:(/*^block*/id)arg3 ;
-(id)_timeBasedMergePublisher:(id)arg1 withOtherPublishers:(id)arg2 ;
@end

