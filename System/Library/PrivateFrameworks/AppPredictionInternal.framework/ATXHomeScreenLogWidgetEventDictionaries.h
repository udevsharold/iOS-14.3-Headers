/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ATXHomeScreenLogWidgetEventDictionaries : NSObject {

	NSMutableDictionary* _widgetEventDictionaries;

}
+(id)widgetEventDictionaryAccumulatorKeys;
+(id)widgetEventDictionaryAccumulatorSplitByLocationKeys;
-(id)init;
-(void)sendToCoreAnalytics;
-(id)dryRunResult;
-(id)_widgetEventDictionaryForHomeScreenEvent:(id)arg1 ;
-(id)_widgetEventDictionaryForWidgetId:(id)arg1 widgetKind:(id)arg2 widgetSize:(unsigned long long)arg3 ;
-(id)_widgetEventDictionaryKeyWithWidgetId:(id)arg1 widgetKind:(id)arg2 widgetSize:(unsigned long long)arg3 ;
-(id)_createNewWidgetEventDictionaryForBundleId:(id)arg1 kind:(id)arg2 size:(unsigned long long)arg3 ;
-(id)_widgetEventDictionaryForATXHomeScreenWidgetIdentifiable:(id)arg1 ;
-(void)updateWidgetLevelSummaryForHomeScreenEvent:(id)arg1 lastStackEvent:(id)arg2 ;
-(void)updateWidgetLevelSummaryForHomeScreenPages:(id)arg1 ;
-(void)updateWidgetLevelSummaryForWidgetPseudoTapWithStackShownEvent:(id)arg1 ;
-(void)updateUnlockSessionsWithWidgetDwell:(id)arg1 ;
@end
