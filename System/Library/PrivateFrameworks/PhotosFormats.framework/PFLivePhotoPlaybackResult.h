/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosFormats/PhotosFormats-Structs.h>
@class AVAsset;

@interface PFLivePhotoPlaybackResult : NSObject {

	int _photoExifOrientation;
	CGImageRef _photo;
	AVAsset* _videoAsset;
	SCD_Struct_PF3 _photoTime;

}

@property (assign,nonatomic) CGImageRef photo;                      //@synthesize photo=_photo - In the implementation block
@property (assign,nonatomic) int photoExifOrientation;              //@synthesize photoExifOrientation=_photoExifOrientation - In the implementation block
@property (assign,nonatomic) SCD_Struct_PF3 photoTime;              //@synthesize photoTime=_photoTime - In the implementation block
@property (nonatomic,retain) AVAsset * videoAsset;                  //@synthesize videoAsset=_videoAsset - In the implementation block
-(void)setPhoto:(CGImageRef)arg1 ;
-(CGImageRef)photo;
-(void)dealloc;
-(int)photoExifOrientation;
-(SCD_Struct_PF3)photoTime;
-(void)setVideoAsset:(AVAsset *)arg1 ;
-(void)setPhotoTime:(SCD_Struct_PF3)arg1 ;
-(AVAsset *)videoAsset;
-(void)setPhotoExifOrientation:(int)arg1 ;
@end
