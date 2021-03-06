/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NewsCore/NewsCore-Structs.h>
@class FCAssetHandle;

@interface FCIssueThumbnail : NSObject {

	FCAssetHandle* _thumbnailAssetHandle;
	CGSize _thumbnailSize;

}

@property (nonatomic,retain) FCAssetHandle * thumbnailAssetHandle;              //@synthesize thumbnailAssetHandle=_thumbnailAssetHandle - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;                              //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
+(id)issueThumbnailWithAssetHandle:(id)arg1 thumbnailSize:(CGSize)arg2 ;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(CGSize)thumbnailSize;
-(void)setThumbnailAssetHandle:(FCAssetHandle *)arg1 ;
-(FCAssetHandle *)thumbnailAssetHandle;
@end

