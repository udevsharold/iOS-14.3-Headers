/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLResourceDataStoreKey.h>
#import <libobjc.A.dylib/PLChooserKeyProperties.h>

@class NSString;

@interface PLSharedStreamsDataStoreKey : PLResourceDataStoreKey <PLChooserKeyProperties> {

	NSString* _relativePath;
	unsigned _sharedStreamsResourceType;

}
+(unsigned long long)dataLengthFromPreviewByte:(unsigned char)arg1 ;
+(id)_replacementPathExtensionForType:(unsigned)arg1 ;
+(id)_keyDataWithRelativePath:(id)arg1 type:(unsigned)arg2 ;
+(id)_relativeFilePathForPersonID:(id)arg1 albumID:(id)arg2 dcimDirectory:(id)arg3 fileName:(id)arg4 ;
-(BOOL)isDerivative;
-(unsigned)resourceType;
-(id)uniformTypeIdentifier;
-(id)fileURLForAssetID:(id)arg1 ;
-(id)initWithAsset:(id)arg1 album:(id)arg2 type:(unsigned)arg3 ;
-(id)initWithKeyStruct:(const void*)arg1 ;
-(BOOL)isEqualToKey:(id)arg1 ;
-(unsigned)recipeIDForAssetID:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)keyData;
-(id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2 ;
-(id)descriptionForAssetID:(id)arg1 ;
-(unsigned)resourceVersion;
@end

