/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATXInformationStore, ATXSuggestionDeduplicator;

@interface ATXDegenerateStackAnalyzer : NSObject {

	ATXInformationStore* _informationStore;
	ATXSuggestionDeduplicator* _deduplicator;

}
-(id)init;
-(BOOL)isSmartStackPossiblyDegenerate:(id)arg1 onPage:(id)arg2 usingTimelineEntriesSinceDate:(id)arg3 ;
-(id)initWithInformationStore:(id)arg1 ;
-(id)_simulatedInfoSuggestionForWidget:(id)arg1 ;
-(BOOL)_wouldBlendingDeduplicateWidget:(id)arg1 inStack:(id)arg2 againstOtherWidgetsOnPage:(id)arg3 ;
-(BOOL)_isWidgetEligibleForHeuristicFallback:(id)arg1 ;
-(BOOL)_hasWidgetHadTimelineDonations:(id)arg1 startDate:(id)arg2 ;
-(BOOL)areAllSmartStacksPossiblyDegenerateInPages:(id)arg1 usingTimelineEntriesSinceDate:(id)arg2 ;
@end
