/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSHashTable, SBWakeDestination;

@interface SBSecureAppManager : NSObject {

	NSMutableDictionary* _secureAppActions;
	NSMutableArray* _remoteAlertActions;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSMutableDictionary * secureAppActions;              //@synthesize secureAppActions=_secureAppActions - In the implementation block
@property (nonatomic,retain) NSMutableArray * remoteAlertActions;                 //@synthesize remoteAlertActions=_remoteAlertActions - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                             //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) BOOL hasSecureApp; 
@property (nonatomic,readonly) BOOL hasWakeDestinaton; 
@property (nonatomic,readonly) SBWakeDestination * wakeDestinaton; 
+(id)sharedInstance;
-(id)_applicationSceneEntityForAction:(id)arg1 ;
-(id)init;
-(id)newApplicationSceneEntityForCurrentSecureApp;
-(void)removeObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(void)addObserver:(id)arg1 ;
-(BOOL)hasSecureApp;
-(BOOL)hasWakeDestinaton;
-(void)_enumerateSecureAppActionsOfType:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_addSecureAppAction:(id)arg1 ;
-(void)setSecureAppActions:(NSMutableDictionary *)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(SBWakeDestination *)wakeDestinaton;
-(NSMutableDictionary *)secureAppActions;
-(id)_applicationForAction:(id)arg1 ;
-(void)setRemoteAlertActions:(NSMutableArray *)arg1 ;
-(BOOL)hasSecureAppOfType:(unsigned long long)arg1 ;
-(id)secureAppAction;
-(void)_enumerateSecureAppActionsByPriorityUsingBlock:(/*^block*/id)arg1 ;
-(void)_addRemoteAlertLockScreenContentAction:(id)arg1 ;
-(NSMutableArray *)remoteAlertActions;
-(void)addLockScreenContentAction:(id)arg1 ;
@end
