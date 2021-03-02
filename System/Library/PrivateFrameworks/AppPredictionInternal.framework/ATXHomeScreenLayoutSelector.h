/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATXSuggestionDeduplicatorProtocol;
@class NSArray, ATXEngagementRecordManager, ATXStackStateTracker, ATXHomeScreenCachedSuggestions, NSUUID, NSMutableDictionary, NSSet;

@interface ATXHomeScreenLayoutSelector : NSObject {

	NSArray* _homeScreenPageConfigs;
	NSArray* _rankedSuggestions;
	BOOL _suggestionsWidgetsShouldBeDisjointOnAPage;
	id<ATXSuggestionDeduplicatorProtocol> _suggestionDeduplicator;
	ATXEngagementRecordManager* _engagementRecordManager;
	ATXStackStateTracker* _stackStateTracker;
	ATXHomeScreenCachedSuggestions* _previousHSCache;
	NSUUID* _cacheUpdateUUID;
	NSMutableDictionary* _stackIdToLayoutDictionary;
	NSMutableDictionary* _sgWidgetIdToLayoutDictionary;
	NSMutableDictionary* _appPanelIdToLayoutDictionary;
	NSSet* _dismissedSuggestionsForSGWidget;
	NSSet* _dismissedSuggestionsForAppPanels;

}
+(id)sgWidgetsInStack:(id)arg1 ;
-(void)removeEngagedWidgetSuggestionsIfApplicableForSuggestions:(id)arg1 stackIsStale:(BOOL)arg2 stackConfig:(id)arg3 ;
-(id)appPredictionSuggestionsFromSuggestions:(id)arg1 ;
-(BOOL)stackIsPinnedSGWidget:(id)arg1 ;
-(id)fallbackCandidatesGivenSelectedCandidates;
-(id)initWithHomeScreenPageConfigurations:(id)arg1 rankedSuggestions:(id)arg2 suggestionsWidgetsShouldBeDisjointOnAPage:(BOOL)arg3 ;
-(id)initWithHomeScreenPageConfigurations:(id)arg1 rankedSuggestions:(id)arg2 suggestionsWidgetsShouldBeDisjointOnAPage:(BOOL)arg3 suggestionDeduplicator:(id)arg4 engagementRecordManager:(id)arg5 stackStateTracker:(id)arg6 ;
-(void)setLayoutForTopOfStackWithConfig:(id)arg1 pageState:(id)arg2 ;
-(id)freshPageStateWithPageConfig:(id)arg1 ;
-(BOOL)stackIsStale:(id)arg1 ;
-(id)selectedLayouts;
-(void)setLayoutForAppPanelWithConfig:(id)arg1 panelIndex:(unsigned long long)arg2 pageState:(id)arg3 ;
-(void)trackUnfilledSGWidgetsInStack:(id)arg1 pageState:(id)arg2 ;
-(void)setLayoutsForPinnedSGWidgetsOnPage:(id)arg1 ;
-(BOOL)canPlaceInfoWidgetSuggestion:(id)arg1 onTopOfStack:(id)arg2 pageState:(id)arg3 widgetExistsInStack:(BOOL*)arg4 ;
-(id)validCandidateSuggestionsForTopOfStack:(id)arg1 pageState:(id)arg2 stackIsStale:(BOOL)arg3 ;
-(id)generateLayoutsWithSuggestions:(id)arg1 consumerSubType:(unsigned char)arg2 stackLayoutSize:(unsigned long long)arg3 ;
-(id)validCandidateSuggestionsForAppPanel:(id)arg1 panelIndex:(unsigned long long)arg2 pageState:(id)arg3 ;
-(BOOL)canPlaceSGWidgetOnTopOfStack:(id)arg1 pageState:(id)arg2 ;
-(id)validCandidateSuggestionsForUnfilledSGWidgetWithPageState:(id)arg1 ;
-(BOOL)suggestionLayoutIsValidForTopOfStack:(id)arg1 stackConfig:(id)arg2 pageConfig:(id)arg3 stackIsStale:(BOOL)arg4 ;
-(void)setLayoutsForSuggestionsWidgetsInStack:(id)arg1 selectedLayout:(id)arg2 ;
-(void)removeSuggestionsWithInferredEngagementIfApplicableFromIndices:(id)arg1 validSuggestions:(id)arg2 ;
-(id)reorderedSuggestionsBasedOnPreviousLayouts:(id)arg1 panelIndex:(unsigned long long)arg2 pageState:(id)arg3 ;
-(void)setLayoutsForAddWidgetUI;
-(void)removeWidgetAlreadyOnTopOfStackFromValidSuggestionsForStalenessRotationIfPossible:(id)arg1 stackConfig:(id)arg2 ;
-(void)setLayoutForUnfilledSGWidget:(id)arg1 pageState:(id)arg2 ;
-(id)regenerateLowConfidenceStackRotationForPreviouslyStaleStackIfNeeded:(id)arg1 stackConfig:(id)arg2 ;
@end
