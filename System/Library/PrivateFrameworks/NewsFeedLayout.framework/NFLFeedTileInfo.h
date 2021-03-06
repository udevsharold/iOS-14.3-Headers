/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray, NFLHeadlineTileInfo;


@protocol NFLFeedTileInfo <NSObject,NFCopying>
@property (nonatomic,readonly) unsigned long long tileInfoType; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL pageable; 
@property (getter=isSelectable,nonatomic,readonly) BOOL selectable; 
@property (nonatomic,readonly) unsigned long long bookmarkOffsetType; 
@property (nonatomic,readonly) NSArray * underlyingFeedElements; 
@property (nonatomic,readonly) NFLHeadlineTileInfo * feedTileInfoForBookmarking; 
@property (nonatomic,copy,readonly) NSString * groupIdentifier; 
@required
-(NSString *)groupIdentifier;
-(unsigned long long)bookmarkOffsetType;
-(BOOL)pageable;
-(BOOL)isSelectable;
-(NSArray *)underlyingFeedElements;
-(unsigned long long)tileInfoType;
-(NSString *)identifier;
-(id)updatedTileInfoWithNewHeadline:(id)arg1;
-(NFLHeadlineTileInfo *)feedTileInfoForBookmarking;

@end

