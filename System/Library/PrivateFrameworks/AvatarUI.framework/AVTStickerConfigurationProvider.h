/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTStickerPack;
@class NSCache, AVTUIEnvironment, NSArray;

@interface AVTStickerConfigurationProvider : NSObject {

	NSCache* _stickerConfigurationCache;
	AVTUIEnvironment* _environment;
	NSArray*<AVTStickerPack> _stickerPacks;

}

@property (nonatomic,retain) NSCache * stickerConfigurationCache;                //@synthesize stickerConfigurationCache=_stickerConfigurationCache - In the implementation block
@property (nonatomic,retain) AVTUIEnvironment * environment;                     //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) NSArray*<AVTStickerPack> stickerPacks;              //@synthesize stickerPacks=_stickerPacks - In the implementation block
-(id)availableStickerNamesForAvatarRecord:(id)arg1 ;
-(AVTUIEnvironment *)environment;
-(void)setEnvironment:(AVTUIEnvironment *)arg1 ;
-(id)initWithEnvironment:(id)arg1 forStickerPacks:(id)arg2 ;
-(id)stickerConfigurationForAvatarRecord:(id)arg1 stickerName:(id)arg2 ;
-(NSArray*<AVTStickerPack>)stickerPacks;
-(NSCache *)stickerConfigurationCache;
-(void)setStickerConfigurationCache:(NSCache *)arg1 ;
-(void)setStickerPacks:(NSArray*<AVTStickerPack>)arg1 ;
-(id)stickerConfigurationsForAvatarRecord:(id)arg1 ;
@end
