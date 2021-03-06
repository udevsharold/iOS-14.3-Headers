/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/_MKPlaceActionControlledButton.h>

@class _MKPlaceActionButtonController, CALayer, CAGradientLayer, NSAttributedString, NSString;

@interface MKCatalystButton : UIButton <_MKPlaceActionControlledButton> {

	BOOL _isPrimaryButton;
	_MKPlaceActionButtonController* _buttonController;
	CALayer* _extraShadowLayer;
	CAGradientLayer* _gradientLayer;
	NSAttributedString* _title;
	NSAttributedString* _subTitle;

}

@property (nonatomic,retain) CALayer * extraShadowLayer;                                            //@synthesize extraShadowLayer=_extraShadowLayer - In the implementation block
@property (nonatomic,retain) CAGradientLayer * gradientLayer;                                       //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (nonatomic,retain) NSAttributedString * title;                                            //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSAttributedString * subTitle;                                         //@synthesize subTitle=_subTitle - In the implementation block
@property (assign,nonatomic) BOOL isPrimaryButton;                                                  //@synthesize isPrimaryButton=_isPrimaryButton - In the implementation block
@property (assign,nonatomic,__weak) _MKPlaceActionButtonController * buttonController;              //@synthesize buttonController=_buttonController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)titleFont;
+(CGColorRef)extraShadowLayerBackgroundColorWithDarkMode:(BOOL)arg1 isbuttonEnabled:(BOOL)arg2 ;
+(id)catalystButton;
-(CAGradientLayer *)gradientLayer;
-(void)setGradientLayer:(CAGradientLayer *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)placeActionButtonControllerTextDidChange:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSAttributedString *)subTitle;
-(void)setSubTitle:(NSAttributedString *)arg1 ;
-(void)layoutSubviews;
-(void)_updateColors;
-(void)setTitle:(NSAttributedString *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(CALayer *)extraShadowLayer;
-(_MKPlaceActionButtonController *)buttonController;
-(void)setPrimaryTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)buttonSelected:(id)arg1 ;
-(id)_attributedStringForTitle:(id)arg1 controlState:(unsigned long long)arg2 ;
-(id)_attributedStringForSubTitle:(id)arg1 controlState:(unsigned long long)arg2 ;
-(NSAttributedString *)title;
-(void)didMoveToSuperview;
-(BOOL)isPrimaryButton;
-(id)_attributedStringWithTitle:(id)arg1 subtitle:(id)arg2 controlState:(unsigned long long)arg3 ;
-(void)setPrimaryTitle:(id)arg1 ;
-(void)applyBorder:(BOOL)arg1 ;
-(void)setButtonController:(_MKPlaceActionButtonController *)arg1 ;
-(void)setIsPrimaryButton:(BOOL)arg1 ;
-(void)setExtraShadowLayer:(CALayer *)arg1 ;
@end

