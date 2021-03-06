/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class MFCertificateTrustInfo, NSString, MFError;

@interface MFMessageSigner : NSObject {

	int _status;
	MFCertificateTrustInfo* _signingCertificateTrustInfo;
	MFCertificateTrustInfo* _encryptionCertificateTrustInfo;
	NSString* _sender;

}

@property (nonatomic,readonly) MFCertificateTrustInfo * signingCertificateTrustInfo;                 //@synthesize signingCertificateTrustInfo=_signingCertificateTrustInfo - In the implementation block
@property (nonatomic,readonly) MFCertificateTrustInfo * encryptionCertificateTrustInfo;              //@synthesize encryptionCertificateTrustInfo=_encryptionCertificateTrustInfo - In the implementation block
@property (nonatomic,readonly) NSString * sender;                                                    //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) MFError * error; 
-(MFError *)error;
-(NSString *)sender;
-(id)initWithSender:(id)arg1 signingTrust:(SecTrustRef)arg2 encryptionTrust:(SecTrustRef)arg3 verification:(int)arg4 ;
-(MFCertificateTrustInfo *)signingCertificateTrustInfo;
-(MFCertificateTrustInfo *)encryptionCertificateTrustInfo;
@end

