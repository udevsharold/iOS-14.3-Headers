/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SEService.framework/SEService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct __SecCertificate* SecCertificateRef;

typedef struct {
	char* data;
	unsigned long long length;
} SCD_Struct_PT1;

typedef struct {
	SCD_Struct_PT1 version;
	SCD_Struct_PT1 assetACL;
	SCD_Struct_PT1 assetACLAttestation;
	SCD_Struct_PT1 keyBlob;
	SCD_Struct_PT1 encryptedWrappedKeyBlob;
} SCD_Struct_PT2;

typedef struct {
	SCD_Struct_PT1 version;
	SCD_Struct_PT1 instanceSerialNumber;
	SCD_Struct_PT1 publicKey;
	SCD_Struct_PT1 keyNumber;
	SCD_Struct_PT1 deviceInfos;
	SCD_Struct_PT1 counterLimit;
	SCD_Struct_PT1 counterIndex;
} SCD_Struct_PT3;

