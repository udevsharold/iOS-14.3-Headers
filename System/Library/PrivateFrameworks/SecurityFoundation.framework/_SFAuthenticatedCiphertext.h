/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/_SFCiphertext.h>

@class NSData;

@interface _SFAuthenticatedCiphertext : _SFCiphertext {

	id _authenticatedCiphertextInternal;

}

@property (readonly) NSData * authenticationCode; 
@property (readonly) NSData * initializationVector; 
+(BOOL)supportsSecureCoding;
-(id)initWithCiphertext:(id)arg1 authenticationCode:(id)arg2 initializationVector:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)authenticationCode;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)initializationVector;
@end

