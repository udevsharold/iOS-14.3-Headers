/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AVTStickerFetchRequest : NSObject {

	long long _resultLimit;
	NSString* _avatarIdentifier;
	NSString* _stickerIdentifier;
	long long _criteria;

}

@property (nonatomic,readonly) long long resultLimit;                          //@synthesize resultLimit=_resultLimit - In the implementation block
@property (nonatomic,copy,readonly) NSString * avatarIdentifier;               //@synthesize avatarIdentifier=_avatarIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * stickerIdentifier;              //@synthesize stickerIdentifier=_stickerIdentifier - In the implementation block
@property (nonatomic,readonly) long long criteria;                             //@synthesize criteria=_criteria - In the implementation block
+(id)requestForAllRecentStickers;
+(id)requestForStickersWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 ;
+(id)requestForMostRecentStickersWithResultLimit:(long long)arg1 ;
-(long long)criteria;
-(long long)resultLimit;
-(NSString *)stickerIdentifier;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCriteria:(long long)arg1 ;
-(id)initWithCriteria:(long long)arg1 resultLimit:(long long)arg2 ;
-(id)initWithCriteria:(long long)arg1 avatarIdentifier:(id)arg2 stickerIdentifier:(id)arg3 ;
-(NSString *)avatarIdentifier;
@end

