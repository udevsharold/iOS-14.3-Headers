/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXRuntime/AXRuntime-Structs.h>
#import <Foundation/NSMutableString.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AXAttributedString : NSMutableString <NSCopying> {

	CFAttributedStringRef _string;

}
+(id)string;
+(id)axAttributedStringWithString:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(void)setAttributes:(id)arg1 ;
-(void)appendStringOrAXAttributedString:(id)arg1 ;
-(id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id*)arg1 ;
-(id)substringFromIndex:(unsigned long long)arg1 ;
-(unsigned long long)length;
-(id)substringWithRange:(NSRange)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(id)string;
-(void)removeAttributes:(id)arg1 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)attributedString;
-(id)axStringByReplacingCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)attributesAtIndex:(long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)enumerateAttribute:(id)arg1 inRange:(NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)isAXAttributedString;
-(BOOL)hasAttribute:(id)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(id)stringByTrimmingCharactersInSet:(id)arg1 ;
-(void)setAttributes:(id)arg1 withRange:(NSRange)arg2 ;
-(BOOL)hasAttributes;
-(void)dealloc;
-(id)coalescedFontAttributes;
-(void)appendString:(id)arg1 ;
-(id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:(id*)arg1 ;
-(void)replaceString:(CFStringRef)arg1 ;
-(const CFAttributedStringRef)cfAttributedString;
-(id)coalescedAttributes;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithStringOrAttributedString:(id)arg1 ;
-(id)description;
-(void)convertAttachmentsWithBlock:(/*^block*/id)arg1 ;
-(id)lowercaseString;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 withRange:(NSRange)arg3 ;
-(void)appendAXAttributedString:(id)arg1 ;
-(id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(NSRange)arg4 ;
-(id)axAttributedStringDescription;
-(id)uppercaseString;
-(id)attributedSubstringFromRange:(NSRange)arg1 ;
-(id)attributeValueForKey:(id)arg1 ;
-(void)enumerateAttributesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithCFAttributedString:(CFAttributedStringRef)arg1 ;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)axAttributedStringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 ;
@end

