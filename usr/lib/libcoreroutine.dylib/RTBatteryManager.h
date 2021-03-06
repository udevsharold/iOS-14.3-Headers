/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTService.h>

@class RTDarwinNotificationHelper;

@interface RTBatteryManager : RTService {

	BOOL _monitorBatteryStatusChanges;
	long long _externalConnectionState;
	RTDarwinNotificationHelper* _notificationHelper;

}

@property (assign,nonatomic) BOOL monitorBatteryStatusChanges;                               //@synthesize monitorBatteryStatusChanges=_monitorBatteryStatusChanges - In the implementation block
@property (assign,nonatomic) long long externalConnectionState;                              //@synthesize externalConnectionState=_externalConnectionState - In the implementation block
@property (nonatomic,readonly) RTDarwinNotificationHelper * notificationHelper;              //@synthesize notificationHelper=_notificationHelper - In the implementation block
+(long long)currentExternalConnectionState;
+(BOOL)_ioDrawingUnlimitedPower;
+(id)externalConnectionStateToString:(long long)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)_unregisterForNotifications;
-(void)_shutdown;
-(id)init;
-(id)initWithQueue:(id)arg1 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)dealloc;
-(RTDarwinNotificationHelper *)notificationHelper;
-(id)initWithQueue:(id)arg1 notificationHelper:(id)arg2 ;
-(void)setMonitorBatteryStatusChanges:(BOOL)arg1 ;
-(void)startMonitoringBatteryStatusChanges;
-(void)stopMonitoringBatteryStatusChanges;
-(void)updateBatteryStatus:(long long)arg1 ;
-(void)fetchCurrentChargerConnectionState:(/*^block*/id)arg1 ;
-(BOOL)monitorBatteryStatusChanges;
-(long long)externalConnectionState;
-(void)setExternalConnectionState:(long long)arg1 ;
@end

