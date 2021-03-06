/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKContactFieldConfiguration;

@interface PKNameComponentFormatConfiguration : NSObject <NSSecureCoding> {

	PKContactFieldConfiguration* _givenNameFieldConfiguration;
	PKContactFieldConfiguration* _familyNameFieldConfiguration;
	PKContactFieldConfiguration* _phoneticGivenNameFieldConfiguration;
	PKContactFieldConfiguration* _phoneticFamilyNameFieldConfiguration;

}

@property (nonatomic,readonly) PKContactFieldConfiguration * givenNameFieldConfiguration;                       //@synthesize givenNameFieldConfiguration=_givenNameFieldConfiguration - In the implementation block
@property (nonatomic,readonly) PKContactFieldConfiguration * familyNameFieldConfiguration;                      //@synthesize familyNameFieldConfiguration=_familyNameFieldConfiguration - In the implementation block
@property (nonatomic,readonly) PKContactFieldConfiguration * phoneticGivenNameFieldConfiguration;               //@synthesize phoneticGivenNameFieldConfiguration=_phoneticGivenNameFieldConfiguration - In the implementation block
@property (nonatomic,readonly) PKContactFieldConfiguration * phoneticFamilyNameFieldConfiguration;              //@synthesize phoneticFamilyNameFieldConfiguration=_phoneticFamilyNameFieldConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(PKContactFieldConfiguration *)givenNameFieldConfiguration;
-(PKContactFieldConfiguration *)familyNameFieldConfiguration;
-(PKContactFieldConfiguration *)phoneticGivenNameFieldConfiguration;
-(PKContactFieldConfiguration *)phoneticFamilyNameFieldConfiguration;
-(id)initWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

