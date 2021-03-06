/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKCloudSyncObserverClientInterface.h>

@protocol HKCloudSyncObserverDelegate;
@class NSUUID, HKTaskServerProxyProvider, NSProgress, HKCloudSyncObserverStatus, NSString;

@interface HKCloudSyncObserver : NSObject <_HKXPCExportable, HKCloudSyncObserverClientInterface> {

	NSUUID* _identifier;
	HKTaskServerProxyProvider* _proxyProvider;
	NSProgress* _progress;
	HKCloudSyncObserverStatus* _status;
	id<HKCloudSyncObserverDelegate> _delegate;
	os_unfair_lock_s _lock;

}

@property (assign,nonatomic,__weak) id<HKCloudSyncObserverDelegate> delegate; 
@property (nonatomic,copy,readonly) HKCloudSyncObserverStatus * status; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
+(id)clientInterface;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(HKCloudSyncObserverStatus *)status;
-(id)remoteInterface;
-(void)setProgress:(id)arg1 ;
-(void)_clientQueue_didCompleteSyncWithStatus:(long long)arg1 error:(id)arg2 ;
-(void)clientRemote_syncDidStart;
-(void)clientRemote_didUpdateObserverWithSyncStatus:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 delegate:(id)arg2 ;
-(void)startObservingSyncStatus;
-(void)startSyncIfRestoreNotCompleted;
-(void)setDelegate:(id<HKCloudSyncObserverDelegate>)arg1 ;
-(id)progress;
-(void)setStatus:(HKCloudSyncObserverStatus *)arg1 ;
-(id<HKCloudSyncObserverDelegate>)delegate;
@end

