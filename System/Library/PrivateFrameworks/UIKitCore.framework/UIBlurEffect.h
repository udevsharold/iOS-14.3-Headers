/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIVisualEffect.h>

@class _UIBlurEffectImpl, UIColor;

@interface UIBlurEffect : UIVisualEffect {

	_UIBlurEffectImpl* _impl;

}

@property (nonatomic,readonly) BOOL _canProvideVibrancyEffect; 
@property (nonatomic,readonly) BOOL _canProvideCoreMaterialVibrancyEffect; 
@property (nonatomic,readonly) long long _style; 
@property (nonatomic,readonly) UIColor * _tintColor; 
@property (nonatomic,readonly) BOOL _invertAutomaticStyle; 
+(BOOL)supportsSecureCoding;
+(id)_effectWithStyle:(long long)arg1 tintColor:(id)arg2 invertAutomaticStyle:(BOOL)arg3 ;
+(id)_effectForLightMaterial:(id)arg1 darkMaterial:(id)arg2 bundle:(id)arg3 ;
+(id)_effectWithStyle:(long long)arg1 invertAutomaticStyle:(BOOL)arg2 ;
+(id)effectWithStyle:(long long)arg1 ;
+(id)_effectWithInfiniteRadiusScale:(double)arg1 ;
+(id)effectWithBlurRadius:(double)arg1 ;
+(id)_effectWithBlurRadius:(double)arg1 scale:(double)arg2 ;
+(id)_effectWithInfiniteRadius;
+(id)_effectWithTintColor:(id)arg1 ;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(long long)_style;
-(BOOL)_isATVStyle;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)_expectedUsage;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(id)description;
-(BOOL)_canProvideCoreMaterialVibrancyEffect;
-(BOOL)isEqual:(id)arg1 ;
-(id)effectForUserInterfaceStyle:(long long)arg1 ;
-(UIColor *)_tintColor;
-(id)effectSettings;
-(BOOL)_isAutomaticStyle;
-(BOOL)_canProvideVibrancyEffect;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithImplementation:(id)arg1 ;
-(BOOL)_invertAutomaticStyle;
@end

