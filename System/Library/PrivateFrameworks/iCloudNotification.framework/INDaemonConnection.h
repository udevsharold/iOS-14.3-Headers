/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iCloudNotification.framework/iCloudNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface INDaemonConnection : NSObject {

	NSXPCConnection* _connection;

}
-(id)init;
-(void)dealloc;
-(void)renewCredentialsWithCompletion:(/*^block*/id)arg1 ;
-(void)updateOfferForAccount:(id)arg1 offerId:(id)arg2 buttonId:(id)arg3 info:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)iCloudServerOfferForAccount:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)commonHeadersForRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)presentHiddenFreshmintWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)notifyDeviceStorageLevel:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)registerAccount:(id)arg1 foriCloudNotificationsWithReason:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)registerAccount:(id)arg1 foriCloudNotificationsWithReason:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)unregisterAccount:(id)arg1 fromiCloudNotificationsWithError:(id*)arg2 ;
-(void)unregisterAccount:(id)arg1 fromiCloudNotificationsWithCompletion:(/*^block*/id)arg2 ;
-(BOOL)clearAllRegistrationDigestsWithError:(id*)arg1 ;
-(id)diagnosticReport;
-(void)iCloudServerOfferForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

