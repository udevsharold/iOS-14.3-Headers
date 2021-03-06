/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMIPersonManagerDataSource <NSObject>
@optional
-(void)removeFaceprintsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addFaceprints:(id)arg1 completion:(/*^block*/id)arg2;

@required
-(void)performCloudPullWithCompletion:(/*^block*/id)arg1;
-(void)fetchPersonsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchAllPersonsWithCompletion:(/*^block*/id)arg1;
-(void)fetchFaceCropsForPersonsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchAllPersonFaceCropsWithCompletion:(/*^block*/id)arg1;
-(void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchAllFaceprintsWithCompletion:(/*^block*/id)arg1;

@end

