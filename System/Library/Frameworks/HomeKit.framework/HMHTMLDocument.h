/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _HMDocument, NSString, NSAttributedString;

@interface HMHTMLDocument : NSObject <NSCopying, NSSecureCoding> {

	_HMDocument* _document;

}

@property (readonly) _HMDocument * document;                                  //@synthesize document=_document - In the implementation block
@property (copy,readonly) NSString * stringValue; 
@property (copy,readonly) NSAttributedString * attributedString; 
+(BOOL)supportsSecureCoding;
-(id)initWithString:(id)arg1 ;
-(_HMDocument *)document;
-(BOOL)validateAndReturnError:(id*)arg1 ;
-(NSAttributedString *)attributedString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

