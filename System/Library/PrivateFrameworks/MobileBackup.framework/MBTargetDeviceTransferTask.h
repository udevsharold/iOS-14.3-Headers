/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileBackup/MBDeviceTransferTask.h>
#import <libobjc.A.dylib/MBManagerDelegate.h>

@interface MBTargetDeviceTransferTask : MBDeviceTransferTask <MBManagerDelegate> {

	AB _startedPreflight;
	AB _startedKeychainTransfer;
	AB _startedKeychainDataTransfer;
	AB _startedKeychainDataImport;
	AB _startedDataTransfer;
	/*^block*/id _preflightCompletionHandler;
	/*^block*/id _keychainTransferCompletionHandler;

}

@property (nonatomic,copy) id preflightCompletionHandler;                     //@synthesize preflightCompletionHandler=_preflightCompletionHandler - In the implementation block
@property (nonatomic,copy) id keychainTransferCompletionHandler;              //@synthesize keychainTransferCompletionHandler=_keychainTransferCompletionHandler - In the implementation block
-(void)_finishWithError:(id)arg1 ;
-(void)startKeychainTransferWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startPreflightWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startKeychainDataTransferWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startKeychainDataImportWithKeychainInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startDataTransferWithPreflightInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)taskType;
-(void)cancel;
-(id)initWithFileTransferSession:(id)arg1 ;
-(void)manager:(id)arg1 didFinishDeviceTransferWithError:(id)arg2 ;
-(void)manager:(id)arg1 didFinishDeviceTransferPreflight:(id)arg2 error:(id)arg3 ;
-(void)manager:(id)arg1 didUpdateDeviceTransferProgress:(id)arg2 ;
-(void)start;
-(void)setKeychainTransferCompletionHandler:(id)arg1 ;
-(void)_finishKeychainTransferWithError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)manager:(id)arg1 didFinishDeviceTransferKeychainTransferWithError:(id)arg2 ;
-(id)preflightCompletionHandler;
-(void)setPreflightCompletionHandler:(id)arg1 ;
-(id)keychainTransferCompletionHandler;
-(void)_cancel;
-(void)_start;
-(void)resume;
@end
