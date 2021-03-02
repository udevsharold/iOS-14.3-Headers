/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKMessageEntryRichTextViewDelegate <UITextViewDelegate>
@required
-(void)messageEntryRichTextViewDidTapHandwritingKey:(id)arg1;
-(double)maxWidthForPreviewImagesInMessageEntryRichTextView:(id)arg1;
-(BOOL)messageEntryRichTextView:(id)arg1 shouldRecognizeGesture:(id)arg2;
-(void)messageEntryRichTextViewWasTapped:(id)arg1 isLongPress:(BOOL)arg2;
-(void)messageEntryRichTextView:(id)arg1 didTapMediaObject:(id)arg2;
-(void)messageEntryRichTextViewDidTapMention:(id)arg1 characterIndex:(double)arg2;
-(BOOL)messageEntryRichTextView:(id)arg1 shouldPasteMediaObjects:(id)arg2;
-(void)messageEntryRichTextView:(id)arg1 pastedURL:(id)arg2;

@end
