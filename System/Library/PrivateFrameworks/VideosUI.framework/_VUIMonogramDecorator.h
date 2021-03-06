/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUICore/VUIImageScaleDecorator.h>

@class UIColor;

@interface _VUIMonogramDecorator : VUIImageScaleDecorator {

	UIColor* _borderColor;
	double _borderWidth;

}

@property (nonatomic,retain) UIColor * borderColor;              //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) double borderWidth;                 //@synthesize borderWidth=_borderWidth - In the implementation block
-(double)borderWidth;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIColor *)borderColor;
-(void)setBorderWidth:(double)arg1 ;
-(id)decoratorIdentifier;
-(BOOL)needsAlphaForImage:(id)arg1 ;
-(void)drawInContext:(id)arg1 imageRect:(CGRect)arg2 ;
@end

