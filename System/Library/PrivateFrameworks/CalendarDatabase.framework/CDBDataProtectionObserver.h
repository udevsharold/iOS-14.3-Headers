/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CalDeviceLockObserver;

@interface CDBDataProtectionObserver : NSObject {

	/*^block*/id _stateChangedCallback;
	CalDeviceLockObserver* _deviceLockObserver;

}

@property (nonatomic,retain) CalDeviceLockObserver * deviceLockObserver;              //@synthesize deviceLockObserver=_deviceLockObserver - In the implementation block
@property (nonatomic,copy) id stateChangedCallback;                                   //@synthesize stateChangedCallback=_stateChangedCallback - In the implementation block
@property (nonatomic,readonly) BOOL dataIsAccessible; 
+(id)stateChangedNotificationName;
-(id)init;
-(void)_deviceLockStateChanged;
-(BOOL)dataIsAccessible;
-(void)setStateChangedCallback:(id)arg1 ;
-(id)stateChangedCallback;
-(CalDeviceLockObserver *)deviceLockObserver;
-(void)setDeviceLockObserver:(CalDeviceLockObserver *)arg1 ;
@end
