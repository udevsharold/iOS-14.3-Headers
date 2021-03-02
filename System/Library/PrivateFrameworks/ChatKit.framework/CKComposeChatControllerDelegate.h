/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKComposeChatControllerDelegate <NSObject,CKChatControllerDelegate>
@optional
-(void)composeChatController:(id)arg1 didLoadEntryViewContentWithCompletion:(/*^block*/id)arg2;
-(void)composeChatController:(id)arg1 shouldSendComposition:(id)arg2 inConversation:(id)arg3 completion:(/*^block*/id)arg4;

@required
-(void)composeChatControllerDidCancelComposition:(id)arg1;
-(BOOL)composeChatControllerCanEditRecipients;
-(void)composeChatController:(id)arg1 didSelectNewConversation:(id)arg2;
-(BOOL)composeChatControllerShouldShowBackButtonViewDuringSendAnimation:(id)arg1;

@end
