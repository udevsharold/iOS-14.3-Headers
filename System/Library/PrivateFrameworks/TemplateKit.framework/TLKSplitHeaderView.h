/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class TLKMultilineText, TLKImage, TLKImageView, TLKLabel, NUIContainerStackView, TLKEmbossedLabel, NUIContainerGridView, NSString;

@interface TLKSplitHeaderView : TLKView <NUIContainerViewDelegate> {

	BOOL _useLargeTitle;
	BOOL _shouldBadgeSubtitle;
	BOOL _useCompactWidth;
	TLKMultilineText* _title;
	TLKMultilineText* _subtitle1;
	TLKMultilineText* _subtitle2;
	TLKImage* _leadingImage;
	TLKMultilineText* _leadingTitle;
	TLKMultilineText* _leadingSubtitle;
	TLKImage* _trailingImage;
	TLKMultilineText* _trailingTitle;
	TLKMultilineText* _trailingSubtitle;
	TLKImageView* _leadingImageView;
	TLKLabel* _leadingTitleLabel;
	TLKLabel* _leadingSubtitleLabel;
	TLKImageView* _trailingImageView;
	TLKLabel* _trailingTitleLabel;
	TLKLabel* _trailingSubtitleLabel;
	TLKLabel* _titleLabel;
	NUIContainerStackView* _subtitleStackView;
	TLKLabel* _subtitle1Label;
	TLKEmbossedLabel* _subtitle2Label;

}

@property (nonatomic,retain) NUIContainerGridView * contentView; 
@property (nonatomic,retain) TLKImageView * leadingImageView;                        //@synthesize leadingImageView=_leadingImageView - In the implementation block
@property (nonatomic,retain) TLKLabel * leadingTitleLabel;                           //@synthesize leadingTitleLabel=_leadingTitleLabel - In the implementation block
@property (nonatomic,retain) TLKLabel * leadingSubtitleLabel;                        //@synthesize leadingSubtitleLabel=_leadingSubtitleLabel - In the implementation block
@property (nonatomic,retain) TLKImageView * trailingImageView;                       //@synthesize trailingImageView=_trailingImageView - In the implementation block
@property (nonatomic,retain) TLKLabel * trailingTitleLabel;                          //@synthesize trailingTitleLabel=_trailingTitleLabel - In the implementation block
@property (nonatomic,retain) TLKLabel * trailingSubtitleLabel;                       //@synthesize trailingSubtitleLabel=_trailingSubtitleLabel - In the implementation block
@property (nonatomic,retain) TLKLabel * titleLabel;                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NUIContainerStackView * subtitleStackView;              //@synthesize subtitleStackView=_subtitleStackView - In the implementation block
@property (nonatomic,retain) TLKLabel * subtitle1Label;                              //@synthesize subtitle1Label=_subtitle1Label - In the implementation block
@property (nonatomic,retain) TLKEmbossedLabel * subtitle2Label;                      //@synthesize subtitle2Label=_subtitle2Label - In the implementation block
@property (nonatomic,retain) TLKMultilineText * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) TLKMultilineText * subtitle1;                           //@synthesize subtitle1=_subtitle1 - In the implementation block
@property (nonatomic,retain) TLKMultilineText * subtitle2;                           //@synthesize subtitle2=_subtitle2 - In the implementation block
@property (assign,nonatomic) BOOL useLargeTitle;                                     //@synthesize useLargeTitle=_useLargeTitle - In the implementation block
@property (assign,nonatomic) BOOL shouldBadgeSubtitle;                               //@synthesize shouldBadgeSubtitle=_shouldBadgeSubtitle - In the implementation block
@property (assign,nonatomic) BOOL useCompactWidth;                                   //@synthesize useCompactWidth=_useCompactWidth - In the implementation block
@property (nonatomic,retain) TLKImage * leadingImage;                                //@synthesize leadingImage=_leadingImage - In the implementation block
@property (nonatomic,retain) TLKMultilineText * leadingTitle;                        //@synthesize leadingTitle=_leadingTitle - In the implementation block
@property (nonatomic,retain) TLKMultilineText * leadingSubtitle;                     //@synthesize leadingSubtitle=_leadingSubtitle - In the implementation block
@property (nonatomic,retain) TLKImage * trailingImage;                               //@synthesize trailingImage=_trailingImage - In the implementation block
@property (nonatomic,retain) TLKMultilineText * trailingTitle;                       //@synthesize trailingTitle=_trailingTitle - In the implementation block
@property (nonatomic,retain) TLKMultilineText * trailingSubtitle;                    //@synthesize trailingSubtitle=_trailingSubtitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TLKMultilineText *)subtitle1;
-(TLKMultilineText *)subtitle2;
-(void)setSubtitle1:(TLKMultilineText *)arg1 ;
-(TLKImage *)leadingImage;
-(TLKLabel *)subtitle1Label;
-(id)grid;
-(TLKEmbossedLabel *)subtitle2Label;
-(TLKMultilineText *)leadingSubtitle;
-(void)setLeadingSubtitle:(TLKMultilineText *)arg1 ;
-(TLKMultilineText *)trailingSubtitle;
-(void)setTrailingSubtitle:(TLKMultilineText *)arg1 ;
-(void)setSubtitle2:(TLKMultilineText *)arg1 ;
-(void)setLeadingImage:(TLKImage *)arg1 ;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(TLKLabel *)titleLabel;
-(void)setLeadingTitleLabel:(TLKLabel *)arg1 ;
-(TLKLabel *)leadingTitleLabel;
-(void)setLeadingSubtitleLabel:(TLKLabel *)arg1 ;
-(void)setTrailingTitleLabel:(TLKLabel *)arg1 ;
-(TLKLabel *)trailingTitleLabel;
-(void)setTrailingSubtitleLabel:(TLKLabel *)arg1 ;
-(TLKLabel *)trailingSubtitleLabel;
-(TLKLabel *)leadingSubtitleLabel;
-(TLKMultilineText *)leadingTitle;
-(TLKMultilineText *)trailingTitle;
-(BOOL)usesDefaultLayoutMargins;
-(void)setLeadingTitle:(TLKMultilineText *)arg1 ;
-(void)setTrailingTitle:(TLKMultilineText *)arg1 ;
-(TLKImage *)trailingImage;
-(id)firstRowOfViews;
-(id)secondRowOfViews;
-(id)thirdRowOfViews;
-(void)setSubtitle1Label:(TLKLabel *)arg1 ;
-(void)setSubtitle2Label:(TLKEmbossedLabel *)arg1 ;
-(void)setSubtitleStackView:(NUIContainerStackView *)arg1 ;
-(NUIContainerStackView *)subtitleStackView;
-(BOOL)useLargeTitle;
-(BOOL)shouldBadgeSubtitle;
-(BOOL)useCompactWidth;
-(void)setShouldBadgeSubtitle:(BOOL)arg1 ;
-(void)setUseLargeTitle:(BOOL)arg1 ;
-(BOOL)secondRowIsHidden;
-(id)leadingImageInView;
-(id)trailingImageInView;
-(void)setUseCompactWidth:(BOOL)arg1 ;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg1 ;
-(void)setTitleLabel:(TLKLabel *)arg1 ;
-(id)subtitleLabel;
-(void)setTrailingImage:(TLKImage *)arg1 ;
-(TLKImageView *)leadingImageView;
-(void)setTrailingImageView:(TLKImageView *)arg1 ;
-(void)setLeadingImageView:(TLKImageView *)arg1 ;
-(TLKImageView *)trailingImageView;
-(void)setTitle:(TLKMultilineText *)arg1 ;
-(TLKMultilineText *)title;
@end

