/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Settings/WallpaperSettings.framework/WallpaperSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WallpaperSettings/WallpaperSettings-Structs.h>
#import <UIKitCore/UIView.h>

@protocol WSBundleCollectionOptionViewDelegate;
@class WKWallpaperBundleCollection, UIStackView, UIButton, UILabel, NSLayoutConstraint;

@interface WSBundleCollectionOptionView : UIView {

	WKWallpaperBundleCollection* _bundleCollection;
	id<WSBundleCollectionOptionViewDelegate> _delegate;
	UIStackView* __stackView;
	UIButton* __button;
	UILabel* __label;
	NSLayoutConstraint* __buttonHeightConstraint;
	NSLayoutConstraint* __buttonWidthConstraint;
	CGSize _canonicalButtonSize;

}

@property (nonatomic,retain) UIStackView * _stackView;                                              //@synthesize _stackView=__stackView - In the implementation block
@property (nonatomic,retain) UIButton * _button;                                                    //@synthesize _button=__button - In the implementation block
@property (nonatomic,retain) UILabel * _label;                                                      //@synthesize _label=__label - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * _buttonHeightConstraint;                          //@synthesize _buttonHeightConstraint=__buttonHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * _buttonWidthConstraint;                           //@synthesize _buttonWidthConstraint=__buttonWidthConstraint - In the implementation block
@property (nonatomic,readonly) WKWallpaperBundleCollection * bundleCollection;                      //@synthesize bundleCollection=_bundleCollection - In the implementation block
@property (assign,nonatomic,__weak) id<WSBundleCollectionOptionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize canonicalButtonSize;                                            //@synthesize canonicalButtonSize=_canonicalButtonSize - In the implementation block
-(UILabel *)_label;
-(UIButton *)_button;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIStackView *)_stackView;
-(void)setDelegate:(id<WSBundleCollectionOptionViewDelegate>)arg1 ;
-(id<WSBundleCollectionOptionViewDelegate>)delegate;
-(NSLayoutConstraint *)_buttonHeightConstraint;
-(void)_configureView;
-(void)set_label:(UILabel *)arg1 ;
-(void)set_stackView:(UIStackView *)arg1 ;
-(void)setCanonicalButtonSize:(CGSize)arg1 ;
-(CGSize)canonicalButtonSize;
-(id)initWithFrame:(CGRect)arg1 bundleCollection:(id)arg2 canonicalButtonSize:(CGSize)arg3 ;
-(WKWallpaperBundleCollection *)bundleCollection;
-(void)set_button:(UIButton *)arg1 ;
-(id)_imageForButtonForCurrentInterfaceStyle;
-(void)_userDidTapButton:(id)arg1 ;
-(void)set_buttonHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)set_buttonWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)_buttonWidthConstraint;
@end
