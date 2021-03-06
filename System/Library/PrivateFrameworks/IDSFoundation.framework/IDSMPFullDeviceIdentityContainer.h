/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IDSMPFullLegacyIdentity, IDSNGMFullDeviceIdentity, NSNumber, NSData;

@interface IDSMPFullDeviceIdentityContainer : NSObject {

	IDSMPFullLegacyIdentity* _legacyFullIdentity;
	IDSNGMFullDeviceIdentity* _ngmFullDeviceIdentity;
	NSNumber* _ngmVersion;
	NSData* _cachedLegacySerializedData;

}

@property (nonatomic,retain) NSData * cachedLegacySerializedData;                             //@synthesize cachedLegacySerializedData=_cachedLegacySerializedData - In the implementation block
@property (nonatomic,readonly) IDSMPFullLegacyIdentity * legacyFullIdentity;                  //@synthesize legacyFullIdentity=_legacyFullIdentity - In the implementation block
@property (nonatomic,readonly) IDSNGMFullDeviceIdentity * ngmFullDeviceIdentity;              //@synthesize ngmFullDeviceIdentity=_ngmFullDeviceIdentity - In the implementation block
@property (nonatomic,readonly) NSNumber * ngmVersion;                                         //@synthesize ngmVersion=_ngmVersion - In the implementation block
+(id)identityWithLegacyFullIdentity:(id)arg1 ngmFullDeviceIdentity:(id)arg2 ngmVersion:(id)arg3 error:(id*)arg4 ;
+(id)_identityWithLegacyFullIdentity:(id)arg1 ngmFullDeviceIdentity:(id)arg2 ngmVersion:(id)arg3 legacyFullIdentitySerializedData:(id)arg4 error:(id*)arg5 ;
+(id)identityWithDataRepresentation:(id)arg1 error:(id*)arg2 ;
-(NSNumber *)ngmVersion;
-(id)_ngmUnsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 ;
-(id)publicIdentityWithError:(id*)arg1 ;
-(NSData *)cachedLegacySerializedData;
-(id)_legacyUnsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id*)arg3 ;
-(id)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 usingIdentityWithIdentifier:(id)arg3 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(IDSNGMFullDeviceIdentity *)ngmFullDeviceIdentity;
-(void)setCachedLegacySerializedData:(NSData *)arg1 ;
-(id)debugDescription;
-(id)_ngmValidateEncryptingAndSigningIdentity:(id)arg1 forMessage:(id)arg2 ;
-(id)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 usingIdentityWithIdentifier:(id)arg3 error:(id*)arg4 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)_ngmSynchronouslyUnsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id*)arg3 ;
-(IDSMPFullLegacyIdentity *)legacyFullIdentity;
-(id)initWithFullLegacyIdentity:(id)arg1 ngmFullDeviceidentity:(id)arg2 ngmVersion:(id)arg3 legacyFullIdentitySerializedData:(id)arg4 ;
@end

