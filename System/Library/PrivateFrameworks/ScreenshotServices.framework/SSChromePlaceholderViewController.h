/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenshotServices/ScreenshotServices-Structs.h>
#import <UIKitCore/UIViewController.h>

@class SSChromePlaceholderView, UIColor;

@interface SSChromePlaceholderViewController : UIViewController {

	SSChromePlaceholderView* _placeholderView;

}

@property (assign,nonatomic) double contentAlpha; 
@property (nonatomic,readonly) CGRect screenshotContentFrame; 
@property (nonatomic,readonly) long long backgroundBlurEffectStyle; 
@property (nonatomic,readonly) double cropsCornerContentPadding; 
@property (nonatomic,readonly) double cropsCornerEdgeLength; 
@property (nonatomic,readonly) double cropsCornerLineWidth; 
@property (nonatomic,readonly) UIColor * cropsCornerColor; 
-(long long)preferredStatusBarStyle;
-(double)contentAlpha;
-(void)setContentAlpha:(double)arg1 ;
-(int)_preferredStatusBarVisibility;
-(void)viewDidLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(UIColor *)cropsCornerColor;
-(double)cropsCornerLineWidth;
-(double)cropsCornerEdgeLength;
-(CGRect)screenshotContentFrame;
-(double)cropsCornerContentPadding;
-(long long)backgroundBlurEffectStyle;
@end

