/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol CNAvatarViewDelegateCNQuickActionsViewDelegate;
@class CNContactFormatter, NSDictionary, NSArray, CNQuickActionsManager, CNAvatarView, CNContactGridClippingView, UIView, CNQuickActionsView, UILabel, CNContact;

@interface CNContactGridCell : UICollectionViewCell {

	BOOL _showsContactOnTap;
	CNContactFormatter* _contactFormatter;
	id<CNAvatarViewDelegate><CNQuickActionsViewDelegate> _delegate;
	long long _monogrammerStyle;
	NSDictionary* _nameTextAttributes;
	NSArray* _actionCategories;
	CNQuickActionsManager* _actionsManager;
	CNAvatarView* _avatarView;
	CNContactGridClippingView* _actionsClippingView;
	UIView* _actionsContainerView;
	CNQuickActionsView* _actionsView;
	UILabel* _nameLabel;
	CGSize _avatarSize;
	UIEdgeInsets _avatarMargins;

}

@property (nonatomic,retain) CNAvatarView * avatarView;                                                         //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) CNContactGridClippingView * actionsClippingView;                                   //@synthesize actionsClippingView=_actionsClippingView - In the implementation block
@property (nonatomic,retain) UIView * actionsContainerView;                                                     //@synthesize actionsContainerView=_actionsContainerView - In the implementation block
@property (nonatomic,retain) CNQuickActionsView * actionsView;                                                  //@synthesize actionsView=_actionsView - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                                                               //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) CNContact * contact; 
@property (nonatomic,retain) CNContactFormatter * contactFormatter;                                             //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (assign,nonatomic,__weak) id<CNAvatarViewDelegate><CNQuickActionsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize avatarSize;                                                                 //@synthesize avatarSize=_avatarSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets avatarMargins;                                                        //@synthesize avatarMargins=_avatarMargins - In the implementation block
@property (assign,nonatomic) long long monogrammerStyle;                                                        //@synthesize monogrammerStyle=_monogrammerStyle - In the implementation block
@property (nonatomic,copy) NSDictionary * nameTextAttributes;                                                   //@synthesize nameTextAttributes=_nameTextAttributes - In the implementation block
@property (assign,nonatomic) BOOL showsContactOnTap;                                                            //@synthesize showsContactOnTap=_showsContactOnTap - In the implementation block
@property (nonatomic,copy) NSArray * actionCategories;                                                          //@synthesize actionCategories=_actionCategories - In the implementation block
@property (nonatomic,retain) CNQuickActionsManager * actionsManager;                                            //@synthesize actionsManager=_actionsManager - In the implementation block
@property (nonatomic,readonly) double maximumActionsWidth; 
+(double)actionsLeftMargin;
-(CNContactFormatter *)contactFormatter;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(void)setShowsContactOnTap:(BOOL)arg1 ;
-(void)updateConstraints;
-(void)setContact:(CNContact *)arg1 ;
-(CNAvatarView *)avatarView;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(NSArray *)actionCategories;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)setNameTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)nameTextAttributes;
-(void)setActionCategories:(NSArray *)arg1 ;
-(long long)monogrammerStyle;
-(CNQuickActionsManager *)actionsManager;
-(void)setActionsManager:(CNQuickActionsManager *)arg1 ;
-(CGSize)avatarSize;
-(void)setMonogrammerStyle:(long long)arg1 ;
-(void)setAvatarSize:(CGSize)arg1 ;
-(UIEdgeInsets)avatarMargins;
-(void)setAvatarMargins:(UIEdgeInsets)arg1 ;
-(BOOL)showsContactOnTap;
-(CNContact *)contact;
-(void)_createViewsIfNeeded;
-(void)_updateActionsMask;
-(/*^block*/id)animationBlockForPreparingToShowActions;
-(/*^block*/id)completionBlockForHidingActions;
-(double)maximumActionsWidth;
-(CNContactGridClippingView *)actionsClippingView;
-(void)setActionsClippingView:(CNContactGridClippingView *)arg1 ;
-(UIView *)actionsContainerView;
-(void)setActionsContainerView:(UIView *)arg1 ;
-(UILabel *)nameLabel;
-(CNQuickActionsView *)actionsView;
-(void)setDelegate:(id<CNAvatarViewDelegate><CNQuickActionsViewDelegate>)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)setActionsView:(CNQuickActionsView *)arg1 ;
-(id<CNAvatarViewDelegate><CNQuickActionsViewDelegate>)delegate;
@end
