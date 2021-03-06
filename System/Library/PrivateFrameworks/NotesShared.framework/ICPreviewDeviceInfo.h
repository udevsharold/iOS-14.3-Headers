/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICAppearanceInfo;

@interface ICPreviewDeviceInfo : NSObject {

	double _imageSize;
	double _scale;
	ICAppearanceInfo* _appearanceInfo;

}

@property (assign,nonatomic) double imageSize;                               //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) double scale;                                   //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) ICAppearanceInfo * appearanceInfo;              //@synthesize appearanceInfo=_appearanceInfo - In the implementation block
+(id)previewDeviceInfoForPreviewImage:(id)arg1 ;
-(double)imageSize;
-(double)scale;
-(id)init;
-(void)setImageSize:(double)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithImageSize:(double)arg1 scale:(double)arg2 ;
-(void)setAppearanceInfo:(ICAppearanceInfo *)arg1 ;
-(id)initWithImageSize:(double)arg1 scale:(double)arg2 appearanceInfo:(id)arg3 ;
-(ICAppearanceInfo *)appearanceInfo;
-(id)deviceInfoFromAddingAppearanceInfo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setScale:(double)arg1 ;
@end

