/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIVisualEffect.h>

@class NSString, UIImage, UIColor;

@interface _UIOverlayEffect : UIVisualEffect {

	NSString* _filterType;
	UIImage* _image;
	UIColor* _color;
	double _alpha;

}

@property (nonatomic,copy) NSString * filterType;              //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,retain) UIImage * image;                  //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) UIColor * color;                    //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double alpha;                     //@synthesize alpha=_alpha - In the implementation block
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(void)setColor:(UIColor *)arg1 ;
-(id)init;
-(double)alpha;
-(UIColor *)color;
-(UIImage *)image;
-(NSString *)filterType;
-(void)setFilterType:(NSString *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

