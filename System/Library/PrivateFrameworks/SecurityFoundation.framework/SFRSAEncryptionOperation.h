/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/_SFEncryptionOperation.h>

@class _SFRSAKeySpecifier, NSString;

@interface SFRSAEncryptionOperation : NSObject <_SFEncryptionOperation> {

	id _rsaEncryptionOperationInternal;

}

@property (nonatomic,copy) _SFRSAKeySpecifier * encryptionKeySpecifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_defaultEncryptionOperation;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEncryptionKeySpecifier:(_SFRSAKeySpecifier *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithKeySpecifier:(id)arg1 ;
-(_SFRSAKeySpecifier *)encryptionKeySpecifier;
-(id)encrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(id)decrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
