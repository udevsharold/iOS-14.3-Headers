/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface WBSRecentWebSearchesController : NSObject {

	NSMutableArray* _recentSearchEntries;

}
+(id)_defaultsKey;
+(BOOL)_shouldTrackSearches;
+(unsigned long long)_maximumNumberOfSearchesToTrack;
-(void)_addRecentSearchEntry:(id)arg1 ;
-(void)_saveRecentSearches;
-(void)_loadRecentSearchesIfNeeded;
-(id)recentSearchesMatchingPrefix:(id)arg1 ;
-(void)_removeLegacyRecentSearchesData;
-(id)_recentSearchesDictionaries;
-(void)_saveRecentSearchDictionaries:(id)arg1 toUserDefaultsUsingKey:(id)arg2 ;
-(id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)arg1 ;
-(void)_migrateLegacyData;
-(void)addRecentSearch:(id)arg1 ;
-(void)clearRecentSearchesAddedAfterDate:(id)arg1 ;
-(void)_addLegacySearch:(id)arg1 ;
-(void)clearRecentSearches;
-(id)recentSearches;
@end
