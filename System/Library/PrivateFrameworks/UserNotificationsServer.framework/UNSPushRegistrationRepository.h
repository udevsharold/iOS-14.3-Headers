/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class UNSKeyedDictionaryRepository, NSObject;

@interface UNSPushRegistrationRepository : NSObject {

	UNSKeyedDictionaryRepository* _repository;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)performMigration;
-(void)removeRegistrationForBundleIdentifier:(id)arg1 ;
-(void)_queue_removeRegistrationForBundleIdentifier:(id)arg1 ;
-(void)_queue_performMigrationForBundleIdentifier:(id)arg1 ;
-(id)registrationForBundleIdentifier:(id)arg1 ;
-(id)initWithDirectory:(id)arg1 librarian:(id)arg2 ;
-(void)setRegistration:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)allBundleIdentifiers;
-(void)notificationSourcesDidUninstall:(id)arg1 ;
-(void)_queue_setRegistration:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_performMigration;
-(id)_queue_registrationForBundleIdentifier:(id)arg1 ;
@end

