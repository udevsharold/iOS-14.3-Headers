/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDHealthDatabase, HDHealthDaemon;
@class HDSourceManager, HDDeviceManager, HDDaemon, HDDataCollectionManager, HDUserCharacteristicsManager;

@interface HDMockProfile : NSObject {

	id<HDHealthDatabase> healthDatabase;
	HDSourceManager* healthSourceManager;
	HDDeviceManager* healthDeviceManager;
	HDDaemon* daemon;
	id<HDHealthDaemon> _healthDaemon;
	HDDataCollectionManager* _dataCollectionManager;
	HDUserCharacteristicsManager* _userCharacteristicsManager;

}

@property (assign,nonatomic,__weak) HDDaemon * daemon; 
@property (assign,nonatomic,__weak) id<HDHealthDaemon> healthDaemon;                                 //@synthesize healthDaemon=_healthDaemon - In the implementation block
@property (nonatomic,retain) id<HDHealthDatabase> healthDatabase; 
@property (nonatomic,retain) HDSourceManager * healthSourceManager; 
@property (nonatomic,retain) HDDeviceManager * healthDeviceManager; 
@property (nonatomic,retain) HDDataCollectionManager * dataCollectionManager;                        //@synthesize dataCollectionManager=_dataCollectionManager - In the implementation block
@property (nonatomic,retain) HDUserCharacteristicsManager * userCharacteristicsManager;              //@synthesize userCharacteristicsManager=_userCharacteristicsManager - In the implementation block
-(void)setDaemon:(HDDaemon *)arg1 ;
-(HDDaemon *)daemon;
-(HDDataCollectionManager *)dataCollectionManager;
-(id)profileIdentifier;
-(void)setDataCollectionManager:(HDDataCollectionManager *)arg1 ;
-(id)nanoSyncManager;
-(long long)profileType;
-(id<HDHealthDatabase>)healthDatabase;
-(void)setHealthDatabase:(id<HDHealthDatabase>)arg1 ;
-(HDSourceManager *)healthSourceManager;
-(void)setHealthSourceManager:(HDSourceManager *)arg1 ;
-(HDDeviceManager *)healthDeviceManager;
-(void)setHealthDeviceManager:(HDDeviceManager *)arg1 ;
-(id<HDHealthDaemon>)healthDaemon;
-(void)setHealthDaemon:(id<HDHealthDaemon>)arg1 ;
-(HDUserCharacteristicsManager *)userCharacteristicsManager;
-(void)setUserCharacteristicsManager:(HDUserCharacteristicsManager *)arg1 ;
@end
