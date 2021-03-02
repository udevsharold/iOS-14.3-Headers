/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, SBSRemoteAlertHandleClient;
@class NSObject, NSString, NSHashTable;

@interface SBSRemoteAlertHandle : NSObject {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	BOOL _active;
	NSObject*<OS_dispatch_queue> _calloutSerialQueue;
	BOOL _valid;
	id<SBSRemoteAlertHandleClient> _handleClient;
	NSString* _handleID;
	NSHashTable* _observers;

}

@property (nonatomic,copy,readonly) NSString * handleID;                 //@synthesize handleID=_handleID - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(id)lookupHandlesForDefinition:(id)arg1 creatingIfNone:(BOOL)arg2 ;
+(id)lookupHandlesForDefinition:(id)arg1 creatingIfNone:(BOOL)arg2 configurationContext:(id)arg3 ;
+(id)defaultHandleClient;
+(void)setDefaultHandleClient:(id)arg1 ;
+(id)lookupHandlesForDefinition:(id)arg1 ;
+(id)newHandleWithDefinition:(id)arg1 configurationContext:(id)arg2 ;
+(id)lookupHandlesForConfiguration:(id)arg1 creatingIfNone:(BOOL)arg2 ;
+(id)handleWithConfiguration:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSString *)handleID;
-(void)addObserver:(id)arg1 ;
-(BOOL)isValid;
-(void)_didActivate;
-(void)_didDeactivate;
-(void)_invalidateWithError:(id)arg1 shouldInvalidateHandleClient:(BOOL)arg2 ;
-(void)activateWithContext:(id)arg1 ;
-(void)activateWithOptions:(id)arg1 ;
-(id)_initWithHandleID:(id)arg1 handleClient:(id)arg2 ;
-(void)_receivedInvalidationWithError:(id)arg1 ;
-(BOOL)isActive;
-(void)invalidate;
@end
