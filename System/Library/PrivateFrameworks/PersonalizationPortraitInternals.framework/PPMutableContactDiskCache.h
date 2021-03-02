/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PPContactDiskCache.h>

@interface PPMutableContactDiskCache : PPContactDiskCache
-(BOOL)updateNameRecordCacheWithHistoryRecords:(id)arg1 error:(id*)arg2 ;
-(BOOL)addNameRecords:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteNameRecordCache;
-(BOOL)_writeCache:(id)arg1 path:(id)arg2 error:(id*)arg3 ;
-(id)_createNewCacheObjectWithCreatedAt:(long long)arg1 ;
-(long long)lastCreatedAt;
-(void)setLastCreatedAt:(long long)arg1 ;
-(BOOL)deleteCacheIfTooOld;
-(id)_recordSetBucketsForNameRecords:(id)arg1 ;
@end
