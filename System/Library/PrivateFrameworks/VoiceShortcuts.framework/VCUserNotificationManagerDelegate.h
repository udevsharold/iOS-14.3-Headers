/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCUserNotificationManagerDelegate <NSObject>
@required
-(void)notificationManager:(id)arg1 receivedConfirmationToRunTriggerWithIdentifier:(id)arg2 pendingTriggerEventIDs:(id)arg3;
-(void)notificationManager:(id)arg1 didDismissTriggerWithIdentifier:(id)arg2 pendingTriggerEventIDs:(id)arg3;
-(void)notificationManager:(id)arg1 didFailToPostNotificationPromptWithTriggerIdentifier:(id)arg2 pendingTriggerEventIDs:(id)arg3;

@end
