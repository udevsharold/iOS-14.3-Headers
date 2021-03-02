/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessageSecurity/MessageSecurity-Structs.h>
@class MSOID, NSData;

@interface MSAlgorithmIdentifier : NSObject {

	MSOID* _algorithm;
	NSData* _parameters;
	AlgorithmIdentifier* _asn1AlgId;

}

@property (readonly) AlgorithmIdentifier* asn1AlgId;              //@synthesize asn1AlgId=_asn1AlgId - In the implementation block
@property (readonly) MSOID * algorithm;                           //@synthesize algorithm=_algorithm - In the implementation block
@property (readonly) NSData * parameters;                         //@synthesize parameters=_parameters - In the implementation block
+(id)algorithmIdentifierWithOID:(id)arg1 ;
+(id)algorithmIdentifierWithAsn1AlgId:(AlgorithmIdentifier*)arg1 error:(id*)arg2 ;
+(id)digestAlgorithmWithSignatureAlgorithm:(id)arg1 error:(id*)arg2 ;
-(NSData *)parameters;
-(AlgorithmIdentifier*)encode;
-(void)dealloc;
-(MSOID *)algorithm;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithOID:(id)arg1 ;
-(id)initWithAsn1AlgId:(AlgorithmIdentifier*)arg1 error:(id*)arg2 ;
-(id)initDigestAlgorithmWithSignatureAlgorithm:(id)arg1 error:(id*)arg2 ;
-(id)initWithOID:(id)arg1 parameters:(id)arg2 ;
-(id)signatureAlgorithmWithDigestAlgorithm:(id)arg1 error:(id*)arg2 ;
-(AlgorithmIdentifier*)asn1AlgId;
@end
