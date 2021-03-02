/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue, FBSDisplayObserving;
@class NSObject, CADisplay, FBSDisplaySource, NSHashTable, NSMapTable, NSEnumerator, FBSDisplayIdentity, FBSDisplayConfiguration, NSSet, NSString;

@interface FBSDisplayMonitor : NSObject <BSInvalidatable> {

	NSObject*<OS_dispatch_queue> _callOutQueue;
	CADisplay* _mainDisplay;
	FBSDisplaySource* _mainDisplaySource;
	os_unfair_lock_s _lock;
	id<FBSDisplayObserving> _lock_bookendObserver;
	NSHashTable* _lock_observers;
	NSMapTable* _lock_sourcesByDisplay;
	BOOL _lock_allowsUnknownDisplays;
	BOOL _lock_canPostToBookendObserver;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callOutQueue;                     //@synthesize callOutQueue=_callOutQueue - In the implementation block
@property (nonatomic,readonly) BOOL canPostToBookendObserver; 
@property (nonatomic,__weak,readonly) id<FBSDisplayObserving> bookendObserver; 
@property (nonatomic,copy,readonly) NSEnumerator * observersEnumerator; 
@property (nonatomic,copy,readonly) FBSDisplayIdentity * mainIdentity; 
@property (nonatomic,copy,readonly) FBSDisplayConfiguration * mainConfiguration; 
@property (nonatomic,copy,readonly) NSSet * connectedIdentities; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBSDisplayConfiguration *)mainConfiguration;
-(NSObject*<OS_dispatch_queue>)callOutQueue;
-(id)_initWithBookendObserver:(id)arg1 ;
-(id)init;
-(id)configurationForIdentity:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_lock_enumerateConnectedWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(NSEnumerator *)observersEnumerator;
-(void)_postInitialBookendObserverConnections;
-(void)addObserver:(id)arg1 ;
-(BOOL)allowsUnknownDisplays;
-(BOOL)canPostToBookendObserver;
-(void)setAllowsUnknownDisplays:(BOOL)arg1 ;
-(void)_lock_enumerateSourcesWithBlock:(/*^block*/id)arg1 ;
-(NSString *)description;
-(id)initWithInitializationCompletion:(/*^block*/id)arg1 ;
-(id<FBSDisplayObserving>)bookendObserver;
-(NSSet *)connectedIdentities;
-(id)_sortedSources;
-(FBSDisplayIdentity *)mainIdentity;
-(NSString *)debugDescription;
-(void)invalidate;
@end
