/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDCloudSyncManagerObserver
@required
-(void)cloudSyncManager:(id)arg1 didUpdateSyncEnabled:(BOOL)arg2;
-(void)cloudSyncManager:(id)arg1 didUpdateLastPushDate:(id)arg2;
-(void)cloudSyncManager:(id)arg1 didUpdateLastPullDate:(id)arg2;
-(void)cloudSyncManager:(id)arg1 didUpdateLastPulledUpdateDate:(id)arg2;
-(void)cloudSyncManager:(id)arg1 didUpdateErrorRequiringUserAction:(id)arg2;
-(void)cloudSyncManager:(id)arg1 didUpdateRestoreCompletionDate:(id)arg2;
-(void)cloudSyncManager:(id)arg1 didUpdateDataUploadRequestStatus:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4;

@end
