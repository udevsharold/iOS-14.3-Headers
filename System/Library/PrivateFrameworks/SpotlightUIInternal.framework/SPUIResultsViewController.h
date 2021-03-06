/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUIResultsViewController.h>
#import <libobjc.A.dylib/SPSearchAgentDelegate.h>
#import <libobjc.A.dylib/SPUIResultsViewTestingDelegate.h>

@class SFSearchResult, NSArray, SFResultSection;

@interface SPUIResultsViewController : SearchUIResultsViewController <SPSearchAgentDelegate, SPUIResultsViewTestingDelegate> {

	unsigned long long _startTime;
	BOOL _isHighlighting;
	BOOL _hasResultsWaitingToUpdate;
	/*^block*/id didFinishGettingAllResultsHandler;
	SFSearchResult* _goTakeoverResult;
	NSArray* _resultSections;
	SFResultSection* _suggestionsSection;
	SFResultSection* _searchThroughSection;
	unsigned long long _previousQueryId;
	SFSearchResult* _highlightedResult;

}

@property (retain) NSArray * resultSections;                                           //@synthesize resultSections=_resultSections - In the implementation block
@property (retain) SFResultSection * suggestionsSection;                               //@synthesize suggestionsSection=_suggestionsSection - In the implementation block
@property (readonly) SFSearchResult * actualSearchSuggestionResult; 
@property (assign) BOOL hasResultsWaitingToUpdate;                                     //@synthesize hasResultsWaitingToUpdate=_hasResultsWaitingToUpdate - In the implementation block
@property (retain) SFResultSection * searchThroughSection;                             //@synthesize searchThroughSection=_searchThroughSection - In the implementation block
@property (assign) unsigned long long previousQueryId;                                 //@synthesize previousQueryId=_previousQueryId - In the implementation block
@property (retain) SFSearchResult * highlightedResult;                                 //@synthesize highlightedResult=_highlightedResult - In the implementation block
@property (assign,nonatomic,__weak) id<SPUIResultsViewDelegate> delegate; 
@property (nonatomic,retain) SFSearchResult * goTakeoverResult;                        //@synthesize goTakeoverResult=_goTakeoverResult - In the implementation block
@property (nonatomic,readonly) BOOL isHighlighting;                                    //@synthesize isHighlighting=_isHighlighting - In the implementation block
@property (nonatomic,copy) id didFinishGettingAllResultsHandler; 
-(NSArray *)resultSections;
-(void)setGoTakeoverResult:(SFSearchResult *)arg1 ;
-(void)changeTextFieldsReturnKeyType:(long long)arg1 withGoTakeoverResult:(id)arg2 ;
-(unsigned long long)previousQueryId;
-(BOOL)isResultOriginalSearchSuggestion:(id)arg1 ;
-(id)makeAsYouTypeSuggestionSearchResultWithSearchString:(id)arg1 detailText:(id)arg2 suggestionIdentifier:(id)arg3 queryId:(unsigned long long)arg4 ;
-(void)setDidFinishGettingAllResultsHandler:(id)arg1 ;
-(void)setResultSections:(NSArray *)arg1 ;
-(void)_pushSectionsUpdate;
-(SFResultSection *)suggestionsSection;
-(BOOL)hasResultsWaitingToUpdate;
-(void)searchAgentUpdatedResults:(id)arg1 ;
-(void)insertYahooAttributionIfNecessaryForResult:(id)arg1 ;
-(void)removeCompletionAndHighlightAsTyped:(BOOL)arg1 ;
-(SFSearchResult *)actualSearchSuggestionResult;
-(void)setPreviousQueryId:(unsigned long long)arg1 ;
-(SFSearchResult *)goTakeoverResult;
-(void)clearSuggestionSection;
-(BOOL)isHighlighting;
-(void)setHighlightedResult:(SFSearchResult *)arg1 ;
-(id)asTypedSearchResult;
-(void)searchUpdatedWithString:(id)arg1 tokenEntity:(id)arg2 queryId:(unsigned long long)arg3 wantsCompletions:(BOOL)arg4 ;
-(SFResultSection *)searchThroughSection;
-(void)setHasResultsWaitingToUpdate:(BOOL)arg1 ;
-(SFSearchResult *)highlightedResult;
-(BOOL)_hasRealSuggestions;
-(id)initWithSearchModel:(id)arg1 ;
-(void)searchAgentFinishedQueryWithoutAdditionalResults:(id)arg1 ;
-(void)searchAgentClearedResults:(id)arg1 ;
-(void)forceHighlightForResult:(id)arg1 ;
-(void)setSearchThroughSection:(SFResultSection *)arg1 ;
-(void)setSuggestionsSection:(SFResultSection *)arg1 ;
-(id)didFinishGettingAllResultsHandler;
@end

