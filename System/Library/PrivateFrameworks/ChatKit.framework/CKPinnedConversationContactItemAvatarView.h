/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKAvatarView.h>
#import <libobjc.A.dylib/CKPinnedConversationContactItemView.h>

@protocol CKPinnedConversationContactItem;
@interface CKPinnedConversationContactItemAvatarView : CKAvatarView <CKPinnedConversationContactItemView> {

	id<CKPinnedConversationContactItem> _pinnedConversationContactItem;

}

@property (nonatomic,retain) id<CKPinnedConversationContactItem> pinnedConversationContactItem;              //@synthesize pinnedConversationContactItem=_pinnedConversationContactItem - In the implementation block
-(id)init;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateContactItemViewShadows;
-(id<CKPinnedConversationContactItem>)pinnedConversationContactItem;
-(void)setPinnedConversationContactItem:(id<CKPinnedConversationContactItem>)arg1 ;
@end
