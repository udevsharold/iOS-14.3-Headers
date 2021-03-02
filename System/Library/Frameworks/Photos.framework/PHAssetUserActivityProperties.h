/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetPropertySet.h>

@interface PHAssetUserActivityProperties : PHAssetPropertySet {

	long long _syncedPlayCount;
	long long _syncedShareCount;
	long long _syncedViewCount;
	long long _pendingPlayCount;
	long long _pendingShareCount;
	long long _pendingViewCount;

}

@property (assign,nonatomic) long long syncedPlayCount;                //@synthesize syncedPlayCount=_syncedPlayCount - In the implementation block
@property (assign,nonatomic) long long syncedShareCount;               //@synthesize syncedShareCount=_syncedShareCount - In the implementation block
@property (assign,nonatomic) long long syncedViewCount;                //@synthesize syncedViewCount=_syncedViewCount - In the implementation block
@property (assign,nonatomic) long long pendingPlayCount;               //@synthesize pendingPlayCount=_pendingPlayCount - In the implementation block
@property (assign,nonatomic) long long pendingShareCount;              //@synthesize pendingShareCount=_pendingShareCount - In the implementation block
@property (assign,nonatomic) long long pendingViewCount;               //@synthesize pendingViewCount=_pendingViewCount - In the implementation block
@property (nonatomic,readonly) long long playCount; 
@property (nonatomic,readonly) long long shareCount; 
@property (nonatomic,readonly) long long viewCount; 
+(id)propertySetName;
+(id)propertiesToFetch;
-(long long)playCount;
-(void)setPendingViewCount:(long long)arg1 ;
-(long long)syncedPlayCount;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(long long)pendingShareCount;
-(void)setSyncedViewCount:(long long)arg1 ;
-(long long)shareCount;
-(long long)syncedViewCount;
-(long long)pendingPlayCount;
-(void)setPendingShareCount:(long long)arg1 ;
-(void)setPendingPlayCount:(long long)arg1 ;
-(void)setSyncedShareCount:(long long)arg1 ;
-(long long)viewCount;
-(void)setSyncedPlayCount:(long long)arg1 ;
-(long long)syncedShareCount;
-(long long)pendingViewCount;
@end
