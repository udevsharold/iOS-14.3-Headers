/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, UIColor, _UITabBarItemAppearanceStorage;

@interface _UITabBarAppearanceStorage : NSObject {

	UIImage* backgroundImage;
	UIImage* shadowImage;
	UIImage* selectionIndicatorImage;
	UIColor* barTintColor;
	UIColor* selectedImageTintColor;
	_UITabBarItemAppearanceStorage* tabItemAppearanceStorage;
	UIColor* _unselectedImageTintColor;

}

@property (nonatomic,retain) UIImage * backgroundImage; 
@property (nonatomic,retain) UIImage * shadowImage; 
@property (nonatomic,retain) UIImage * selectionIndicatorImage; 
@property (nonatomic,retain) UIColor * barTintColor; 
@property (nonatomic,retain) UIColor * selectedImageTintColor; 
@property (nonatomic,retain) UIColor * unselectedImageTintColor;                                     //@synthesize unselectedImageTintColor=_unselectedImageTintColor - In the implementation block
@property (nonatomic,retain) _UITabBarItemAppearanceStorage * tabItemAppearanceStorage; 
-(UIImage *)selectionIndicatorImage;
-(void)setSelectionIndicatorImage:(UIImage *)arg1 ;
-(void)setUnselectedImageTintColor:(UIColor *)arg1 ;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(UIColor *)selectedImageTintColor;
-(void)setShadowImage:(UIImage *)arg1 ;
-(UIImage *)shadowImage;
-(id)_tabItemAppearanceStorage;
-(void)setTabItemAppearanceStorage:(_UITabBarItemAppearanceStorage *)arg1 ;
-(UIImage *)backgroundImage;
-(UIColor *)unselectedImageTintColor;
-(UIColor *)barTintColor;
-(void)setSelectedImageTintColor:(UIColor *)arg1 ;
-(_UITabBarItemAppearanceStorage *)tabItemAppearanceStorage;
-(void)setBarTintColor:(UIColor *)arg1 ;
@end
