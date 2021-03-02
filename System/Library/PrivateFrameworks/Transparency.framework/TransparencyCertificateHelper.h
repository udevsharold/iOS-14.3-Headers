/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Transparency/Transparency-Structs.h>
@interface TransparencyCertificateHelper : NSObject
+(BOOL)verifyCertificates:(id)arg1 intermediates:(id)arg2 policy:(SecPolicyRef)arg3 error:(id*)arg4 ;
+(SecCertificateRef)certificateFromData:(id)arg1 error:(id*)arg2 ;
+(id)copyTrustedKeysFromDataArray:(id)arg1 error:(id*)arg2 ;
+(BOOL)addTrustedCertificate:(id)arg1 trustedKeys:(id)arg2 error:(id*)arg3 ;
+(id)createCACertificatesArray:(id)arg1 error:(id*)arg2 ;
+(BOOL)verifyLeaf:(id)arg1 intermediates:(id)arg2 policy:(SecPolicyRef)arg3 error:(id*)arg4 ;
@end
