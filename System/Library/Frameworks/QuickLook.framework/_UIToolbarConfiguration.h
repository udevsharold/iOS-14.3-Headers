/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, UIColor;

@interface _UIToolbarConfiguration : NSObject <NSCopying> {

	BOOL _translucent;
	long long _barStyle;
	UIImage* _shadowImage;
	UIImage* _backgroundImage;
	UIColor* _backgroundColor;
	UIColor* _barTintColor;

}

@property (assign,nonatomic) long long barStyle;                                 //@synthesize barStyle=_barStyle - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent;              //@synthesize translucent=_translucent - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                              //@synthesize shadowImage=_shadowImage - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;                          //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                          //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * barTintColor;                             //@synthesize barTintColor=_barTintColor - In the implementation block
-(BOOL)isTranslucent;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(long long)barStyle;
-(void)setShadowImage:(UIImage *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)shadowImage;
-(UIImage *)backgroundImage;
-(UIColor *)barTintColor;
-(UIColor *)backgroundColor;
-(void)setBarTintColor:(UIColor *)arg1 ;
@end
