/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, _MPActiveUserChangeMonitorDelegate;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSSet, NSMutableSet, NSObject;

@interface _MPActiveUserChangeMonitor : NSObject {

	os_unfair_lock_s _stateLock;
	NSSet* _expectedNotifications;
	NSMutableSet* _receivedNotifications;
	NSObject*<OS_dispatch_source> _notificationTimer;
	id<_MPActiveUserChangeMonitorDelegate> _delegate;

}

@property (nonatomic,readonly) NSSet * expectedNotifications;                                     //@synthesize expectedNotifications=_expectedNotifications - In the implementation block
@property (nonatomic,retain) NSMutableSet * receivedNotifications;                                //@synthesize receivedNotifications=_receivedNotifications - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> notificationTimer;                     //@synthesize notificationTimer=_notificationTimer - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s stateLock;                                        //@synthesize stateLock=_stateLock - In the implementation block
@property (assign,nonatomic,__weak) id<_MPActiveUserChangeMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(os_unfair_lock_s)stateLock;
-(void)ingestNotificationName:(id)arg1 ;
-(void)_startNotificationTimerWithEventHandler:(/*^block*/id)arg1 ;
-(void)_cancelNotificationTimerWithReason:(id)arg1 ;
-(NSSet *)expectedNotifications;
-(NSMutableSet *)receivedNotifications;
-(NSObject*<OS_dispatch_source>)notificationTimer;
-(void)setReceivedNotifications:(NSMutableSet *)arg1 ;
-(void)setNotificationTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setDelegate:(id<_MPActiveUserChangeMonitorDelegate>)arg1 ;
-(id<_MPActiveUserChangeMonitorDelegate>)delegate;
@end
