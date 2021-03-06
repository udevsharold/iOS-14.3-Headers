/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTCameraManager.h>

@class RTDarwinNotificationHelper;

@interface RTCameraManager_Embedded : RTCameraManager {

	RTDarwinNotificationHelper* _notificationHelper;

}

@property (nonatomic,readonly) RTDarwinNotificationHelper * notificationHelper;              //@synthesize notificationHelper=_notificationHelper - In the implementation block
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)_shutdown;
-(id)init;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)dealloc;
-(void)handleCameraPowerNotification:(id)arg1 ;
-(void)_handleCameraPowerNotification:(id)arg1 ;
-(RTDarwinNotificationHelper *)notificationHelper;
@end

