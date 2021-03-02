/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsAutocompleteUI/ContactsAutocompleteUI-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@class CNComposeRecipientAtom, CNComposeRecipient;

@interface _CNAtomTextAttachment : NSTextAttachment {

	BOOL _isPlaceholder;
	CNComposeRecipientAtom* _atomView;

}

@property (assign,nonatomic) BOOL isPlaceholder;                             //@synthesize isPlaceholder=_isPlaceholder - In the implementation block
@property (nonatomic,retain) CNComposeRecipientAtom * atomView;              //@synthesize atomView=_atomView - In the implementation block
@property (nonatomic,readonly) CNComposeRecipient * recipient; 
-(BOOL)isPlaceholder;
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(CNComposeRecipient *)recipient;
-(id)imageForBounds:(CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(CNComposeRecipientAtom *)atomView;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(id)initWithAtomView:(id)arg1 ;
-(id)attributedStringWithBaseAttributes:(id)arg1 ;
-(void)setAtomView:(CNComposeRecipientAtom *)arg1 ;
@end
