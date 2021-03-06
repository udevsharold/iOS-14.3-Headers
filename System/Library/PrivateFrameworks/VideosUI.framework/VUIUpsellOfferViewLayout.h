/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, TVImageLayout;

@interface VUIUpsellOfferViewLayout : TVViewLayout {

	VUITextLayout* _titleTextLayout;
	VUITextLayout* _descriptionTextLayout;
	TVImageLayout* _imageLayout;

}

@property (nonatomic,readonly) VUITextLayout * titleTextLayout;                    //@synthesize titleTextLayout=_titleTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * descriptionTextLayout;              //@synthesize descriptionTextLayout=_descriptionTextLayout - In the implementation block
@property (nonatomic,readonly) TVImageLayout * imageLayout;                        //@synthesize imageLayout=_imageLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(UIEdgeInsets)safeAreaInsets;
-(void)_configureLayout;
-(VUITextLayout *)titleTextLayout;
-(VUITextLayout *)descriptionTextLayout;
-(TVImageLayout *)imageLayout;
-(double)titleTopMarginPhone;
-(double)titleTopMarginPad;
-(double)descriptionTopMargin;
@end

