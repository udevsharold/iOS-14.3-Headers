/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface TUSegmentedColorView : UIView {

	 startColor;
	 endColor;
	 numberOfSegments;
	 direction;

}

@property (retain,nonatomic) UIColor * startColor; 
@property (retain,nonatomic) UIColor * endColor; 
@property (assign,nonatomic) long long numberOfSegments; 
@property (assign,nonatomic) long long direction; 
-(void)setDirection:(long long)arg1 ;
-(UIColor *)endColor;
-(long long)direction;
-(long long)numberOfSegments;
-(void)setNumberOfSegments:(long long)arg1 ;
-(void)setEndColor:(UIColor *)arg1 ;
-(void)setStartColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)startColor;
@end

