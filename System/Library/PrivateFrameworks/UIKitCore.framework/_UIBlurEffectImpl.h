/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UIBlurEffectImpl : NSObject
+(id)implementationFromCoder:(id)arg1 ;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)canProvideCoreMaterialVibrancyEffect;
-(BOOL)canProvideVibrancyEffect;
-(BOOL)requiresCopying;
-(long long)style;
-(id)implementationForUserInterfaceStyle:(long long)arg1 ;
-(BOOL)invertAutomaticStyle;
-(void)setEffect:(id)arg1 ;
-(void)appendDescriptionTo:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(id)tintColor;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
