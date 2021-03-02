/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXSuggestionDeduplicatorProtocol.h>

@class NSDictionary, NSString;

@interface ATXSuggestionDeduplicator : NSObject <ATXSuggestionDeduplicatorProtocol> {

	NSDictionary* _visibleAppsByPage;
	NSDictionary* _bundleIdReplacementDict;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_initWithVisibleAppsByPage:(id)arg1 ;
-(id)init;
-(id)stacksToConsiderForLeftOfHomeForStackId:(id)arg1 stacksOnPage:(id)arg2 ;
-(BOOL)suggestionIsDuplicate:(id)arg1 otherApps:(id)arg2 ;
-(BOOL)suggestionsAreDuplicateAppAndAction:(id)arg1 otherSuggestion:(id)arg2 ;
-(id)stacksWithDuplicateWidgetSuggestion:(id)arg1 homeScreenPageConfig:(id)arg2 excludingStackConfigId:(id)arg3 ;
-(BOOL)suggestionIsDuplicate:(id)arg1 existingSuggestions:(id)arg2 ;
-(id)pinnedWidgetIdentifiablesWithExtensionId:(id)arg1 homeScreenPageConfig:(id)arg2 excludingStackConfigId:(id)arg3 shouldStopAfterFindingFirstOne:(BOOL)arg4 ;
-(id)duplicateWidgetForWidgetSuggestion:(id)arg1 otherWidgets:(id)arg2 ;
-(id)stacksWithDuplicateWidgetExtensionId:(id)arg1 homeScreenPageConfig:(id)arg2 excludingStackConfigId:(id)arg3 ;
-(BOOL)suggestionIsDuplicate:(id)arg1 homeScreenPageConfig:(id)arg2 ;
-(BOOL)suggestionIsDuplicateAppOrWidget:(id)arg1 homeScreenPageConfig:(id)arg2 excludingStackConfigId:(id)arg3 ;
-(BOOL)widgetSuggestionIsDuplicate:(id)arg1 homeScreenPageConfig:(id)arg2 excludingStackConfigId:(id)arg3 ;
-(BOOL)widgetSuggestionIsPinned:(id)arg1 homeScreenPage:(id)arg2 excludingStackConfigId:(id)arg3 ;
-(BOOL)suggestionsAreAppAndAction:(id)arg1 otherSuggestion:(id)arg2 ;
-(BOOL)suggestionIsDuplicateOfDeweyUI:(id)arg1 ;
-(BOOL)suggestionIsDuplicate:(id)arg1 appsOnHomeScreenPageAtIndex:(unsigned long long)arg2 ;
-(id)executableClassStringsToUnarchiveDuringComparison;
-(BOOL)widgetExtensionIdIsPinned:(id)arg1 homeScreenPageConfig:(id)arg2 excludingStackConfigId:(id)arg3 ;
-(id)replacementBundleIdForBundleId:(id)arg1 ;
-(BOOL)executableSpecsAreDuplicates:(id)arg1 otherExecutableSpec:(id)arg2 ;
-(BOOL)widgetExtensionIdIsDuplicate:(id)arg1 homeScreenPageConfig:(id)arg2 excludingStackConfigId:(id)arg3 ;
@end
