/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface TUHandle : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasSetISOCountryCode;
	long long _type;
	NSString* _value;
	NSString* _isoCountryCode;
	NSString* _normalizedValue;

}

@property (assign,nonatomic) BOOL hasSetISOCountryCode;                                   //@synthesize hasSetISOCountryCode=_hasSetISOCountryCode - In the implementation block
@property (nonatomic,copy) NSString * isoCountryCode;                                     //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * normalizedValue;                           //@synthesize normalizedValue=_normalizedValue - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
@property (assign,nonatomic) long long type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * value;                                              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)handleWithPersonHandle:(id)arg1 ;
+(id)handleWithDictionaryRepresentation:(id)arg1 ;
+(id)stringForType:(long long)arg1 ;
+(id)normalizedHandleWithDestinationID:(id)arg1 ;
+(id)handleForCHRecentCall:(id)arg1 ;
+(id)normalizedGenericHandleForValue:(id)arg1 ;
+(id)normalizedPhoneNumberHandleForValue:(id)arg1 isoCountryCode:(id)arg2 ;
+(id)handleWithDestinationID:(id)arg1 ;
+(id)handlesForCHRecentCall:(id)arg1 ;
+(id)normalizedEmailAddressHandleForValue:(id)arg1 ;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(NSString *)isoCountryCode;
-(NSString *)normalizedValue;
-(NSString *)value;
-(id)initWithHandle:(id)arg1 ;
-(id)init;
-(BOOL)isValidForISOCountryCode:(id)arg1 ;
-(BOOL)isCanonicallyEqualToHandle:(id)arg1 isoCountryCode:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)initWithType:(long long)arg1 value:(id)arg2 ;
-(void)setValue:(NSString *)arg1 ;
-(id)initWithType:(long long)arg1 value:(id)arg2 normalizedValue:(id)arg3 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)canonicalHandleForISOCountryCode:(id)arg1 ;
-(BOOL)isEqualToHandle:(id)arg1 ;
-(id)personHandle;
-(id)description;
-(long long)type;
-(id)initWithDestinationID:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setHasSetISOCountryCode:(BOOL)arg1 ;
-(BOOL)hasSetISOCountryCode;
-(BOOL)isEquivalentToHandle:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
