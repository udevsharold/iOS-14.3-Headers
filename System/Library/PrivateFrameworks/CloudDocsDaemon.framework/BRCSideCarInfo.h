/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BRFieldCKInfo, NSData;

@interface BRCSideCarInfo : NSObject {

	BRFieldCKInfo* _ckInfo;
	long long _favoriteRank;
	long long _lastUsedTime;
	NSData* _finderTags;

}

@property (nonatomic,retain) BRFieldCKInfo * ckInfo;              //@synthesize ckInfo=_ckInfo - In the implementation block
@property (assign,nonatomic) long long lastUsedTime;              //@synthesize lastUsedTime=_lastUsedTime - In the implementation block
@property (assign,nonatomic) long long favoriteRank;              //@synthesize favoriteRank=_favoriteRank - In the implementation block
@property (nonatomic,retain) NSData * finderTags;                 //@synthesize finderTags=_finderTags - In the implementation block
-(BRFieldCKInfo *)ckInfo;
-(id)description;
-(void)setFavoriteRank:(long long)arg1 ;
-(long long)favoriteRank;
-(void)setLastUsedTime:(long long)arg1 ;
-(long long)lastUsedTime;
-(id)debugDescription;
-(id)descriptionWithContext:(id)arg1 ;
-(BOOL)hasfieldsToSync;
-(void)setCkInfo:(BRFieldCKInfo *)arg1 ;
-(NSData *)finderTags;
-(void)setFinderTags:(NSData *)arg1 ;
@end

