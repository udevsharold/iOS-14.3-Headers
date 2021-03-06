/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _SFCertificate, _SFPublicKey, _SFKeyPair, SFIdentityAttributes;

@interface _SFIdentity : NSObject {

	id _identityInternal;

}

@property (nonatomic,retain) _SFCertificate * certificate; 
@property (nonatomic,readonly) _SFPublicKey * publicKey; 
@property (nonatomic,retain) _SFKeyPair * keyPair; 
@property (nonatomic,readonly) SFIdentityAttributes * attributes; 
+(BOOL)supportsSecureCoding;
-(SFIdentityAttributes *)attributes;
-(_SFCertificate *)certificate;
-(id)initWithCoder:(id)arg1 ;
-(void)setCertificate:(_SFCertificate *)arg1 ;
-(_SFKeyPair *)keyPair;
-(_SFPublicKey *)publicKey;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPublicKey:(id)arg1 certificate:(id)arg2 ;
-(id)initWithKeyPair:(id)arg1 certificate:(id)arg2 ;
-(id)initWithPublicKey:(id)arg1 ;
-(id)initWithKeyPair:(id)arg1 ;
-(void)setKeyPair:(_SFKeyPair *)arg1 ;
@end

