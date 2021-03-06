/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class TLKRichText, TLKLabel, UIView, TLKProminenceView, UIFont, NSString;

@interface TLKStoreButton : UIButton {

	BOOL _useCompactMode;
	BOOL _isEmphasized;
	TLKRichText* _richTitle;
	TLKLabel* _label;
	UIView* _backgroundView;
	TLKProminenceView* _highlightView;

}

@property (retain) TLKLabel * label;                               //@synthesize label=_label - In the implementation block
@property (retain) UIView * backgroundView;                        //@synthesize backgroundView=_backgroundView - In the implementation block
@property (retain) TLKProminenceView * highlightView;              //@synthesize highlightView=_highlightView - In the implementation block
@property (assign) BOOL isEmphasized;                              //@synthesize isEmphasized=_isEmphasized - In the implementation block
@property (assign,nonatomic) BOOL useCompactMode;                  //@synthesize useCompactMode=_useCompactMode - In the implementation block
@property (nonatomic,copy) TLKRichText * richTitle;                //@synthesize richTitle=_richTitle - In the implementation block
@property (assign,nonatomic) double cornerRadius; 
@property (nonatomic,copy) UIFont * font; 
@property (nonatomic,copy) NSString * title; 
-(void)setHighlightView:(TLKProminenceView *)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(TLKProminenceView *)highlightView;
-(CGSize)intrinsicContentSize;
-(id)init;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(TLKRichText *)richTitle;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(UIView *)backgroundView;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(BOOL)useCompactMode;
-(void)setUseCompactMode:(BOOL)arg1 ;
-(void)setIsEmphasized:(BOOL)arg1 ;
-(BOOL)isEmphasized;
-(void)setRichTitle:(TLKRichText *)arg1 ;
-(void)layoutSubviews;
-(void)setLabel:(TLKLabel *)arg1 ;
-(void)didMoveToWindow;
-(void)setTitle:(NSString *)arg1 ;
-(TLKLabel *)label;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
@end

