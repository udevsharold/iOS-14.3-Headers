/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class CNGroupIdentity, CNVisualIdentityAvatarViewController;

@interface CNGroupAvatarViewController : UIViewController {

	CNGroupIdentity* _group;
	CNVisualIdentityAvatarViewController* _avatarViewController;

}

@property (nonatomic,retain) CNGroupIdentity * group;                                                  //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) CNVisualIdentityAvatarViewController * avatarViewController;              //@synthesize avatarViewController=_avatarViewController - In the implementation block
+(id)descriptorForRequiredKeys;
+(id)log;
+(unsigned long long)maxContactAvatars;
-(CNVisualIdentityAvatarViewController *)avatarViewController;
-(void)setAvatarViewController:(CNVisualIdentityAvatarViewController *)arg1 ;
-(void)setGroup:(CNGroupIdentity *)arg1 ;
-(id)initWithGroup:(id)arg1 avatarViewControllerSettings:(id)arg2 ;
-(void)groupIdentityDidUpdate:(id)arg1 ;
-(CNGroupIdentity *)group;
-(id)initWithGroup:(id)arg1 ;
@end
