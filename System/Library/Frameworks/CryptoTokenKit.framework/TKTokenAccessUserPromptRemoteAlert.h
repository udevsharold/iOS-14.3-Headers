/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>
#import <libobjc.A.dylib/TKUIServerProtocol.h>
#import <libobjc.A.dylib/TKTokenAccessUserPrompt.h>

@protocol OS_dispatch_semaphore;
@class TKTokenAccessRequest, SBSRemoteAlertHandle, NSObject, NSString;

@interface TKTokenAccessUserPromptRemoteAlert : NSObject <NSXPCListenerDelegate, SBSRemoteAlertHandleObserver, TKUIServerProtocol, TKTokenAccessUserPrompt> {

	TKTokenAccessRequest* _accessRequest;
	SBSRemoteAlertHandle* _remoteAlertHandle;
	NSObject*<OS_dispatch_semaphore> _remoteAlertSemaphore;
	long long _grantedAccess;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)registerTokenAccessRequestCorrelationID:(id)arg1 granted:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(long long)preflightStatus;
-(long long)promptUserToEvaluateRequest:(id)arg1 error:(id*)arg2 ;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
@end

