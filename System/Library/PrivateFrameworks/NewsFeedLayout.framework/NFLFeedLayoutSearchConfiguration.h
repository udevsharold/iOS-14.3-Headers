/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol NFLFeedLayoutSearchConfiguration <NSObject,NFCopying>
@property (assign,getter=isShowingAccessoryText,nonatomic) BOOL showAccessoryText; 
@property (nonatomic,readonly) unsigned long long preferredTileInfoBatchSize; 
@property (nonatomic,readonly) NSArray * allRowTypes; 
@optional
-(BOOL)mayRowType:(unsigned long long)arg1 useTileInfos:(id)arg2 withPreferedContentSizeCategory:(id)arg3;
-(id)preferredOrderingOfTileInfos:(id)arg1;

@required
-(BOOL)isShowingAccessoryText;
-(unsigned long long)numberOfTileInfosUsedByRowType:(unsigned long long)arg1;
-(SCD_Struct_NF1*)subBatchLayoutSeedForRowType:(unsigned long long)arg1 withTileInfos:(id)arg2;
-(unsigned long long)preferredTileInfoBatchSize;
-(NSArray *)allRowTypes;
-(void)setShowAccessoryText:(BOOL)arg1;
-(double)transitionRankFromRowTypeToNone:(unsigned long long)arg1;
-(double)transitionRankFromRowType:(unsigned long long)arg1 toRowType:(unsigned long long)arg2;
-(id)nextRowTypeCandidatesForRowType:(unsigned long long)arg1;
-(id)descriptionForRowType:(unsigned long long)arg1;
-(double)transitionRankFromNoneToRowType:(unsigned long long)arg1;
-(Class)rankedLayoutGenerationOperationClassForRequest:(id)arg1;
-(Class)subBatchLayoutTilingOperationClassForRowType:(unsigned long long)arg1;
-(BOOL)supportsTileInfoType:(unsigned long long)arg1;

@end

