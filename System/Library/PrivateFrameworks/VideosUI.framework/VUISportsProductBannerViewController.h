/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/VUIProductUberBackgroundInterface.h>

@class VUIProductUberBackgroundView, IKViewElement, VUISportsProductBannerView, UIView, NSString;

@interface VUISportsProductBannerViewController : UIViewController <VUIProductUberBackgroundInterface> {

	VUIProductUberBackgroundView* _uberBackgroundView;
	IKViewElement* _viewElement;
	VUISportsProductBannerView* _bannerView;
	UIView* _whiteBackgroundView;

}

@property (nonatomic,retain) VUIProductUberBackgroundView * uberBackgroundView;              //@synthesize uberBackgroundView=_uberBackgroundView - In the implementation block
@property (nonatomic,retain) UIView * whiteBackgroundView;                                   //@synthesize whiteBackgroundView=_whiteBackgroundView - In the implementation block
@property (nonatomic,retain) VUISportsProductBannerView * bannerView;                        //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                                    //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,readonly) BOOL isUberLayoutActive; 
@property (nonatomic,readonly) BOOL disableGradientBelowNavBar; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double topThreshold; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)preferredFocusEnvironments;
-(void)setBannerView:(VUISportsProductBannerView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(CGSize)size;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(VUISportsProductBannerView *)bannerView;
-(void)viewDidLoad;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(BOOL)isUberLayoutActive;
-(void)setUberImageOffset:(double)arg1 ;
-(void)setBannerOpacity:(double)arg1 ;
-(BOOL)disableGradientBelowNavBar;
-(double)topThreshold;
-(void)_configureViewSubviews;
-(VUIProductUberBackgroundView *)uberBackgroundView;
-(void)setUberBackgroundView:(VUIProductUberBackgroundView *)arg1 ;
-(void)setWhiteBannerOpacity:(double)arg1 ;
-(UIView *)whiteBackgroundView;
-(void)setWhiteBackgroundView:(UIView *)arg1 ;
@end
