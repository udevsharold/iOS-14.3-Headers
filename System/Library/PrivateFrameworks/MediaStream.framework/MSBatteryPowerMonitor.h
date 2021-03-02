/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaStream/MediaStream-Structs.h>
@interface MSBatteryPowerMonitor : NSObject {

	CFRunLoopSourceRef _batteryRunLoopSource;
	IONotificationPortRef _batteryIONotifyPort;
	unsigned _batteryNotificationRef;
	BOOL _isExteralPowerConnected;
	double _currentLevel;

}

@property (assign,nonatomic) double currentLevel;                                                          //@synthesize currentLevel=_currentLevel - In the implementation block
@property (assign,setter=setExternalPowerConnected:,nonatomic) BOOL isExternalPowerConnected;              //@synthesize isExteralPowerConnected=_isExteralPowerConnected - In the implementation block
+(id)defaultMonitor;
-(BOOL)isExternalPowerConnected;
-(id)init;
-(void)dealloc;
-(void)updateBatteryLevelWithBatteryEntry:(unsigned)arg1 ;
-(double)batteryPercentRemaining;
-(BOOL)_updateBatteryConnectedStateWithBatteryEntry:(unsigned)arg1 ;
-(double)currentLevel;
-(void)setCurrentLevel:(double)arg1 ;
-(void)updateBatteryConnectedStateWithBatteryEntry:(unsigned)arg1 ;
-(void)setExternalPowerConnected:(BOOL)arg1 ;
@end
