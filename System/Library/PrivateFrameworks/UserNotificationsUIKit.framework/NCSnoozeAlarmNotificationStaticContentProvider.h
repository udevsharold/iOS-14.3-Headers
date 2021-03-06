/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/NCNotificationRequestContentProvider.h>

@class NCNotificationViewController, NSTimer;

@interface NCSnoozeAlarmNotificationStaticContentProvider : NCNotificationRequestContentProvider {

	NCNotificationViewController* _viewController;
	double _fireTime;
	NSTimer* _tickTimer;

}

@property (assign,nonatomic) double fireTime;                                            //@synthesize fireTime=_fireTime - In the implementation block
@property (nonatomic,retain) NSTimer * tickTimer;                                        //@synthesize tickTimer=_tickTimer - In the implementation block
@property (nonatomic,retain) NCNotificationViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)setViewController:(NCNotificationViewController *)arg1 ;
-(double)fireTime;
-(void)dealloc;
-(id)secondaryText;
-(void)invalidateTimer;
-(id)title;
-(void)setFireTime:(double)arg1 ;
-(NCNotificationViewController *)viewController;
-(id)_formatDuration:(double)arg1 ;
-(void)_tickTimerFired:(id)arg1 ;
-(id)initWithNotificationRequest:(id)arg1 viewController:(id)arg2 ;
-(NSTimer *)tickTimer;
-(void)setTickTimer:(NSTimer *)arg1 ;
@end

