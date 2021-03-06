/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface PKApplePayTrustKey : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSData* _signedEnrollmentData;
	NSData* _publicKeyHash;
	NSData* _certificate;

}

@property (nonatomic,copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * signedEnrollmentData;              //@synthesize signedEnrollmentData=_signedEnrollmentData - In the implementation block
@property (nonatomic,copy,readonly) NSData * publicKeyHash;                     //@synthesize publicKeyHash=_publicKeyHash - In the implementation block
@property (nonatomic,copy,readonly) NSData * certificate;                       //@synthesize certificate=_certificate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)publicKeyHash;
-(NSData *)certificate;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithKey:(id)arg1 ;
-(NSString *)identifier;
-(id)description;
-(NSData *)signedEnrollmentData;
-(void)encodeWithCoder:(id)arg1 ;
@end

