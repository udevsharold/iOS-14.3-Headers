/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIImageDataConsumer.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, SKUIColorScheme;

@interface SKUIProductImageDataConsumer : SKUIImageDataConsumer <NSCopying> {

	UIColor* _backgroundColor;
	CGSize _iconSize;
	SKUIColorScheme* _colorScheme;

}

@property (nonatomic,readonly) CGSize iconSize;                          //@synthesize iconSize=_iconSize - In the implementation block
@property (nonatomic,readonly) CGSize imageSize; 
@property (nonatomic,retain) UIColor * backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
+(id)smartBannerConsumer;
+(id)giftComposePosterConsumer;
+(id)giftComposeLetterboxConsumer;
+(id)giftComposeConsumer;
+(id)giftResultConsumer;
+(id)giftThemePosterConsumer;
+(id)giftThemeLetterboxConsumer;
+(id)giftThemeConsumer;
+(id)lockupConsumerWithSize:(long long)arg1 itemKind:(long long)arg2 ;
+(id)consumerWithSize:(CGSize)arg1 ;
+(id)gridConsumer;
+(id)wishlistConsumer;
+(id)cardConsumer;
+(id)chartsConsumer;
+(id)updatesConsumer;
+(id)purchasedConsumer;
+(id)productPageConsumer;
+(id)swooshConsumer;
-(CGSize)iconSize;
-(CGSize)imageSize;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)backgroundColor;
-(SKUIColorScheme *)colorScheme;
-(id)imageForImage:(id)arg1 ;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(id)imageForColor:(id)arg1 ;
-(id)imageForColor:(id)arg1 size:(CGSize)arg2 ;
@end
