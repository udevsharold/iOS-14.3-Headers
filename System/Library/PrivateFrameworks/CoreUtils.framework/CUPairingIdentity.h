/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSUUID;

@interface CUPairingIdentity : NSObject <NSSecureCoding> {

	NSData* _altIRK;
	NSUUID* _identifier;
	NSData* _publicKey;
	NSData* _secretKey;

}

@property (nonatomic,copy) NSData * altIRK;                  //@synthesize altIRK=_altIRK - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSData * publicKey;               //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,copy) NSData * secretKey;               //@synthesize secretKey=_secretKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)altIRK;
-(void)setPublicKey:(NSData *)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)description;
-(void)setAltIRK:(NSData *)arg1 ;
-(NSData *)publicKey;
-(void)setSecretKey:(NSData *)arg1 ;
-(NSData *)secretKey;
-(void)encodeWithCoder:(id)arg1 ;
@end
