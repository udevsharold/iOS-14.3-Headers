/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _UIBackdropViewSettings, _UIVisualEffectConfig;

@interface UIVisualEffect : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic,readonly) _UIBackdropViewSettings * effectSettings; 
@property (nonatomic,readonly) BOOL _isATVStyle; 
@property (nonatomic,readonly) BOOL _isAutomaticStyle; 
@property (nonatomic,readonly) _UIVisualEffectConfig * effectConfig; 
+(BOOL)supportsSecureCoding;
+(id)emptyEffect;
+(id)effectCompositingImage:(id)arg1 withMode:(long long)arg2 alpha:(double)arg3 ;
+(id)effectCompositingColor:(id)arg1 withMode:(long long)arg2 alpha:(double)arg3 ;
+(id)_effectCopyingFromCaptureGroup:(id)arg1 ;
+(id)effectCompositingImage:(id)arg1 ;
+(id)effectCompositingColor:(id)arg1 ;
+(id)effectCombiningEffects:(id)arg1 ;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)_isATVStyle;
-(id)effectConfigForQuality:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)_expectedUsage;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(id)_allEffects;
-(void)_enumerateEffects:(/*^block*/id)arg1 ;
-(id)effectForUserInterfaceStyle:(long long)arg1 ;
-(_UIBackdropViewSettings *)effectSettings;
-(BOOL)_isAutomaticStyle;
-(_UIVisualEffectConfig *)effectConfig;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_selectorOverridden:(SEL)arg1 ;
@end
