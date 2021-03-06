/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UILegibilitySettings, UIImage;

@interface _UILegibilityCachedShadow : NSObject {

	_UILegibilitySettings* _settings;
	double _strength;
	UIImage* _shadow;

}

@property (nonatomic,retain) _UILegibilitySettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) double strength;                               //@synthesize strength=_strength - In the implementation block
@property (nonatomic,retain) UIImage * shadow;                              //@synthesize shadow=_shadow - In the implementation block
-(double)strength;
-(void)setStrength:(double)arg1 ;
-(void)setShadow:(UIImage *)arg1 ;
-(BOOL)matchesSettings:(id)arg1 strength:(double)arg2 ;
-(void)dealloc;
-(void)setSettings:(_UILegibilitySettings *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(UIImage *)shadow;
-(_UILegibilitySettings *)settings;
@end

