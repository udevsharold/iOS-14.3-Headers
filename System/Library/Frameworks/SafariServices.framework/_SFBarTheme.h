/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor, UIBlurEffect, NSArray;

@interface _SFBarTheme : NSObject {

	UIColor* _preferredControlsTintColor;
	BOOL _backdropIsDark;
	BOOL _backdropIsTinted;
	unsigned long long _tintStyle;
	UIColor* _controlsTintColor;
	UIColor* _preferredBarTintColor;
	long long _overrideUserInterfaceStyle;
	UIBlurEffect* _backdropEffect;
	NSArray* _backdropAdjustmentEffects;

}

@property (nonatomic,readonly) BOOL backdropIsDark;                               //@synthesize backdropIsDark=_backdropIsDark - In the implementation block
@property (nonatomic,readonly) BOOL backdropIsTinted;                             //@synthesize backdropIsTinted=_backdropIsTinted - In the implementation block
@property (nonatomic,readonly) unsigned long long tintStyle;                      //@synthesize tintStyle=_tintStyle - In the implementation block
@property (nonatomic,readonly) UIColor * controlsTintColor;                       //@synthesize controlsTintColor=_controlsTintColor - In the implementation block
@property (nonatomic,readonly) UIColor * preferredBarTintColor;                   //@synthesize preferredBarTintColor=_preferredBarTintColor - In the implementation block
@property (nonatomic,readonly) long long overrideUserInterfaceStyle;              //@synthesize overrideUserInterfaceStyle=_overrideUserInterfaceStyle - In the implementation block
@property (nonatomic,readonly) UIBlurEffect * backdropEffect;                     //@synthesize backdropEffect=_backdropEffect - In the implementation block
@property (nonatomic,readonly) NSArray * backdropAdjustmentEffects;               //@synthesize backdropAdjustmentEffects=_backdropAdjustmentEffects - In the implementation block
@property (nonatomic,readonly) _SFBarTheme * fallbackTheme; 
+(id)themeWithBarTintStyle:(unsigned long long)arg1 preferredBarTintColor:(id)arg2 controlsTintColor:(id)arg3 ;
+(id)themeWithBarTintStyle:(unsigned long long)arg1 ;
+(id)themeWithTheme:(id)arg1 ;
-(unsigned long long)tintStyle;
-(BOOL)backdropIsDark;
-(NSArray *)backdropAdjustmentEffects;
-(void)applyBackdropEffectsToView:(id)arg1 ;
-(UIBlurEffect *)backdropEffect;
-(UIColor *)preferredBarTintColor;
-(id)description;
-(id)initWithBarTintStyle:(unsigned long long)arg1 preferredBarTintColor:(id)arg2 controlsTintColor:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)overrideUserInterfaceStyle;
-(UIColor *)controlsTintColor;
-(BOOL)backdropIsTinted;
-(_SFBarTheme *)fallbackTheme;
@end
