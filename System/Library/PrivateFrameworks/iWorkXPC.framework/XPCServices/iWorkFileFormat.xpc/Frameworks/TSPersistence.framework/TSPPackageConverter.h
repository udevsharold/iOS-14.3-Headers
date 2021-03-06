/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPFileCoordinatorDelegate;
@class TSUExtendedAttributeCollection, TSPPackage, NSURL;

@interface TSPPackageConverter : NSObject {

	id<TSPFileCoordinatorDelegate> _fileCoordinatorDelegate;
	TSUExtendedAttributeCollection* _extendedAttributeCollection;
	BOOL _isCancelled;
	TSPPackage* _package;
	NSURL* _URL;

}

@property (nonatomic,readonly) TSPPackage * package;                  //@synthesize package=_package - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                           //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) BOOL isCancelled;                      //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,readonly) long long packageType; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL isPasswordProtected; 
+(id)newPackageConverterWithURL:(id)arg1 preserveExtendedAttributes:(BOOL)arg2 error:(id*)arg3 ;
+(BOOL)convertDocumentAtURL:(id)arg1 toPackageType:(long long)arg2 removeEntriesMatchingFilter:(id)arg3 error:(id*)arg4 ;
+(id)newPackageConverterWithURL:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(TSPPackage *)package;
-(BOOL)isValid;
-(BOOL)isCancelled;
-(BOOL)isPasswordProtected;
-(NSURL *)URL;
-(long long)packageType;
-(BOOL)checkPassword:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 packageType:(long long)arg2 removeEntriesMatchingFilter:(id)arg3 error:(id*)arg4 ;
-(id)initWithURL:(id)arg1 package:(id)arg2 fileCoordinatorDelegate:(id)arg3 preserveExtendedAttributes:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)path:(id)arg1 matchesFilter:(id)arg2 ;
-(BOOL)enumeratePackageEntriesWithZipArchive:(id)arg1 needsReadChannel:(BOOL)arg2 accessor:(/*^block*/id)arg3 ;
-(unsigned long long)progressTotalUnitCountWithZipArchive:(id)arg1 ;
-(id)newWriteChannelAtPath:(id)arg1 lastModificationDate:(id)arg2 size:(unsigned long long)arg3 CRC:(unsigned)arg4 packageWriter:(id)arg5 error:(id*)arg6 ;
-(BOOL)isDataPath:(id)arg1 ;
-(BOOL)isObjectArchivePath:(id)arg1 ;
-(BOOL)isDocumentPropertiesPath:(id)arg1 ;
-(BOOL)hasEntriesMatchingFilter:(id)arg1 ;
@end

