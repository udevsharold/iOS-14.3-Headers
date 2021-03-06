/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIBarAppearanceStorage.h>

@class UIImage;

@interface _UIToolbarAppearanceStorage : _UIBarAppearanceStorage {

	BOOL _hidesShadow;
	UIImage* _backgroundImage;
	UIImage* _miniBackgroundImage;
	UIImage* _topBackgroundImage;
	UIImage* _miniTopBackgroundImage;
	UIImage* _shadowImage;
	UIImage* _topShadowImage;

}

@property (nonatomic,retain) UIImage * backgroundImage;                     //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * miniBackgroundImage;                 //@synthesize miniBackgroundImage=_miniBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * topBackgroundImage;                  //@synthesize topBackgroundImage=_topBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * miniTopBackgroundImage;              //@synthesize miniTopBackgroundImage=_miniTopBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                         //@synthesize shadowImage=_shadowImage - In the implementation block
@property (nonatomic,retain) UIImage * topShadowImage;                      //@synthesize topShadowImage=_topShadowImage - In the implementation block
@property (assign,nonatomic) BOOL hidesShadow;                              //@synthesize hidesShadow=_hidesShadow - In the implementation block
+(long long)typicalBarPosition;
-(void)setTopBackgroundImage:(UIImage *)arg1 ;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)setShadowImage:(UIImage *)arg1 ;
-(UIImage *)shadowImage;
-(UIImage *)miniBackgroundImage;
-(void)setHidesShadow:(BOOL)arg1 ;
-(UIImage *)backgroundImage;
-(UIImage *)miniTopBackgroundImage;
-(void)setMiniBackgroundImage:(UIImage *)arg1 ;
-(void)setTopShadowImage:(UIImage *)arg1 ;
-(UIImage *)topBackgroundImage;
-(void)setMiniTopBackgroundImage:(UIImage *)arg1 ;
-(UIImage *)topShadowImage;
-(BOOL)hidesShadow;
@end

