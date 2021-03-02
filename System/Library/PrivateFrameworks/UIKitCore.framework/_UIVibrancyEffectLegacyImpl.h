/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIVibrancyEffectImpl.h>

@class UIVibrancyEffect;

@interface _UIVibrancyEffectLegacyImpl : _UIVibrancyEffectImpl {

	long long _style;
	BOOL _invertAutomaticStyle;
	BOOL _ignoreSimpleVibrancy;
	UIVibrancyEffect* _effect;

}

@property (assign,nonatomic) UIVibrancyEffect * effect;              //@synthesize effect=_effect - In the implementation block
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(UIVibrancyEffect *)effect;
-(long long)style;
-(id)implementationForUserInterfaceStyle:(long long)arg1 ;
-(BOOL)invertAutomaticStyle;
-(void)setEffect:(UIVibrancyEffect *)arg1 ;
-(void)appendDescriptionTo:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(id)initWithStyle:(long long)arg1 invertAutomaticStyle:(BOOL)arg2 ignoreSimpleVibrancy:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 invertAutomaticStyle:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
