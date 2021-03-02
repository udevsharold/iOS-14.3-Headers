/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIImage;


@protocol TSAssetHandleType
@property (readonly,nonatomic) NSString * filePath; 
@property (readonly,nonatomic) id<TSAssetDataProviderType> assetDataProvider; 
@property (readonly,nonatomic) UIImage * fallbackImage; 
@property (readonly,nonatomic) NSString * uniqueKey; 
@optional
-(id<TSAssetDataProviderType>)assetDataProvider;

@required
-(NSString *)filePath;
-(NSString *)uniqueKey;
-(UIImage *)fallbackImage;
-(void)downloadWithGroup:(id)arg1;

@end
