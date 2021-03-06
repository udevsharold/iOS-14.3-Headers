/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSAttributedString, NSDictionary;

@interface __NSCFLocalizedAttributedString : NSString <NSSecureCoding> {

	NSAttributedString* _original;
	NSDictionary* _formatConfiguration;

}
+(const CFStringRef)copyStringWithMarkup:(CFStringRef)arg1 formatConfiguration:(CFDictionaryRef)arg2 ;
+(const CFStringRef)createStringRequiringInflectionWithFormat:(CFStringRef)arg1 formatOptions:(CFDictionaryRef)arg2 arguments:(char*)arg3 ;
+(id)whitelistedStringWithAttributedString:(id)arg1 ;
-(BOOL)isEqualToString:(id)arg1 ;
-(unsigned long long)fastestEncoding;
-(id)substringFromIndex:(unsigned long long)arg1 ;
-(unsigned long long)length;
-(id)substringWithRange:(NSRange)arg1 ;
-(id)initWithAttributedStringMarkup:(id)arg1 formatConfiguration:(id)arg2 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)substringToIndex:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)__baseAttributedString;
-(id)_initWithAttributedString:(id)arg1 ;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 locale:(id)arg4 ;
-(const unsigned short*)_fastCharacterContents;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
@end

