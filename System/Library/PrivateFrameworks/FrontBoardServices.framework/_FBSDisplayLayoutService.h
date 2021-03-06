/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/FBSDisplayLayoutMonitorClientInterface.h>

@protocol OS_dispatch_queue;
@class BSServiceConnectionEndpoint, NSObject, BSServiceConnection, NSMapTable, FBSDisplayLayout, NSString;

@interface _FBSDisplayLayoutService : NSObject <BSInvalidatable, FBSDisplayLayoutMonitorClientInterface> {

	BSServiceConnectionEndpoint* _endpoint;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	BSServiceConnection* _connection;
	os_unfair_lock_s _lock;
	NSMapTable* _lock_keyedObservers;
	FBSDisplayLayout* _lock_layout;
	unsigned long long _lock_layoutGeneration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)endpoint;
-(void)removeObserverForKey:(id)arg1 ;
-(void)dealloc;
-(oneway void)updateLayout:(id)arg1 withTransition:(id)arg2 ;
-(id)_initWithEndpoint:(id)arg1 qos:(char)arg2 ;
-(id)currentLayout;
-(void)addObserver:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(void)invalidate;
@end

