/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ContactsAutocompleteUI/CNComposeRecipientTextView.h>

@protocol CKComposeRecipientViewDelegate;
@interface CKComposeRecipientView : CNComposeRecipientTextView {

	id<CKComposeRecipientViewDelegate> layoutDelegate;

}

@property (assign,nonatomic,__weak) id<CKComposeRecipientViewDelegate> layoutDelegate; 
-(UIEdgeInsets)layoutMargins;
-(UIEdgeInsets)safeAreaInsets;
-(void)reset;
-(void)atomTextViewDidBecomeFirstResponder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLayoutDelegate:(id<CKComposeRecipientViewDelegate>)arg1 ;
-(id<CKComposeRecipientViewDelegate>)layoutDelegate;
-(void)setFrame:(CGRect)arg1 ;
@end

