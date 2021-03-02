/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ATXHomeScreenLogWidgetRotationDictionaries : NSObject {

	NSMutableDictionary* _widgetRotationDictionaries;

}
+(id)_sourceKeyForWidgetRotationForRotationSession:(id)arg1 ;
+(id)widgetRotationDictionaryAccumulatorKeys;
+(id)_suggestionReasonToWidgetRotationDictionariesSourceKey:(int)arg1 ;
+(id)_sourceKeyOfNonProactiveWidgetRotationForReason:(id)arg1 ;
-(id)init;
-(id)_widgetRotationDictionaryForWidgetBundleId:(id)arg1 kind:(id)arg2 size:(unsigned long long)arg3 source:(id)arg4 location:(id)arg5 ;
-(id)_widgetRotationDictionaryKeyWithWidgetId:(id)arg1 widgetKind:(id)arg2 widgetSize:(unsigned long long)arg3 source:(id)arg4 location:(id)arg5 ;
-(id)_createNewWidgetRotationDictionaryForBundleId:(id)arg1 kind:(id)arg2 size:(unsigned long long)arg3 source:(id)arg4 location:(id)arg5 ;
-(void)updateWithRotationSession:(id)arg1 ;
-(void)sendToCoreAnalytics;
-(id)dryRunResult;
@end
