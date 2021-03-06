/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUImageModifier.h>

@interface SUClipCornersImageModifier : SUImageModifier {

	double _cornerRadius;
	int _corners;

}

@property (assign,nonatomic) double cornerRadius;              //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) int corners;                      //@synthesize corners=_corners - In the implementation block
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(BOOL)isEqual:(id)arg1 ;
-(int)corners;
-(void)setCorners:(int)arg1 ;
-(void)drawBeforeImageForContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(void)drawAfterImageForContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(CGPathRef)_copyClippingPathForRect:(CGRect)arg1 ;
@end

