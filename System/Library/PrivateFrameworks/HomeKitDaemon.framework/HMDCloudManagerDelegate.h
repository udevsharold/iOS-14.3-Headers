/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDCloudManagerDelegate
@required
-(void)fetchHomeFromCloudZone:(id)arg1 cloudConflict:(BOOL)arg2 withDelay:(double)arg3;
-(void)fetchHomeManagerCloudConflict:(BOOL)arg1 withDelay:(double)arg2;
-(void)uploadHomeConfigToCloud:(BOOL)arg1 withDelay:(double)arg2;
-(void)fetchHomeDataFromCloudWithCloudConflict:(BOOL)arg1 withDelay:(double)arg2;
-(void)archiveServerToken:(id)arg1;
-(void)eraseLocalHomeData;
-(void)reloadHomeDataFromLocalStore:(BOOL)arg1;
-(void)fetchAllZones;
-(void)verifyHomeDataFromCloud:(/*^block*/id)arg1;
-(void)schedulePostFetch;
-(void)notifyZonesCloudZoneReady:(id)arg1;
-(void)kickAccountAvailabilityCheck;

@end
