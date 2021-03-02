/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATConnectionDelegate.h>

@protocol ATConnectionDelegate;
@class NSXPCConnection, NSMutableArray, NSObject, NSString;

@interface ATConnection : NSObject <ATConnectionDelegate> {

	NSXPCConnection* _xpcConnection;
	BOOL _registerForStatus;
	NSMutableArray* _registeredDataclasses;
	int _atcRunningToken;
	BOOL _atcRunning;
	NSObject*<ATConnectionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSObject*<ATConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)connectionWasInterrupted:(id)arg1 ;
-(void)unregisterForStatus;
-(void)openDeviceMessageLinkWithPriority:(int)arg1 ;
-(id)init;
-(void)connection:(id)arg1 updatedProgress:(id)arg2 ;
-(void)requestSyncForPairedDeviceWithPriority:(int)arg1 ;
-(void)dealloc;
-(void)_handleDisconnect;
-(BOOL)isSyncing:(BOOL*)arg1 automatically:(BOOL*)arg2 wirelessly:(BOOL*)arg3 ;
-(void)_sendStatusRegistration;
-(void)purgePartialAsset:(id)arg1 forDataclass:(id)arg2 ;
-(id)getAssetMetrics;
-(void)cancelSync;
-(void)clearSyncData;
-(void)requestKeybagSyncToPairedDevice;
-(id)restoreDeviceWithIdentifier:(id)arg1 ;
-(void)initiateAssetDownloadSessionsWithCompletion:(/*^block*/id)arg1 ;
-(void)registerForStatus;
-(void)_sendStatusRegistrationWithCompletion:(/*^block*/id)arg1 ;
-(void)lowBatteryNotification;
-(void)registerForAssetProgressForDataclass:(id)arg1 ;
-(void)prioritizeAsset:(id)arg1 forDataclass:(id)arg2 ;
-(BOOL)getDataRestoreIsComplete;
-(void)setDelegate:(NSObject*<ATConnectionDelegate>)arg1 ;
-(void)openDeviceMessageLink;
-(void)connection:(id)arg1 updatedAssets:(id)arg2 ;
-(NSObject*<ATConnectionDelegate>)delegate;
-(void)keepATCAlive:(BOOL)arg1 ;
-(void)requestSyncForLibrary:(id)arg1 ;
@end
