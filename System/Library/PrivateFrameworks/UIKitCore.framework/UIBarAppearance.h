/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol _UIBarAppearanceChangeObserver;
@class _UIBarBackgroundAppearanceData, NSArray, UIVibrancyEffect, UIBlurEffect, UIColor, UIImage;

@interface UIBarAppearance : NSObject <NSCopying, NSSecureCoding> {

	long long _idiom;
	id<_UIBarAppearanceChangeObserver> _changeObserver;
	_UIBarBackgroundAppearanceData* _backgroundData;

}

@property (assign,setter=_setChangeObserver:,nonatomic,__weak) id<_UIBarAppearanceChangeObserver> _changeObserver;              //@synthesize changeObserver=_changeObserver - In the implementation block
@property (nonatomic,copy) NSArray * backgroundEffects; 
@property (nonatomic,copy) UIVibrancyEffect * shadowEffect; 
@property (nonatomic,readonly) long long idiom;                                                                                 //@synthesize idiom=_idiom - In the implementation block
@property (nonatomic,copy) UIBlurEffect * backgroundEffect; 
@property (nonatomic,copy) UIColor * backgroundColor; 
@property (nonatomic,retain) UIImage * backgroundImage; 
@property (assign,nonatomic) long long backgroundImageContentMode; 
@property (nonatomic,copy) UIColor * shadowColor; 
@property (nonatomic,retain) UIImage * shadowImage; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)_hashInto:(unsigned long long)arg1 ;
-(UIColor *)shadowColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id<_UIBarAppearanceChangeObserver>)_changeObserver;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(id)_doneButtonAppearanceData;
-(id)initWithBarAppearance:(id)arg1 ;
-(id)_tabLayoutAppearanceData;
-(id)init;
-(void)_completeInit;
-(void)configureWithTransparentBackground;
-(void)setShadowImage:(UIImage *)arg1 ;
-(void)_setupDefaults;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIBlurEffect *)backgroundEffect;
-(long long)idiom;
-(long long)backgroundImageContentMode;
-(id)_backButtonAppearanceData;
-(UIImage *)shadowImage;
-(void)_describeInto:(id)arg1 ;
-(id)_compactInlineTabButtonAppearanceData;
-(id)_backButtonAppearance;
-(void)setShadowEffect:(UIVibrancyEffect *)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(id)_plainButtonAppearanceData;
-(id)_inlineTabButtonAppearanceData;
-(id)initWithIdiom:(long long)arg1 ;
-(void)configureWithDefaultBackground;
-(id)_barTitleData;
-(void)configureWithDefaultShadow;
-(UIVibrancyEffect *)shadowEffect;
-(NSArray *)backgroundEffects;
-(BOOL)_checkEqualTo:(id)arg1 ;
-(id)copy;
-(UIImage *)backgroundImage;
-(void)_decodeFromCoder:(id)arg1 ;
-(void)configureWithOpaqueBackground;
-(void)_copyFromAppearance:(id)arg1 ;
-(void)setBackgroundEffects:(NSArray *)arg1 ;
-(unsigned long long)hash;
-(void)_setChangeObserver:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_backgroundData;
-(void)configureWithoutShadow;
-(id)_stackedTabButtonAppearanceData;
-(id)_doneButtonAppearance;
-(id)_plainButtonAppearance;
-(void)setBackgroundEffect:(UIBlurEffect *)arg1 ;
-(void)setBackgroundImageContentMode:(long long)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
@end
