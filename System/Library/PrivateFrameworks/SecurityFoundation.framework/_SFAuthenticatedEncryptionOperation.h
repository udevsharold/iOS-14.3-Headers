/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/_SFEncryptionOperation.h>

@class _SFAESKeySpecifier, NSString;

@interface _SFAuthenticatedEncryptionOperation : NSObject <_SFEncryptionOperation> {

	id _authenticatedEncryptionOperationInternal;

}

@property (nonatomic,copy) _SFAESKeySpecifier * encryptionKeySpecifier; 
@property (assign,nonatomic) long long authenticationMode; 
@property (assign,nonatomic) long long authenticationCodeLength; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(long long)_defaultAuthenticationMode;
+(id)_defaultEncryptionOperation;
-(void)setAuthenticationMode:(long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAuthenticationCodeLength:(long long)arg1 ;
-(void)setEncryptionKeySpecifier:(_SFAESKeySpecifier *)arg1 ;
-(id)decrypt:(id)arg1 withKey:(id)arg2 additionalAuthenticatedData:(id)arg3 error:(id*)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(id)encrypt:(id)arg1 withKey:(id)arg2 additionalAuthenticatedData:(id)arg3 error:(id*)arg4 ;
-(id)initWithKeySpecifier:(id)arg1 ;
-(id)initWithKeySpecifier:(id)arg1 authenticationMode:(long long)arg2 ;
-(long long)authenticationMode;
-(_SFAESKeySpecifier *)encryptionKeySpecifier;
-(id)encrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(long long)authenticationCodeLength;
-(id)encrypt:(id)arg1 withKey:(id)arg2 additionalAuthenticatedData:(id)arg3 ivGenerator:(id)arg4 error:(id*)arg5 ;
-(id)encrypt:(id)arg1 withKey:(id)arg2 ivGenerator:(id)arg3 error:(id*)arg4 ;
-(id)decrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

