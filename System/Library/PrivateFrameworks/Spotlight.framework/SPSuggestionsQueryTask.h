/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotlight/SPGeneralQueryTask.h>

@interface SPSuggestionsQueryTask : SPGeneralQueryTask
-(id)unsafeSections;
-(id)displayedText;
-(BOOL)readyToUpdate;
-(id)initForSession:(id)arg1 withQuery:(id)arg2 ;
-(void)clearInternal:(int)arg1 invalidate:(BOOL)arg2 ;
-(void)processAppResults:(id)arg1 maxAppResults:(unsigned long long)arg2 section:(id)arg3 topHitsIndex:(unsigned long long*)arg4 ;
-(id)showMoreButtonResultSection;
-(void)addAsYouTypeRelatedSearchResultToSections:(id)arg1 withRelatedSearchSection:(id)arg2 ;
-(id)makeSearchThroughSuggestions;
-(id)committedSearchSections;
-(id)_appResultSection;
-(id)searchThroughSection:(id)arg1 ;
-(id)bundleIdentifiersForHiddenSections;
-(void)filterSearchThroughStringsNotInShowMore:(id)arg1 excludedBundleIdentifiers:(id)arg2 ;
-(id)searchThroughSuggestions:(id)arg1 maxCount:(long long)arg2 ;
-(id)_makeSuggestionsSectionFromSuggestions:(id)arg1 andResultSection:(id)arg2 withSectionBundleIdentifier:(id)arg3 ;
-(id)_newSuggestionSection;
-(id)sectionsForCompletions;
-(id)_topResultOnlySectionFrom:(id)arg1 ;
-(id)_allowListedTopResultFromSection:(id)arg1 ;
-(id)_originalTopResultFromSections:(id)arg1 ;
@end
