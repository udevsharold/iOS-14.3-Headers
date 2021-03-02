/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CTMessageAddress.h>

@class NSString;

@interface CTPhoneNumber : NSObject <NSCopying, CTMessageAddress> {

	NSString* _digits;
	NSString* _countryCode;
	BOOL _isShortCode;
	long long _slot;

}

@property (readonly) NSString * digits;                   //@synthesize digits=_digits - In the implementation block
@property (readonly) NSString * countryCode;              //@synthesize countryCode=_countryCode - In the implementation block
@property (assign) BOOL isShortCode;                      //@synthesize isShortCode=_isShortCode - In the implementation block
+(id)phoneNumberWithDigits:(long long)arg1 digits:(id)arg2 countryCode:(id)arg3 ;
+(BOOL)isValidPhoneNumber:(id)arg1 ;
+(BOOL)isValidPhoneNumberChar:(unsigned short)arg1 ;
+(id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2 ;
-(id)initWithDigits:(id)arg1 countryCode:(id)arg2 ;
-(BOOL)isShortCode;
-(id)encodedString;
-(id)canonicalFormat;
-(void)setIsShortCode:(BOOL)arg1 ;
-(id)initWithDigits:(long long)arg1 digits:(id)arg2 countryCode:(id)arg3 ;
-(long long)numberOfDigitsForShortCodeNumber;
-(long long)numberOfDigitsForShortCodeNumber:(long long)arg1 ;
-(id)formatForCallingCountry:(id)arg1 ;
-(NSString *)countryCode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)digits;
@end
