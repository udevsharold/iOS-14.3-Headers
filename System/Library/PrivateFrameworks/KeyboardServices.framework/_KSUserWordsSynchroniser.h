/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, _KSCloudKitManager, _KSControlFileController, _KSSystemTask, NSArray, _KSRequestThrottle;

@interface _KSUserWordsSynchroniser : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	_KSCloudKitManager* _cloudKitManager;
	_KSControlFileController* _controlFile;
	_KSSystemTask* _pushTask;
	BOOL _taskRun;
	NSArray* _languagesIfOffline;
	BOOL _attemptingConnection;
	BOOL _retryPending;
	BOOL _needRetry;
	_KSRequestThrottle* _identityThrottle;

}

@property (nonatomic,retain) NSArray * requiredLanguages; 
+(Class)infoClass;
+(id)sharedInstance;
+(id)generateKeyWithSize:(unsigned long long)arg1 ;
+(id)generateRecordNameForFilename:(id)arg1 withKey:(id)arg2 ;
-(void)saveKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)checkConfiguration;
-(id)init;
-(id)containerID;
-(void)disable;
-(void)setRequiredLanguages:(NSArray *)arg1 ;
-(void)keyboardUsed;
-(void)checkProgress:(int)arg1 withInfo:(id)arg2 ;
-(void)dealloc;
-(void)modifyInformationWithOperations:(/*^block*/id)arg1 ;
-(BOOL)checkErrors:(id)arg1 ;
-(id)recordIDForLanguage:(id)arg1 withKey:(id)arg2 ;
-(id)generateRecordListForLanguages:(id)arg1 ;
-(void)generateKeyWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)readFilesWithRecordIDs:(id)arg1 forColumns:(id)arg2 priority:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(NSArray *)requiredLanguages;
-(void)accountDidChange:(id)arg1 ;
-(void)overwriteFilesWithRecords:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)initForTestingWithManager:(id)arg1 enablePushing:(BOOL)arg2 ;
-(void)deleteZoneWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)firstTimeDownloadWithKey:(id)arg1 ;
-(id)filenameForLanguage:(id)arg1 ;
-(id)information;
-(void)checkForDownload:(id)arg1 uploads:(id)arg2 allLanguages:(id)arg3 ;
-(void)identitiesDidChange:(id)arg1 ;
-(void)loadKeyWithCompletion:(/*^block*/id)arg1 ;
-(void)dumpAllRecordsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deltaDownloadForLanguages:(id)arg1 ;
@end
