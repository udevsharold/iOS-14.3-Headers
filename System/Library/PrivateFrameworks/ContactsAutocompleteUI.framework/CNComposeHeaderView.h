/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsAutocompleteUI/ContactsAutocompleteUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CNComposeHeaderViewDelegate;
@class NSString, CNComposeHeaderLabelView, UIView;

@interface CNComposeHeaderView : UIView {

	BOOL _showsHighlightWhenTouched;
	NSString* _navTitle;
	CNComposeHeaderLabelView* _labelView;
	id<CNComposeHeaderViewDelegate> _delegate;
	UIView* _separator;
	UIView* _highlightedBackgroundView;
	NSDirectionalEdgeInsets _separatorDirectionalEdgeInsets;

}

@property (nonatomic,readonly) CGRect mf_scribbleFrame; 
@property (nonatomic,retain) CNComposeHeaderLabelView * labelView;                                //@synthesize labelView=_labelView - In the implementation block
@property (nonatomic,retain) UIView * separator;                                                  //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) UIView * highlightedBackgroundView;                                  //@synthesize highlightedBackgroundView=_highlightedBackgroundView - In the implementation block
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * navTitle;                                                   //@synthesize navTitle=_navTitle - In the implementation block
@property (assign,nonatomic) BOOL showsHighlightWhenTouched;                                      //@synthesize showsHighlightWhenTouched=_showsHighlightWhenTouched - In the implementation block
@property (assign,nonatomic,__weak) id<CNComposeHeaderViewDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets separatorDirectionalEdgeInsets;              //@synthesize separatorDirectionalEdgeInsets=_separatorDirectionalEdgeInsets - In the implementation block
+(double)_labelTopPaddingSpecification;
+(id)defaultSeparatorColor;
+(double)preferredHeight;
+(double)separatorHeight;
+(id)defaultFont;
-(CGRect)mf_scribbleFrame;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSeparator:(UIView *)arg1 ;
-(UIView *)separator;
-(void)layoutMarginsDidChange;
-(id)_automationID;
-(UIEdgeInsets)_recipientViewEdgeInsets;
-(double)labelTopPadding;
-(void)handleTouchesEnded;
-(CNComposeHeaderLabelView *)labelView;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldEmbedLabelInTextView;
-(NSDirectionalEdgeInsets)separatorDirectionalEdgeInsets;
-(BOOL)showsHighlightWhenTouched;
-(UIView *)highlightedBackgroundView;
-(id)_highlightedBackgroundView;
-(void)refreshPreferredContentSize;
-(CGRect)_exclusionRectForView:(id)arg1 alongEdge:(unsigned long long)arg2 ;
-(void)setNavTitle:(NSString *)arg1 ;
-(void)setShowsHighlightWhenTouched:(BOOL)arg1 ;
-(void)setSeparatorDirectionalEdgeInsets:(NSDirectionalEdgeInsets)arg1 ;
-(void)setHighlightedBackgroundView:(UIView *)arg1 ;
-(id)_baseAttributes;
-(id)labelColor;
-(void)layoutSubviews;
-(CGRect)_contentRect;
-(void)setBounds:(CGRect)arg1 ;
-(NSString *)navTitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)setLabelView:(CNComposeHeaderLabelView *)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<CNComposeHeaderViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)titleLabelBaselineAlignmentRectForLabel:(id)arg1 ;
-(NSString *)label;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id<CNComposeHeaderViewDelegate>)delegate;
-(BOOL)_canBecomeFirstResponder;
@end

