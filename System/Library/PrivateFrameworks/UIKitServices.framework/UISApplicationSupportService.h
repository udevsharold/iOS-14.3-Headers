/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitServices/UIKitServices-Structs.h>
#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <UIKit/UISApplicationSupportXPCServerInterface.h>

@protocol UISApplicationSupportServiceDelegate;
@class BSServiceConnectionListener, FBSSerialQueue, UISApplicationInitializationContext, NSMutableArray, NSString;

@interface UISApplicationSupportService : NSObject <BSServiceConnectionListenerDelegate, UISApplicationSupportXPCServerInterface> {

	os_unfair_lock_s _lock;
	BSServiceConnectionListener* _listener;
	FBSSerialQueue* _targetQueue;
	id<UISApplicationSupportServiceDelegate> _lock_delegate;
	UISApplicationInitializationContext* _lock_defaultContext;
	NSMutableArray* _lock_launchPendedRequests;
	BOOL _lock_started;
	BOOL _lock_finishedLaunching;
	struct {
		unsigned defaultContext : 1;
		unsigned overrideInitialize : 1;
		unsigned initializeClientSync : 1;
		unsigned initializeClientSyncWithParameters : 1;
		unsigned initializeClientAsync : 1;
		unsigned initializeClientLegacy : 1;
		unsigned requestPasscodeUnlockUI : 1;
		unsigned destroyScenes : 1;
	}  _lock_delegateFlags;

}

@property (readonly) BOOL hasFinishedLaunching; 
@property (copy) UISApplicationInitializationContext * defaultContext;              //@synthesize lock_defaultContext=_lock_defaultContext - In the implementation block
@property (retain) id<UISApplicationSupportServiceDelegate> delegate;               //@synthesize lock_delegate=_lock_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)initializeClientWithParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithCalloutQueue:(id)arg1 ;
-(id)init;
-(id)_delegate;
-(void)dealloc;
-(void)setDefaultContext:(UISApplicationInitializationContext *)arg1 ;
-(void)_pendRequestUntilLaunch:(/*^block*/id)arg1 ;
-(void)destroyScenesPersistentIdentifiers:(id)arg1 animationType:(id)arg2 destroySessions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(UISApplicationInitializationContext *)defaultContext;
-(BOOL)hasFinishedLaunching;
-(void)start;
-(void)setDelegate:(id<UISApplicationSupportServiceDelegate>)arg1 ;
-(oneway void)requestPasscodeUnlockUIWithCompletion:(/*^block*/id)arg1 ;
-(id)_initWithDelegate:(id)arg1 targetQueue:(id)arg2 ;
-(id<UISApplicationSupportServiceDelegate>)delegate;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(void)_setDelegate:(id)arg1 ;
@end
