/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNVehicleMonitorDelegate;
@interface MNVehicleMonitor : NSObject {

	id<MNVehicleMonitorDelegate> _delegate;
	int _vehicleConnectedToken;
	int _vehicleDisconnectedToken;
	BOOL _isMonitoring;

}

@property (assign,nonatomic,__weak) id<MNVehicleMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)startMonitoring;
-(void)dealloc;
-(void)stopMonitoring;
-(void)setDelegate:(id<MNVehicleMonitorDelegate>)arg1 ;
-(id<MNVehicleMonitorDelegate>)delegate;
@end
