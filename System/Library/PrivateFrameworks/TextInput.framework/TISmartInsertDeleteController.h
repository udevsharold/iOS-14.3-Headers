/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TITextInputTraits;

@interface TISmartInsertDeleteController : NSObject {

	BOOL _enabled;
	TITextInputTraits* _textInputTraits;

}

@property (nonatomic,readonly) TITextInputTraits * textInputTraits;              //@synthesize textInputTraits=_textInputTraits - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                      //@synthesize enabled=_enabled - In the implementation block
-(TITextInputTraits *)textInputTraits;
-(BOOL)isEnabled;
-(id)initWithTextInputTraits:(id)arg1 ;
-(void)smartDeleteForDocumentState:(id)arg1 outBeforeLength:(unsigned long long*)arg2 outAfterLength:(unsigned long long*)arg3 ;
-(void)smartInsertForDocumentState:(id)arg1 stringToInsert:(id)arg2 outBeforeString:(id*)arg3 outAfterString:(id*)arg4 ;
-(unsigned long long)_numberOfCharactersInSet:(id)arg1 atBeginningOfString:(id)arg2 ;
-(unsigned long long)_numberOfCharactersInSet:(id)arg1 atEndOfString:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
@end

