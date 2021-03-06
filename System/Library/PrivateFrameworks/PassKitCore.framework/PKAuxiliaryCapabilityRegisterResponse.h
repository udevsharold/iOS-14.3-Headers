/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAuxiliaryCapabilityWebServiceResponse.h>

@class NSArray;

@interface PKAuxiliaryCapabilityRegisterResponse : PKAuxiliaryCapabilityWebServiceResponse {

	NSArray* _deviceSignatureCertificateChain;
	NSArray* _deviceDecryptionCertificateChain;
	NSArray* _serverDecryptionCertificateChain;
	NSArray* _serverSignatureCertificateChain;

}

@property (nonatomic,readonly) NSArray * deviceSignatureCertificateChain;               //@synthesize deviceSignatureCertificateChain=_deviceSignatureCertificateChain - In the implementation block
@property (nonatomic,readonly) NSArray * deviceDecryptionCertificateChain;              //@synthesize deviceDecryptionCertificateChain=_deviceDecryptionCertificateChain - In the implementation block
@property (nonatomic,readonly) NSArray * serverDecryptionCertificateChain;              //@synthesize serverDecryptionCertificateChain=_serverDecryptionCertificateChain - In the implementation block
@property (nonatomic,readonly) NSArray * serverSignatureCertificateChain;               //@synthesize serverSignatureCertificateChain=_serverSignatureCertificateChain - In the implementation block
-(NSArray *)deviceDecryptionCertificateChain;
-(NSArray *)deviceSignatureCertificateChain;
-(id)_retrieveCertificateChainFromJSONObject:(id)arg1 withParameterName:(id)arg2 ;
-(NSArray *)serverDecryptionCertificateChain;
-(NSArray *)serverSignatureCertificateChain;
-(id)initWithData:(id)arg1 ;
@end

