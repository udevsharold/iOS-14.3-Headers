/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXResourceResponse.h>

@class UIImage;

@interface SXImageResourceResponse : SXResourceResponse {

	unsigned long long _imageQuality;
	UIImage* _image;

}

@property (assign,nonatomic) unsigned long long imageQuality;              //@synthesize imageQuality=_imageQuality - In the implementation block
@property (nonatomic,retain) UIImage * image;                              //@synthesize image=_image - In the implementation block
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(unsigned long long)imageQuality;
-(void)setImageQuality:(unsigned long long)arg1 ;
@end
