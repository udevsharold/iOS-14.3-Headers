/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKBalloonViewDelegate <NSObject>
@optional
-(void)balloonView:(id)arg1 willInsertPluginViewAsSubview:(id)arg2;
-(void)tuConversationBalloonJoinButtonTapped:(id)arg1;

@required
-(void)balloonViewLongTouched:(id)arg1;
-(void)balloonViewShowInlineReply:(id)arg1;
-(void)balloonViewTapped:(id)arg1 withModifierFlags:(long long)arg2 selectedText:(id)arg3;
-(void)balloonViewDoubleTapped:(id)arg1;
-(void)liveBalloonTouched:(id)arg1;
-(void)balloonViewSelected:(id)arg1 withModifierFlags:(long long)arg2 selectedText:(id)arg3;
-(void)balloonViewTextViewDidChangeSelection:(id)arg1 selectedText:(id)arg2 textView:(id)arg3;
-(void)balloonView:(id)arg1 userDidDragOutsideBalloonWithPoint:(CGPoint)arg2;
-(void)interactionStartedFromPreviewItemControllerInBalloonView:(id)arg1;
-(void)balloonViewShouldCopyToPasteboard:(id)arg1;
-(void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)arg1;

@end
