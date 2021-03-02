/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CRKASMRosterProviderConfiguration;

@interface CRKASMCertificateIngestor : NSObject {

	CRKASMRosterProviderConfiguration* _configuration;

}

@property (nonatomic,readonly) CRKASMRosterProviderConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(CRKASMRosterProviderConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 ;
-(BOOL)areCertificatesValid:(id)arg1 forUserIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)storeCertificates:(id)arg1 userIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)isCertificateValid:(id)arg1 forUserIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)ingestCertificates:(id)arg1 forTrustedUserIdentifier:(id)arg2 error:(id*)arg3 ;
@end
