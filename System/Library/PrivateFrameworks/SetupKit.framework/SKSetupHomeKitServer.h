/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SetupKit.framework/SetupKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupKit/SetupKit-Structs.h>
#import <libobjc.A.dylib/CUActivatable.h>
#import <libobjc.A.dylib/CUAuthenticatableServer.h>
#import <libobjc.A.dylib/CULabelable.h>
#import <libobjc.A.dylib/CUMessaging.h>

@protocol OS_dispatch_queue;
@class NSString, SKStepWiFiSetupServer, NSObject;

@interface SKSetupHomeKitServer : NSObject <CUActivatable, CUAuthenticatableServer, CULabelable, CUMessaging> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	SKStepWiFiSetupServer* _stepWiFiSetup;
	LogCategory* _ucat;
	/*^block*/id _authCompletionHandler;
	/*^block*/id _authHidePasswordHandler;
	/*^block*/id _authShowPasswordHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	NSString* _password;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id authCompletionHandler;                                  //@synthesize authCompletionHandler=_authCompletionHandler - In the implementation block
@property (nonatomic,copy) id authHidePasswordHandler;                                //@synthesize authHidePasswordHandler=_authHidePasswordHandler - In the implementation block
@property (nonatomic,copy) id authShowPasswordHandler;                                //@synthesize authShowPasswordHandler=_authShowPasswordHandler - In the implementation block
@property (nonatomic,copy) NSString * password;                                       //@synthesize password=_password - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
-(void)setAuthCompletionHandler:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)authCompletionHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)password;
-(NSString *)description;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidated;
-(NSString *)label;
-(void)invalidate;
-(id)invalidationHandler;
-(void)registerEventID:(id)arg1 options:(id)arg2 eventHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deregisterEventID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendEventID:(id)arg1 eventMessage:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)registerRequestID:(id)arg1 options:(id)arg2 requestHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deregisterRequestID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendRequestID:(id)arg1 requestMessage:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(id)authHidePasswordHandler;
-(void)setAuthHidePasswordHandler:(id)arg1 ;
-(id)authShowPasswordHandler;
-(void)setAuthShowPasswordHandler:(id)arg1 ;
@end
