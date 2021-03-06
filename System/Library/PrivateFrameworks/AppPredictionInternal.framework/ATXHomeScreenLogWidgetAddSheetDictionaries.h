/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ATXHomeScreenLogWidgetAddSheetDictionaries : NSObject {

	NSMutableDictionary* _widgetAddSheetDictionaries;

}
+(id)rankKeysSplitBySize;
-(id)init;
-(void)sendToCoreAnalytics;
-(id)dryRunResult;
-(id)_widgetAddSheetDictionaryForStack;
-(void)_updateWidgetAddSheetDictionariesWithDictionary:(id)arg1 suggestedSize:(unsigned long long)arg2 inStack:(BOOL)arg3 rank:(unsigned long long)arg4 ;
-(void)_updateWidgetAddSheetDictionariesForDescriptor:(id)arg1 inStack:(BOOL)arg2 rank:(unsigned long long)arg3 ;
-(void)_updateWidgetAddSheetDictionariesForStack:(id)arg1 suggestedSize:(unsigned long long)arg2 ;
-(id)_widgetAddSheetDictionaryForDescriptor:(id)arg1 ;
-(id)_widgetAddSheetDictionaryForWidgetId:(id)arg1 widgetKind:(id)arg2 ;
-(id)widgetAddSheetDictionaryKeyWithWidgetId:(id)arg1 widgetKind:(id)arg2 ;
-(id)_createNewWidgetAddSheetDictionaryForBundleId:(id)arg1 kind:(id)arg2 ;
-(void)updateWidgetAddSheetSummaryForSuggestions:(id)arg1 ;
-(void)updateWidgetAddSheetSummaryForDefaultStack:(id)arg1 ;
@end

