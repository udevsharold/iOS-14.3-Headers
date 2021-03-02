/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WLMigrationDataCoordinator, WLMobileInstallation, NSFileManager;

@interface WLSafeHarborManager : NSObject {

	WLMigrationDataCoordinator* _dataCoordinator;
	WLMobileInstallation* _mobileInstallation;
	NSFileManager* _fileManager;

}

@property (nonatomic,retain) NSFileManager * fileManager;              //@synthesize fileManager=_fileManager - In the implementation block
-(void)setFileManager:(NSFileManager *)arg1 ;
-(NSFileManager *)fileManager;
-(id)createSafeHarborDirectoryForBundleID:(id)arg1 returningError:(id*)arg2 ;
-(id)linkItemAtPath:(id)arg1 toRelativePath:(id)arg2 inAndroidContentPathOfSafeHarborDirectory:(id)arg3 ;
-(id)promoteDirectoryToSafeHarbor:(id)arg1 ;
-(id)initWithDataCoordinator:(id)arg1 mobileInstallation:(id)arg2 ;
-(id)deleteSafeHarborForBundleID:(id)arg1 ;
-(id)_safeHarborDirectoryForBundleID:(id)arg1 ;
-(id)_infoDictionaryForDirectory:(id)arg1 ;
-(id)_infoDataFromDictionary:(id)arg1 returningError:(id*)arg2 ;
-(id)_writeInfoData:(id)arg1 toDirectory:(id)arg2 ;
@end
