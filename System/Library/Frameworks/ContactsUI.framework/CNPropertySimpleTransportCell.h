/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertySimpleCell.h>

@class CNTransportButton, UIImageView, UIColor, UIView;

@interface CNPropertySimpleTransportCell : CNPropertySimpleCell {

	CNTransportButton* _transportIcon1;
	CNTransportButton* _transportIcon2;
	CNTransportButton* _transportIcon3;
	UIImageView* _starView;
	BOOL _allowsActions;
	BOOL _shouldShowBadge;
	BOOL _shouldShowTransportButtons;
	BOOL _needsUpdateTouchAreas;
	UIImageView* _standardStarView;
	UIColor* _actionsColor;
	UIView* _badgeView;

}

@property (nonatomic,retain) UIView * badgeView;                                       //@synthesize badgeView=_badgeView - In the implementation block
@property (assign,nonatomic) BOOL needsUpdateTouchAreas;                               //@synthesize needsUpdateTouchAreas=_needsUpdateTouchAreas - In the implementation block
@property (assign,nonatomic) BOOL allowsActions;                                       //@synthesize allowsActions=_allowsActions - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowStar; 
@property (assign,nonatomic) BOOL shouldShowBadge;                                     //@synthesize shouldShowBadge=_shouldShowBadge - In the implementation block
@property (assign,nonatomic) BOOL shouldShowTransportButtons;                          //@synthesize shouldShowTransportButtons=_shouldShowTransportButtons - In the implementation block
@property (nonatomic,readonly) CNTransportButton * transportIcon1; 
@property (nonatomic,readonly) CNTransportButton * transportIcon2; 
@property (nonatomic,readonly) CNTransportButton * transportIcon3; 
@property (nonatomic,readonly) CNTransportButton * standardTransportIcon; 
@property (nonatomic,readonly) UIImageView * standardStarView;                         //@synthesize standardStarView=_standardStarView - In the implementation block
@property (nonatomic,readonly) UIView * standardBadgeView; 
@property (nonatomic,retain) UIColor * actionsColor;                                   //@synthesize actionsColor=_actionsColor - In the implementation block
+(id)standardStarView;
+(void)_updateStarImageForView:(id)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
-(UIView *)badgeView;
-(void)setAllowsActions:(BOOL)arg1 ;
-(CNTransportButton *)standardTransportIcon;
-(CNTransportButton *)transportIcon1;
-(CNTransportButton *)transportIcon2;
-(CNTransportButton *)transportIcon3;
-(UIView *)standardBadgeView;
-(void)setShouldShowBadge:(BOOL)arg1 ;
-(void)updateStarIcon;
-(void)setActionsColor:(UIColor *)arg1 ;
-(void)updateLabelNeedingHuggingContent;
-(void)transportButtonClicked:(id)arg1 ;
-(BOOL)shouldShowTransportButtons;
-(void)setShouldShowTransportButtons:(BOOL)arg1 ;
-(UIImageView *)standardStarView;
-(UIColor *)actionsColor;
-(BOOL)needsUpdateTouchAreas;
-(void)setNeedsUpdateTouchAreas:(BOOL)arg1 ;
-(void)setBadgeView:(UIView *)arg1 ;
-(BOOL)shouldShowStar;
-(void)updateTransportButtons;
-(id)rightMostView;
-(BOOL)shouldPerformDefaultAction;
-(void)setCardGroupItem:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)variableConstraints;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)updateWithPropertyItem:(id)arg1 ;
-(BOOL)allowsActions;
-(BOOL)shouldShowBadge;
@end

