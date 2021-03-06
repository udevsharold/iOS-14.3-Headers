/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@protocol SearchUITableHeaderViewDelegate, SFFeedbackListener;
@class SFResultSection, TLKLabel, TLKTextButton, TLKStackView, NSString;

@interface SearchUITableHeaderView : UITableViewHeaderFooterView <NUIContainerViewDelegate> {

	BOOL _shouldUseInsetRoundedSections;
	BOOL _isExpanded;
	id<SearchUITableHeaderViewDelegate> _delegate;
	id<SFFeedbackListener> _feedbackListener;
	unsigned long long _headerType;
	SFResultSection* _section;
	TLKLabel* _titleLabel;
	TLKTextButton* _headerOptionButton;
	TLKStackView* _stackView;

}

@property (nonatomic,retain) TLKLabel * titleLabel;                                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) TLKTextButton * headerOptionButton;                               //@synthesize headerOptionButton=_headerOptionButton - In the implementation block
@property (nonatomic,retain) SFResultSection * section;                                        //@synthesize section=_section - In the implementation block
@property (nonatomic,retain) TLKStackView * stackView;                                         //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic) unsigned long long headerType;                                    //@synthesize headerType=_headerType - In the implementation block
@property (assign,nonatomic) BOOL isExpanded;                                                  //@synthesize isExpanded=_isExpanded - In the implementation block
@property (assign,nonatomic,__weak) id<SearchUITableHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SFFeedbackListener> feedbackListener;                   //@synthesize feedbackListener=_feedbackListener - In the implementation block
@property (readonly) NSString * title; 
@property (assign,nonatomic) BOOL shouldUseInsetRoundedSections;                               //@synthesize shouldUseInsetRoundedSections=_shouldUseInsetRoundedSections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(void)setFloating:(BOOL)arg1 ;
-(void)updateHeaderButtonVisibilityAnimated:(BOOL)arg1 ;
-(SFResultSection *)section;
-(void)setSection:(SFResultSection *)arg1 ;
-(unsigned long long)headerType;
-(id)init;
-(BOOL)isExpanded;
-(void)setIsExpanded:(BOOL)arg1 ;
-(void)setHeaderType:(unsigned long long)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(TLKStackView *)stackView;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)setStackView:(TLKStackView *)arg1 ;
-(TLKLabel *)titleLabel;
-(id<SFFeedbackListener>)feedbackListener;
-(BOOL)supportsShowMoreInApp;
-(void)layoutSubviews;
-(void)setFeedbackListener:(id<SFFeedbackListener>)arg1 ;
-(void)setTitleLabel:(TLKLabel *)arg1 ;
-(BOOL)isSuggestedAppsHeader;
-(void)setShouldUseInsetRoundedSections:(BOOL)arg1 ;
-(void)setHeaderOptionButton:(TLKTextButton *)arg1 ;
-(void)didMoveToWindow;
-(void)setDelegate:(id<SearchUITableHeaderViewDelegate>)arg1 ;
-(BOOL)shouldUseInsetRoundedSections;
-(void)moreButtonPressed;
-(TLKTextButton *)headerOptionButton;
-(void)updateWithSection:(id)arg1 isExpanded:(BOOL)arg2 usesInsetRoundedSection:(BOOL)arg3 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(id<SearchUITableHeaderViewDelegate>)delegate;
-(id)moreResultsPunchout;
@end

