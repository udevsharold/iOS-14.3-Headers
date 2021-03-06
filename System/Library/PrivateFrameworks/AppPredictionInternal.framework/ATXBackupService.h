/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXCloudStorageSettingsDelegate.h>

@protocol OS_dispatch_queue;
@class NSUserDefaults, ATXBackupFileManager, ATXCloudKitClient, ATXCloudStorageSettingsListener, NSString, NSObject;

@interface ATXBackupService : NSObject <ATXCloudStorageSettingsDelegate> {

	NSUserDefaults* _atxDefaults;
	BOOL _isManatee;
	ATXBackupFileManager* _backupFileManager;
	ATXCloudKitClient* _ckClient;
	ATXCloudStorageSettingsListener* _cloudStorageSettingsListener;
	NSString* _containerIdentifier;
	NSString* _deviceID;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) ATXBackupFileManager * backupFileManager;                                           //@synthesize backupFileManager=_backupFileManager - In the implementation block
@property (nonatomic,retain) ATXCloudKitClient * ckClient;                                                       //@synthesize ckClient=_ckClient - In the implementation block
@property (assign,nonatomic,__weak) ATXCloudStorageSettingsListener * cloudStorageSettingsListener;              //@synthesize cloudStorageSettingsListener=_cloudStorageSettingsListener - In the implementation block
@property (nonatomic,retain) NSString * containerIdentifier;                                                     //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,retain) NSString * deviceID;                                                                //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) BOOL isManatee;                                                                     //@synthesize isManatee=_isManatee - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                                           //@synthesize serialQueue=_serialQueue - In the implementation block
+(BOOL)isCloudKitError:(id)arg1 ;
+(BOOL)isManateeDecryptionError:(id)arg1 ;
+(id)queryForBackupsWithDeviceID:(id)arg1 ;
+(id)allErrorsFromCloudKitError:(id)arg1 ;
+(BOOL)isBackupRestore;
+(id)backupService;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)containerIdentifier;
-(ATXCloudKitClient *)ckClient;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)restoreFromBackupWithRetries:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isManatee;
-(void)setCloudStorageSettingsListener:(ATXCloudStorageSettingsListener *)arg1 ;
-(void)restoreFromBackupIfNeccessary:(/*^block*/id)arg1 ;
-(void)setIsManatee:(BOOL)arg1 ;
-(void)getDeviceIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)initializeCloudKitClientWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)handleDeleteDataRequest;
-(void)setBackupFileManager:(ATXBackupFileManager *)arg1 ;
-(void)backupWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)isManateeAvailableWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchBackupAssetWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateIsRestoreStarted:(BOOL)arg1 ;
-(NSString *)deviceID;
-(BOOL)retryIfNeededInResponseToError:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)saveBackupAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(ATXCloudStorageSettingsListener *)cloudStorageSettingsListener;
-(void)setCkClient:(ATXCloudKitClient *)arg1 ;
-(ATXBackupFileManager *)backupFileManager;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(id)initWithContainerIdentifier:(id)arg1 backupFileManager:(id)arg2 ;
-(void)setupRecordZoneWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)writeBackupToiCloud:(/*^block*/id)arg1 ;
@end

