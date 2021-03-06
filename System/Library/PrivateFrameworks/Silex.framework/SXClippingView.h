/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, SXClippingLayer;

@interface SXClippingView : UIView {

	UIView* _contentView;
	unsigned long long _clippingMode;
	CGSize _contentSize;
	CGRect _contentFrame;

}

@property (nonatomic,readonly) SXClippingLayer * layer; 
@property (nonatomic,readonly) UIView * contentView;                       //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                         //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) CGRect contentFrame;                          //@synthesize contentFrame=_contentFrame - In the implementation block
@property (assign,nonatomic) unsigned long long clippingMode;              //@synthesize clippingMode=_clippingMode - In the implementation block
+(Class)layerClass;
-(CGRect)contentFrame;
-(void)setContentFrame:(CGRect)arg1 ;
-(id)initWithContentView:(id)arg1 ;
-(CGSize)contentSize;
-(UIView *)contentView;
-(unsigned long long)clippingMode;
-(void)setClippingMode:(unsigned long long)arg1 ;
@end

