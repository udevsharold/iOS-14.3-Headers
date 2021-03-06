/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FCPersonalizationWhitelist;


@protocol FCFeedPersonalizing <FCTagRanking>
@property (readonly,nonatomic) FCPersonalizationWhitelist * whitelist; 
@optional
-(void)prepareFavorites:(/*^block*/id)arg1;
-(id)sortItems:(id)arg1 configurationSet:(long long)arg2;
-(id)bestOfGroupFromHeadlines:(id)arg1 configurationSet:(long long)arg2;
-(id)bestOfGroupFromHeadlines:(id)arg1 configurationSet:(long long)arg2;
-(double)scoreForGroupWithItems:(id)arg1 scoreProfiles:(id)arg2;
-(double)scoreForGroupWithItems:(id)arg1 scoreProfiles:(id)arg2;
-(void)fetchAggregateMapForPersonalizingItem:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchAggregateMapForPersonalizingItem:(id)arg1 completion:(/*^block*/id)arg2;
-(void)recordOccurrenceOfFeatures:(id)arg1 articleID:(id)arg2 individually:(BOOL)arg3 action:(unsigned long long)arg4;
-(void)recordOccurrenceOfFeatures:(id)arg1 articleID:(id)arg2 individually:(BOOL)arg3 action:(unsigned long long)arg4;
-(id)sortItems:(id)arg1 options:(long long)arg2 configurationSet:(long long)arg3;
-(id)bestOfGroupFromFeedItems:(id)arg1 scoreProfiles:(id)arg2 configurationSet:(long long)arg3;
-(id)bestOfGroupFromFeedItems:(id)arg1 scoreProfiles:(id)arg2 configurationSet:(long long)arg3;

@required
-(FCPersonalizationWhitelist *)whitelist;
-(id)limitItemsByFlowRate:(id)arg1 timeInterval:(double)arg2 publisherCount:(unsigned long long)arg3;
-(id)limitItemsByFlowRate:(id)arg1 timeInterval:(double)arg2 publisherCount:(unsigned long long)arg3;
-(id)diversifyItems:(id)arg1 limit:(unsigned long long)arg2 preselectedItems:(id)arg3;
-(id)diversifyItems:(id)arg1 limit:(unsigned long long)arg2;
-(void)prepareForUseWithCompletionHandler:(/*^block*/id)arg1;
-(void)prepareForUseWithCompletionHandler:(/*^block*/id)arg1;
-(double)decayedPublisherDiversificationPenalty;
-(id)sortItems:(id)arg1;
-(id)sortItems:(id)arg1 options:(long long)arg2;
-(id)limitItemsByMinimumItemQuality:(id)arg1;
-(id)limitItemsByMinimumItemQuality:(id)arg1;
-(unsigned long long)whitelistLevelForTagID:(id)arg1;
-(unsigned long long)whitelistLevelForTagID:(id)arg1;

@end

