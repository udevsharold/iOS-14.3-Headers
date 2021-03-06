/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDecimalNumber, NSString;

@interface PKCurrencyAmount : NSObject <NSCopying, NSSecureCoding> {

	NSDecimalNumber* _amount;
	NSString* _currency;
	long long _exponent;
	NSString* _preformattedString;

}

@property (nonatomic,copy) NSDecimalNumber * amount;                   //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * currency;                        //@synthesize currency=_currency - In the implementation block
@property (assign,nonatomic) long long exponent;                       //@synthesize exponent=_exponent - In the implementation block
@property (nonatomic,copy) NSString * preformattedString;              //@synthesize preformattedString=_preformattedString - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)absoluteValue;
-(id)negativeValue;
-(BOOL)isEqualToCurrencyAmount:(id)arg1 ;
-(id)minimalFormattedStringValueInLocale:(id)arg1 ;
-(id)initWithAmount:(id)arg1 currency:(id)arg2 ;
-(NSString *)currency;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)exponent;
-(id)initWithAmount:(id)arg1 exponent:(long long)arg2 preformattedString:(id)arg3 ;
-(long long)compareToCurrencyCode:(id)arg1 amount:(id)arg2 ;
-(NSString *)preformattedString;
-(void)setPreformattedString:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDecimalNumber *)amount;
-(BOOL)isCurrency;
-(id)description;
-(void)setExponent:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)minimalFormattedStringValue;
-(void)setCurrency:(NSString *)arg1 ;
-(id)initWithAmount:(id)arg1 currency:(id)arg2 exponent:(long long)arg3 ;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(id)formattedStringValue;
-(void)encodeWithCoder:(id)arg1 ;
@end

