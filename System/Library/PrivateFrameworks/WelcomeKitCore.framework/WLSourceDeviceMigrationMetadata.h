/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface WLSourceDeviceMigrationMetadata : NSObject {

	unsigned long long _estimatedTotalDataSizeInMegabytes;
	unsigned long long _elapsedTimeInSeconds;
	NSDate* _communicationDate;
	unsigned long long _state;
	unsigned long long _attemptCount;
	unsigned long long _crashCount;
	NSString* _deviceOSVersion;
	NSString* _deviceType;
	NSString* _deviceModel;

}

@property (assign,nonatomic) unsigned long long estimatedTotalDataSizeInMegabytes;              //@synthesize estimatedTotalDataSizeInMegabytes=_estimatedTotalDataSizeInMegabytes - In the implementation block
@property (assign,nonatomic) unsigned long long elapsedTimeInSeconds;                           //@synthesize elapsedTimeInSeconds=_elapsedTimeInSeconds - In the implementation block
@property (nonatomic,retain) NSDate * communicationDate;                                        //@synthesize communicationDate=_communicationDate - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long attemptCount;                                   //@synthesize attemptCount=_attemptCount - In the implementation block
@property (assign,nonatomic) unsigned long long crashCount;                                     //@synthesize crashCount=_crashCount - In the implementation block
@property (nonatomic,retain) NSString * deviceOSVersion;                                        //@synthesize deviceOSVersion=_deviceOSVersion - In the implementation block
@property (nonatomic,retain) NSString * deviceType;                                             //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,retain) NSString * deviceModel;                                            //@synthesize deviceModel=_deviceModel - In the implementation block
-(unsigned long long)attemptCount;
-(NSString *)deviceModel;
-(NSString *)deviceType;
-(void)setAttemptCount:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(void)setDeviceModel:(NSString *)arg1 ;
-(void)setDeviceType:(NSString *)arg1 ;
-(void)setDeviceOSVersion:(NSString *)arg1 ;
-(NSString *)deviceOSVersion;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)crashCount;
-(unsigned long long)estimatedTotalDataSizeInMegabytes;
-(unsigned long long)elapsedTimeInSeconds;
-(void)setCommunicationDate:(NSDate *)arg1 ;
-(void)setCrashCount:(unsigned long long)arg1 ;
-(void)setEstimatedTotalDataSizeInMegabytes:(unsigned long long)arg1 ;
-(NSDate *)communicationDate;
-(void)setElapsedTimeInSeconds:(unsigned long long)arg1 ;
@end
