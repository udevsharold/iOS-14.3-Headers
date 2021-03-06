/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNChangesNotifierProxy;

@interface CNChangesNotifier : NSObject {

	CNChangesNotifierProxy* _notifierProxy;

}

@property (nonatomic,retain) CNChangesNotifierProxy * notifierProxy;              //@synthesize notifierProxy=_notifierProxy - In the implementation block
+(void)flushSharedNotifier;
+(id)sharedNotifierWithNotificationWrapper:(id)arg1 schedulerProvider:(id)arg2 loggerProvider:(id)arg3 ;
+(id)sharedNotifier;
-(BOOL)forwardsSelfGeneratedDistributedSaveNotifications;
-(void)dealloc;
-(void)setNotifierProxy:(CNChangesNotifierProxy *)arg1 ;
-(void)didChangeMeContactSuccessfully:(BOOL)arg1 fromContactStore:(id)arg2 requestIdentifier:(id)arg3 ;
-(void)didSaveChangesSuccessfully:(BOOL)arg1 fromContactStore:(id)arg2 requestIdentifier:(id)arg3 ;
-(id)initWithNotificationWrapper:(id)arg1 schedulerProvider:(id)arg2 loggerProvider:(id)arg3 ;
-(void)setExternalNotificationCoalescingDelay:(double)arg1 ;
-(void)willSaveChanges;
-(void)setForwardsSelfGeneratedDistributedSaveNotifications:(BOOL)arg1 ;
-(void)waitForCurrentTasksToFinish;
-(CNChangesNotifierProxy *)notifierProxy;
@end

