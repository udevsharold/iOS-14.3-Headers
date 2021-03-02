/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNUnfairLock, NSMutableDictionary, NSOperationQueue, CNFuture;

@interface CNDeviceFirstUnlock : NSObject {

	CNUnfairLock* _handlersLock;
	NSMutableDictionary* _unlockHandlers;
	NSOperationQueue* _workQueue;
	CNFuture* _firstUnlockFuture;

}

@property (nonatomic,retain) CNUnfairLock * handlersLock;                       //@synthesize handlersLock=_handlersLock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * unlockHandlers;              //@synthesize unlockHandlers=_unlockHandlers - In the implementation block
@property (nonatomic,retain) NSOperationQueue * workQueue;                      //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) CNFuture * firstUnlockFuture;                      //@synthesize firstUnlockFuture=_firstUnlockFuture - In the implementation block
@property (nonatomic,readonly) BOOL isUnlockedSinceBoot; 
+(id)sharedInstance;
-(void)setWorkQueue:(NSOperationQueue *)arg1 ;
-(CNUnfairLock *)handlersLock;
-(NSOperationQueue *)workQueue;
-(id)init;
-(BOOL)isUnlockedSinceBoot;
-(void)addUnlockHandlerWithIdentifier:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)waitForAllOperationsToFinish;
-(void)dealloc;
-(void)setFirstUnlockFuture:(CNFuture *)arg1 ;
-(void)setHandlersLock:(CNUnfairLock *)arg1 ;
-(CNFuture *)firstUnlockFuture;
-(NSMutableDictionary *)unlockHandlers;
-(void)removeUnlockHandlerWithIdentifier:(id)arg1 ;
-(void)setUnlockHandlers:(NSMutableDictionary *)arg1 ;
-(void)withHandlersLock_cancelExistingOperationWithIdentifier:(id)arg1 ;
-(long long)countOfUnlockHandlers;
-(void)withHandlersLock_addHandlerWithIdentifier:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)withHandlersLock_registerForDeviceFirstUnlock;
@end
