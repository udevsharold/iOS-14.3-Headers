/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSMutableArray, NSString;

@interface _UIViewServiceSessionManager : NSObject <NSXPCListenerDelegate> {

	os_unfair_lock_s _lock;
	NSXPCListener* _listener;
	NSMutableArray* _sessions;
	int _connectionNotificationToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)startViewServiceSessionManagerAsPlugin:(BOOL)arg1 ;
+(id)__serviceSessionManager;
+(BOOL)hasActiveSessions;
-(void)_startListenerWithName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)_hasActiveSessions;
-(void)_registerSessionForDefaultDeputies:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_startOrStopSystemsForBackgroundRunning;
-(id)_initAsPlugIn:(BOOL)arg1 ;
-(void)_startListener;
-(void)_configureSessionForConnection:(id)arg1 ;
@end

