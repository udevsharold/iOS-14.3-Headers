/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIDragInteractionDelegate.h>

@protocol CNContactListBannerViewDelegate;
@class CNContactListStyleApplier, UIView, CNContactStore, CNContactFormatter, CNContact, UIGestureRecognizer, UILabel, CALayer, NSLayoutConstraint, NSArray, UIDragInteraction, NSString;

@interface CNContactListBannerView : UIView <UIDragInteractionDelegate> {

	id<CNContactListBannerViewDelegate> _delegate;
	CNContactListStyleApplier* _contactListStyleApplier;
	UIView* _bottomSeparator;
	CNContactStore* _contactStore;
	CNContactFormatter* _formatter;
	CNContact* _meContact;
	UIGestureRecognizer* _longPress;
	UIView* _avatarView;
	UIView* _avatarViewContainer;
	UILabel* _titleLabel;
	UIView* _footnoteContainer;
	UILabel* _footnoteLabel;
	UILabel* _footnoteValueLabel;
	CALayer* _topSeparator;
	NSLayoutConstraint* _footnoteTitleToTitleVerticalConstraint;
	NSLayoutConstraint* _footnoteTitleToValueHorizontalSpaceConstraint;
	NSArray* _constraintsPendingActivation;
	UIDragInteraction* _dragInteraction;

}

@property (nonatomic,readonly) CNContactFormatter * formatter;                                                //@synthesize formatter=_formatter - In the implementation block
@property (nonatomic,retain) CNContact * meContact;                                                           //@synthesize meContact=_meContact - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * longPress;                                               //@synthesize longPress=_longPress - In the implementation block
@property (nonatomic,retain) UIView * avatarView;                                                             //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,readonly) UIView * avatarViewContainer;                                                  //@synthesize avatarViewContainer=_avatarViewContainer - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIView * footnoteContainer;                                                    //@synthesize footnoteContainer=_footnoteContainer - In the implementation block
@property (nonatomic,readonly) UILabel * footnoteLabel;                                                       //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
@property (nonatomic,readonly) UILabel * footnoteValueLabel;                                                  //@synthesize footnoteValueLabel=_footnoteValueLabel - In the implementation block
@property (nonatomic,readonly) CALayer * topSeparator;                                                        //@synthesize topSeparator=_topSeparator - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * footnoteTitleToTitleVerticalConstraint;                     //@synthesize footnoteTitleToTitleVerticalConstraint=_footnoteTitleToTitleVerticalConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * footnoteTitleToValueHorizontalSpaceConstraint;              //@synthesize footnoteTitleToValueHorizontalSpaceConstraint=_footnoteTitleToValueHorizontalSpaceConstraint - In the implementation block
@property (nonatomic,retain) NSArray * constraintsPendingActivation;                                          //@synthesize constraintsPendingActivation=_constraintsPendingActivation - In the implementation block
@property (nonatomic,retain) UIDragInteraction * dragInteraction;                                             //@synthesize dragInteraction=_dragInteraction - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactListBannerViewDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CNContactListStyleApplier * contactListStyleApplier;                             //@synthesize contactListStyleApplier=_contactListStyleApplier - In the implementation block
@property (nonatomic,readonly) UIView * bottomSeparator;                                                      //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                                   //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
-(void)setMeContact:(CNContact *)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(CNContact *)meContact;
-(void)setContactListStyleApplier:(CNContactListStyleApplier *)arg1 ;
-(CNContactListStyleApplier *)contactListStyleApplier;
-(void)copy:(id)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(CNContactFormatter *)formatter;
-(UIView *)avatarView;
-(id)init;
-(void)setAvatarView:(UIView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)showMenu;
-(void)setFootnoteTitleToValueHorizontalSpaceConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setMeContact:(id)arg1 footnoteTitle:(id)arg2 footnoteValue:(id)arg3 ;
-(void)applyStyle;
-(UIView *)bottomSeparator;
-(void)setTopSeparatorWithInset:(double)arg1 andLength:(double)arg2 ;
-(void)dealloc;
-(UILabel *)titleLabel;
-(void)setFootnoteTitleToTitleVerticalConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)footnoteTitleToValueHorizontalSpaceConstraint;
-(CNContactStore *)contactStore;
-(UIGestureRecognizer *)longPress;
-(void)setConstraintsPendingActivation:(NSArray *)arg1 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(UIView *)footnoteContainer;
-(void)updateFontRelatedConstraints;
-(void)activatePendingConstraints;
-(CALayer *)topSeparator;
-(UILabel *)footnoteLabel;
-(UIView *)avatarViewContainer;
-(void)configureDragInteraction;
-(NSArray *)constraintsPendingActivation;
-(void)cellWasSingleTapped:(id)arg1 ;
-(void)setDelegate:(id<CNContactListBannerViewDelegate>)arg1 ;
-(void)menuDidHide:(id)arg1 ;
-(void)cellWasLongPressed:(id)arg1 ;
-(NSLayoutConstraint *)footnoteTitleToTitleVerticalConstraint;
-(UILabel *)footnoteValueLabel;
-(BOOL)displaysContactInfo;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIDragInteraction *)dragInteraction;
-(void)setDragInteraction:(UIDragInteraction *)arg1 ;
-(id<CNContactListBannerViewDelegate>)delegate;
@end

