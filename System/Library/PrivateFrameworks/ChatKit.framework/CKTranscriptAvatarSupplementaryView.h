/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptCollectionSupplementaryView.h>

@class CKAvatarView;

@interface CKTranscriptAvatarSupplementaryView : CKTranscriptCollectionSupplementaryView {

	CKAvatarView* _avatarView;

}

@property (nonatomic,retain) CKAvatarView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
+(id)supplementaryViewKindPrefix;
-(CKAvatarView *)avatarView;
-(void)setAvatarView:(CKAvatarView *)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)configureForChatItem:(id)arg1 ;
@end

