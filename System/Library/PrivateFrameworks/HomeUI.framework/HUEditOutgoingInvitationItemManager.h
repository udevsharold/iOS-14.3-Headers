/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>
#import <libobjc.A.dylib/HUUserItemManager.h>

@class HFStaticItem, HMOutgoingHomeInvitation, NSString;

@interface HUEditOutgoingInvitationItemManager : HFItemManager <HUUserItemManager> {

	HFStaticItem* _inviteAgainItem;
	HFStaticItem* _removeItem;

}

@property (nonatomic,retain) HFStaticItem * inviteAgainItem;                               //@synthesize inviteAgainItem=_inviteAgainItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * removeItem;                                    //@synthesize removeItem=_removeItem - In the implementation block
@property (nonatomic,readonly) HMOutgoingHomeInvitation * outgoingInvitation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HMOutgoingHomeInvitation *)outgoingInvitation;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(void)setRemoveItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)removeItem;
-(HFStaticItem *)inviteAgainItem;
-(void)setInviteAgainItem:(HFStaticItem *)arg1 ;
-(id)_removeTitleForInvitationState:(long long)arg1 ;
@end

