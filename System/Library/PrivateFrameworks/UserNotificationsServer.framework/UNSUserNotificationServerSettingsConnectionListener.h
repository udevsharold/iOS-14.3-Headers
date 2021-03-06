/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/UNUserNotificationSettingsServerProtocol.h>
#import <libobjc.A.dylib/UNSNotificationSettingsServiceObserver.h>

@class NSMutableArray, NSXPCListener, UNSNotificationSettingsService, NSString;

@interface UNSUserNotificationServerSettingsConnectionListener : NSObject <NSXPCListenerDelegate, UNUserNotificationSettingsServerProtocol, UNSNotificationSettingsServiceObserver> {

	NSMutableArray* _connections;
	NSXPCListener* _listener;
	UNSNotificationSettingsService* _settingsService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getAllNotificationSourcesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_currentConnection;
-(void)getNotificationSystemSettingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)getNotificationSources:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)replaceNotificationSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 ;
-(void)_handleClientConnectionInterrupted:(id)arg1 ;
-(void)replaceNotificationTopicSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 topicIdentifier:(id)arg3 ;
-(void)settingsService:(id)arg1 didUpdateNotificationSystemSettings:(id)arg2 ;
-(void)settingsService:(id)arg1 didUpdateNotificationSourcesForBundleIdentifiers:(id)arg2 ;
-(void)setNotificationSystemSettings:(id)arg1 ;
-(void)getNotificationSource:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_handleClientConnectionInvalidated:(id)arg1 ;
-(id)initWithNotificationSettingsService:(id)arg1 ;
-(void)resume;
@end

