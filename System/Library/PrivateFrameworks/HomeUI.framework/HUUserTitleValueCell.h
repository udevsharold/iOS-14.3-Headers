/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUTitleValueCell.h>

@protocol CNAvatarViewController;
@class HFUserHandle, UIView;

@interface HUUserTitleValueCell : HUTitleValueCell {

	HFUserHandle* _userHandle;
	id<CNAvatarViewController> _avatarViewController;
	UIView* _avatarView;

}

@property (nonatomic,readonly) id<CNAvatarViewController> avatarViewController;              //@synthesize avatarViewController=_avatarViewController - In the implementation block
@property (nonatomic,readonly) UIView * avatarView;                                          //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) HFUserHandle * userHandle;                                      //@synthesize userHandle=_userHandle - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIView *)avatarView;
-(HFUserHandle *)userHandle;
-(id<CNAvatarViewController>)avatarViewController;
-(void)prepareForReuse;
-(void)_setupConstraints;
-(void)setUserHandle:(HFUserHandle *)arg1 ;
@end
