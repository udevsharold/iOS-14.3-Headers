/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class CAGradientLayer;

@interface UIKBASPCoverView : UIView {

	CAGradientLayer* _gradientLayer;

}

@property (nonatomic,retain) CAGradientLayer * gradientLayer;              //@synthesize gradientLayer=_gradientLayer - In the implementation block
+(id)ASPCoverViewColor;
+(id)ASPCoverView:(BOOL)arg1 withFrame:(CGRect)arg2 isRightToLeft:(BOOL)arg3 withTextWidth:(double)arg4 ;
-(CAGradientLayer *)gradientLayer;
-(void)setGradientLayer:(CAGradientLayer *)arg1 ;
-(void)layoutSubviews;
-(id)initCoverViewWithFrame:(CGRect)arg1 isRightToLeft:(BOOL)arg2 withTextWidth:(double)arg3 ;
-(id)initCoverBackgroundViewWithFrame:(CGRect)arg1 isRightToLeft:(BOOL)arg2 ;
@end

