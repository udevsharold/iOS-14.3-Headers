/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BSUIMappedImageCache;

@interface HFCameraImageCache : NSObject {

	BSUIMappedImageCache* _imageCache;

}

@property (nonatomic,retain) BSUIMappedImageCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
+(id)personNameForFaceCropKey:(id)arg1 ;
+(id)keyForCameraClipIdentifierString:(id)arg1 withOffset:(float)arg2 ;
+(id)heroFrameKeyForCameraClipIdentifierString:(id)arg1 ;
+(id)faceCropKeyForPersonName:(id)arg1 ;
+(id)posterFrameKeyForCameraClipIdentifierString:(id)arg1 withOffset:(float)arg2 ;
-(BSUIMappedImageCache *)imageCache;
-(id)init;
-(void)setImageCache:(BSUIMappedImageCache *)arg1 ;
-(void)purgeAllImages;
-(id)imageForCameraClipIdentifierString:(id)arg1 withOffset:(float)arg2 ;
-(void)addImage:(id)arg1 forKey:(id)arg2 ;
-(id)imageForKey:(id)arg1 ;
@end

