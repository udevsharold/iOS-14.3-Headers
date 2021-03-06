/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNActionsViewProtocol.h>

@class NSString, CNGroupIdentity, CNContact, CNContactFormatter, CNGroupIdentityInlineActionsViewConfiguration, UIView, CNGroupAvatarViewController, UILabel, CNActionsView;

@interface CNSyndicationViewController : UIViewController <CNActionsViewProtocol> {

	NSString* _subtitleText;
	CNGroupIdentity* _group;
	CNContact* _senderContact;
	CNContactFormatter* _contactFormatter;
	CNGroupIdentityInlineActionsViewConfiguration* _actionsViewConfiguration;
	UIView* _nameContainerView;
	CNGroupAvatarViewController* _groupAvatarViewController;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	CNActionsView* _actionsView;
	UIView* _actionsContainerView;

}

@property (nonatomic,retain) CNGroupIdentity * group;                                                                 //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) CNContact * senderContact;                                                               //@synthesize senderContact=_senderContact - In the implementation block
@property (nonatomic,retain) CNContactFormatter * contactFormatter;                                                   //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (nonatomic,readonly) CNGroupIdentityInlineActionsViewConfiguration * actionsViewConfiguration;              //@synthesize actionsViewConfiguration=_actionsViewConfiguration - In the implementation block
@property (nonatomic,retain) UIView * nameContainerView;                                                              //@synthesize nameContainerView=_nameContainerView - In the implementation block
@property (nonatomic,retain) CNGroupAvatarViewController * groupAvatarViewController;                                 //@synthesize groupAvatarViewController=_groupAvatarViewController - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                                                 //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) CNActionsView * actionsView;                                                             //@synthesize actionsView=_actionsView - In the implementation block
@property (nonatomic,retain) UIView * actionsContainerView;                                                           //@synthesize actionsContainerView=_actionsContainerView - In the implementation block
@property (nonatomic,copy) NSString * subtitleText;                                                                   //@synthesize subtitleText=_subtitleText - In the implementation block
+(id)descriptorForRequiredKeys;
-(CNContactFormatter *)contactFormatter;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(NSString *)subtitleText;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setGroup:(CNGroupIdentity *)arg1 ;
-(UILabel *)titleLabel;
-(CNContact *)senderContact;
-(void)setupNameViews;
-(void)didSelectAction:(id)arg1 withSourceView:(id)arg2 longPress:(BOOL)arg3 ;
-(id)subtitleTextForSenderContact:(id)arg1 ;
-(id)initWithGroup:(id)arg1 senderContact:(id)arg2 actionsViewConfiguration:(id)arg3 ;
-(void)setupContainerViews;
-(void)setupActionViews;
-(void)setSenderContact:(CNContact *)arg1 ;
-(CNGroupIdentityInlineActionsViewConfiguration *)actionsViewConfiguration;
-(UIView *)nameContainerView;
-(void)setNameContainerView:(UIView *)arg1 ;
-(CNGroupAvatarViewController *)groupAvatarViewController;
-(void)setGroupAvatarViewController:(CNGroupAvatarViewController *)arg1 ;
-(UIView *)actionsContainerView;
-(void)setActionsContainerView:(UIView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(CNActionsView *)actionsView;
-(UILabel *)subtitleLabel;
-(void)setSubtitleText:(NSString *)arg1 ;
-(CNGroupIdentity *)group;
-(void)setActionsView:(CNActionsView *)arg1 ;
-(void)viewDidLoad;
@end

