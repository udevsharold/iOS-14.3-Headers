/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDEvent.h>

@class HMDCharacteristic, NSUUID, NSNumber;

@interface HMDCharacteristicEventBase : HMDEvent {

	HMDCharacteristic* _characteristic;
	NSUUID* _accessoryUUID;
	NSNumber* _serviceID;
	NSNumber* _characteristicInstanceID;
	id _previousValue;

}

@property (nonatomic,retain) HMDCharacteristic * characteristic;                 //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) NSUUID * accessoryUUID;                           //@synthesize accessoryUUID=_accessoryUUID - In the implementation block
@property (nonatomic,readonly) NSNumber * serviceID;                             //@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,readonly) NSNumber * characteristicInstanceID;              //@synthesize characteristicInstanceID=_characteristicInstanceID - In the implementation block
@property (nonatomic,retain) id previousValue;                                   //@synthesize previousValue=_previousValue - In the implementation block
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)compareValueOfCharacteristic:(id)arg1 againstValue:(id)arg2 operatorType:(id)arg3 ;
+(id)lookForCharacteristicByAccessoryUUID:(id)arg1 serviceID:(id)arg2 characteristicID:(id)arg3 inHome:(id)arg4 checkForSupport:(BOOL)arg5 outError:(id*)arg6 ;
-(void)_registerForMessages;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)serviceID;
-(id)description;
-(NSUUID *)accessoryUUID;
-(HMDCharacteristic *)characteristic;
-(void)setCharacteristic:(HMDCharacteristic *)arg1 ;
-(BOOL)isActive;
-(id)previousValue;
-(void)setPreviousValue:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_activate:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)createPayload;
-(id)initWithModel:(id)arg1 home:(id)arg2 ;
-(BOOL)_evaluateNewValue:(id)arg1 ;
-(NSNumber *)characteristicInstanceID;
-(void)replaceCharacteristic:(id)arg1 ;
-(void)handleCharacteristicsChangedNotification:(id)arg1 ;
-(void)__handleCharacteristicsChangedPayload:(id)arg1 ;
-(void)fixCharacteristicInHome:(id)arg1 ;
@end
