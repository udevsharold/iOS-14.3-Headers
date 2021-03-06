/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <libobjc.A.dylib/AVTCachedResource.h>

@class UIImage, AVTUINSURL, NSURL;

@interface AVTStickerResource : NSObject <AVTCachedResource> {

	BOOL _prereleaseSticker;
	UIImage* _image;
	AVTUINSURL* _internalURL;
	CGRect _clippingRect;

}

@property (nonatomic,retain) AVTUINSURL * internalURL;                                       //@synthesize internalURL=_internalURL - In the implementation block
@property (assign,getter=isPrereleaseSticker,nonatomic) BOOL prereleaseSticker;              //@synthesize prereleaseSticker=_prereleaseSticker - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSURL * URL; 
@property (nonatomic,readonly) CGRect clippingRect;                                          //@synthesize clippingRect=_clippingRect - In the implementation block
-(UIImage *)image;
-(void)setURL:(NSURL *)arg1 ;
-(CGRect)clippingRect;
-(id)initWithImage:(id)arg1 URL:(id)arg2 clippingRect:(CGRect)arg3 ;
-(NSURL *)URL;
-(BOOL)isPrereleaseSticker;
-(void)setPrereleaseSticker:(BOOL)arg1 ;
-(AVTUINSURL *)internalURL;
-(void)setInternalURL:(AVTUINSURL *)arg1 ;
@end

