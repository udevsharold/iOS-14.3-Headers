/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSAttributedString.h>

@interface NSMutableAttributedString : NSAttributedString
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)mutableString;
-(void)setAttributedString:(id)arg1 ;
-(void)removeAttribute:(id)arg1 range:(NSRange)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)appendAttributedString:(id)arg1 ;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)beginEditing;
-(void)addAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(void)addAttributesWeakly:(id)arg1 range:(NSRange)arg2 ;
-(void)_inflectWithReplacements:(id)arg1 ;
-(void)endEditing;
-(Class)classForCoder;
@end

