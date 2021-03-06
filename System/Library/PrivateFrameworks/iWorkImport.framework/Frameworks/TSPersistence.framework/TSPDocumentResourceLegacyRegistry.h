/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface TSPDocumentResourceLegacyRegistry : NSObject {

	NSDictionary* _metadataDictionary;

}

@property (readonly) NSDictionary * metadataDictionary; 
+(id)sharedSageRegistry;
+(id)sharedSageRegistryMetadataURL;
+(id)sharedTangierRegistryMetadataURL;
+(id)sharedTangierRegistry;
+(void)setSharedSageRegistryMetadataURL:(id)arg1 ;
+(void)setSharedTangierRegistryMetadataURL:(id)arg1 ;
-(NSDictionary *)metadataDictionary;
-(id)init;
-(id)initWithMetadataDictionary:(id)arg1 ;
-(id)documentResourceLegacyInfoForApplicationRelativePath:(id)arg1 ;
-(id)initWithMetadataURL:(id)arg1 ;
-(id)metadataDictionaryKeyForRelativePath:(id)arg1 ;
@end

