/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class CNContact, UILabel, CNAvatarViewController;

@interface CNStarkContactNameView : UIView {

	CNContact* _contact;
	UILabel* _nameLabel;
	CNAvatarViewController* _avatarViewController;

}

@property (nonatomic,readonly) CNContact * contact;                                        //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                                        //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,readonly) CNAvatarViewController * avatarViewController;              //@synthesize avatarViewController=_avatarViewController - In the implementation block
-(CNAvatarViewController *)avatarViewController;
-(CNContact *)contact;
-(UILabel *)nameLabel;
-(void)setupNameLabel;
-(void)setupAvatar;
-(void)setupConstraints;
-(id)initWithName:(id)arg1 ;
@end

