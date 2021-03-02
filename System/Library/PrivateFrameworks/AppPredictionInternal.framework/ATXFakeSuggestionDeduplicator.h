/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXSuggestionDeduplicatorProtocol.h>

@class ATXHomeScreenWidgetIdentifiable, NSArray, NSSet, NSString;

@interface ATXFakeSuggestionDeduplicator : NSObject <ATXSuggestionDeduplicatorProtocol> {

	BOOL _blanketValueIsSet;
	BOOL _existingSuggestionsReturnValueIsSet;
	BOOL _homeScreenPageReturnValueIsSet;
	BOOL _duplicateWidgetReturnValueIsSet;
	BOOL _blanketReturnValue;
	BOOL _existingSuggestionsReturnValue;
	BOOL _homeScreenPageReturnValue;
	ATXHomeScreenWidgetIdentifiable* _duplicateWidgetReturnValue;
	NSArray* _pinnedWidgetSuggestions;
	NSSet* _appsOnPage;
	NSArray* _suggestionsInRecentlyEngagedCache;

}

@property (assign,nonatomic) BOOL blanketReturnValue;                                                   //@synthesize blanketReturnValue=_blanketReturnValue - In the implementation block
@property (assign,nonatomic) BOOL existingSuggestionsReturnValue;                                       //@synthesize existingSuggestionsReturnValue=_existingSuggestionsReturnValue - In the implementation block
@property (assign,nonatomic) BOOL homeScreenPageReturnValue;                                            //@synthesize homeScreenPageReturnValue=_homeScreenPageReturnValue - In the implementation block
@property (nonatomic,retain) ATXHomeScreenWidgetIdentifiable * duplicateWidgetReturnValue;              //@synthesize duplicateWidgetReturnValue=_duplicateWidgetReturnValue - In the implementation block
@property (nonatomic,retain) NSArray * pinnedWidgetSuggestions;                                         //@synthesize pinnedWidgetSuggestions=_pinnedWidgetSuggestions - In the implementation block
@property (nonatomic,retain) NSSet * appsOnPage;                                                        //@synthesize appsOnPage=_appsOnPage - In the implementation block
@property (nonatomic,retain) NSArray * suggestionsInRecentlyEngagedCache;                               //@synthesize suggestionsInRecentlyEngagedCache=_suggestionsInRecentlyEngagedCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)suggestionIsDuplicate:(id)arg1 otherApps:(id)arg2 ;
-(BOOL)suggestionIsDuplicate:(id)arg1 existingSuggestions:(id)arg2 ;
-(id)pinnedWidgetIdentifiablesWithExtensionId:(id)arg1 homeScreenPageConfig:(id)arg2 excludingStackConfigId:(id)arg3 shouldStopAfterFindingFirstOne:(BOOL)arg4 ;
-(id)duplicateWidgetForWidgetSuggestion:(id)arg1 otherWidgets:(id)arg2 ;
-(BOOL)suggestionIsDuplicate:(id)arg1 homeScreenPageConfig:(id)arg2 ;
-(BOOL)suggestionIsDuplicateAppOrWidget:(id)arg1 homeScreenPageConfig:(id)arg2 excludingStackConfigId:(id)arg3 ;
-(BOOL)widgetSuggestionIsDuplicate:(id)arg1 homeScreenPageConfig:(id)arg2 excludingStackConfigId:(id)arg3 ;
-(BOOL)widgetSuggestionIsPinned:(id)arg1 homeScreenPage:(id)arg2 excludingStackConfigId:(id)arg3 ;
-(BOOL)suggestionIsDuplicateOfDeweyUI:(id)arg1 ;
-(BOOL)suggestionIsDuplicate:(id)arg1 appsOnHomeScreenPageAtIndex:(unsigned long long)arg2 ;
-(BOOL)widgetExtensionIdIsPinned:(id)arg1 homeScreenPageConfig:(id)arg2 excludingStackConfigId:(id)arg3 ;
-(BOOL)widgetExtensionIdIsDuplicate:(id)arg1 homeScreenPageConfig:(id)arg2 excludingStackConfigId:(id)arg3 ;
-(void)setBlanketReturnValue:(BOOL)arg1 ;
-(void)setExistingSuggestionsReturnValue:(BOOL)arg1 ;
-(void)setHomeScreenPageReturnValue:(BOOL)arg1 ;
-(void)setDuplicateWidgetReturnValue:(ATXHomeScreenWidgetIdentifiable *)arg1 ;
-(BOOL)blanketReturnValue;
-(BOOL)existingSuggestionsReturnValue;
-(BOOL)homeScreenPageReturnValue;
-(ATXHomeScreenWidgetIdentifiable *)duplicateWidgetReturnValue;
-(NSArray *)pinnedWidgetSuggestions;
-(void)setPinnedWidgetSuggestions:(NSArray *)arg1 ;
-(NSSet *)appsOnPage;
-(void)setAppsOnPage:(NSSet *)arg1 ;
-(NSArray *)suggestionsInRecentlyEngagedCache;
-(void)setSuggestionsInRecentlyEngagedCache:(NSArray *)arg1 ;
@end
