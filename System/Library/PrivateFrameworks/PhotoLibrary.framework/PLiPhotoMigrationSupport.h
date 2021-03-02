/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLiPhotoMigrationSupport : NSObject {

	Ai _inFlightMigrationCount;

}

@property (nonatomic,readonly) BOOL migrationWasInterrupted; 
+(id)sharedInstance;
-(id)_iPhotoToPhotosUuidMapTable;
-(void)_deleteiPhotoSubDirectoryWithDirectoryPath:(id)arg1 subDirectoryName:(id)arg2 description:(id)arg3 ;
-(id)_displayableUuidWithUuid:(id)arg1 ;
-(void)_decrementInFlightMigrationCount;
-(BOOL)_isMigrating;
-(BOOL)_createParentDirectoryIfNecessaryWithPath:(id)arg1 ;
-(id)_firstFilePathWithAnyExtensionAtPath:(id)arg1 extension:(id*)arg2 ;
-(void)migrateEachPreMigratediPhotoLibrary:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_validateUuid:(id)arg1 ;
-(id)_migratediPhotoDir;
-(void)_incrementInFlightMigrationCount;
-(void)fireMigrationOfiPhotoLibraryWithProgressHandler:(/*^block*/id)arg1 ;
-(id)_preMigratediPhotoDir;
-(id)_iPhotoMediaDirUuidListSortedByDateCreatedWithDir:(id)arg1 ;
-(id)_inFlightMigrationMarkerFilePath;
-(BOOL)migrationWasInterrupted;
-(void)_migrateiPhotoLibraryWithProgressHandler:(/*^block*/id)arg1 ;
-(void)_migrateiPhotoLibraryWorkerWithProgressHandler:(/*^block*/id)arg1 iPhotoLibraryDir:(id)arg2 ;
-(void)checkForUnmigratediPhotoContentWithCompletion:(/*^block*/id)arg1 ;
@end
