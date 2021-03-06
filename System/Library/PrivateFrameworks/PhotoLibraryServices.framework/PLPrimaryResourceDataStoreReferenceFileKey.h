/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLPrimaryResourceDataStoreKey.h>

@class NSURL;

@interface PLPrimaryResourceDataStoreReferenceFileKey : PLPrimaryResourceDataStoreKey {

	NSURL* _cachedUrl;
	unsigned char _onceToken;
	PLPrimaryDataStore_ReferenceFileStrategy_KeyStruct_V1 _keyStruct;

}
+(id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2 ;
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg1 ;
-(id)uniformTypeIdentifier;
-(id)fileURLForAssetID:(id)arg1 ;
-(id)fileURLForAssetID:(id)arg1 inContext:(id)arg2 ;
-(id)initWithKeyStruct:(const void*)arg1 ;
-(id)initWithResourceType:(unsigned)arg1 ;
-(id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2 ;
-(id)keyData;
@end

