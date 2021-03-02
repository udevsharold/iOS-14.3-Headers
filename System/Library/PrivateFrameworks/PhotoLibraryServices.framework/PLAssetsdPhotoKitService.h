/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>
#import <libobjc.A.dylib/PLPerformChangesRequestService.h>
#import <libobjc.A.dylib/PLAssetsdPhotoKitServiceProtocol.h>

@class PLAssetsdConnectionAuthorization, NSPersistentStoreCoordinator, NSString;

@interface PLAssetsdPhotoKitService : PLAbstractLibraryServicesManagerService <PLPerformChangesRequestService, PLAssetsdPhotoKitServiceProtocol> {

	PLAssetsdConnectionAuthorization* _connectionAuthorization;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)persistentStoreCoordinator;
-(void)applyChangesRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getUUIDsForCloudIdentifiers:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithLibraryServicesManager:(id)arg1 connectionAuthorization:(id)arg2 ;
-(void)commitRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)clientDescription;
@end
