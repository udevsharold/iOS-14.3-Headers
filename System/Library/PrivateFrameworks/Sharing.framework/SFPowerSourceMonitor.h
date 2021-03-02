/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Sharing/Sharing-Structs.h>
@class CUCoalescer, NSMutableDictionary, NSObject;

@interface SFPowerSourceMonitor : NSObject {

	LogCategory* _ucat;
	BOOL _activateCalled;
	long long _previousSourcesCount;
	unsigned short _powerSourcesUpdateIndex;
	CUCoalescer* _updateCoalescer;
	NSMutableDictionary* _powerSources;
	int _psNotifyTokenAccessoryAttach;
	int _psNotifyTokenAccessoryPowerSource;
	int _psNotifyTokenAccessoryTimeRemaining;
	int _psNotifyTokenAnyPowerSource;
	BOOL _skipCoalescing;
	unsigned _changeFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	/*^block*/id _powerSourcesFoundHandler;
	/*^block*/id _powerSourcesLostHandler;
	/*^block*/id _powerSourcesChangedHandler;

}

@property (assign,nonatomic) unsigned changeFlags;                                    //@synthesize changeFlags=_changeFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) BOOL skipCoalescing;                                     //@synthesize skipCoalescing=_skipCoalescing - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id powerSourcesFoundHandler;                               //@synthesize powerSourcesFoundHandler=_powerSourcesFoundHandler - In the implementation block
@property (nonatomic,copy) id powerSourcesLostHandler;                                //@synthesize powerSourcesLostHandler=_powerSourcesLostHandler - In the implementation block
@property (nonatomic,copy) id powerSourcesChangedHandler;                             //@synthesize powerSourcesChangedHandler=_powerSourcesChangedHandler - In the implementation block
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_triggerUpdatePowerSources;
-(void)_updatePowerSource:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_updatePowerSourcesWithInfo:(void*)arg1 sources:(CFArrayRef)arg2 sourcesCount:(long long)arg3 ;
-(id)init;
-(void)_handlePowerSourcesFound:(id)arg1 ;
-(void)setPowerSourcesChangedHandler:(id)arg1 ;
-(void)_cleanup;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)powerSourcesChangedHandler;
-(void)dealloc;
-(void)_update;
-(void)_foundPowerSource:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3 ;
-(void)_handlePowerSourcesLost:(id)arg1 ;
-(void)setChangeFlags:(unsigned)arg1 ;
-(BOOL)skipCoalescing;
-(void)setPowerSourcesFoundHandler:(id)arg1 ;
-(unsigned)changeFlags;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_handlePowerSourcesChanged:(id)arg1 changes:(unsigned)arg2 ;
-(void)setPowerSourcesLostHandler:(id)arg1 ;
-(id)powerSourcesLostHandler;
-(void)setSkipCoalescing:(BOOL)arg1 ;
-(void)_removePowerSources:(id)arg1 ;
-(void)_updatePowerSources;
-(BOOL)powerSourcesListWithOutInfo:(const void*)arg1 outSources:(const _CFArray*)arg2 outSourcesCount:(long long*)arg3 ;
-(void)invalidate;
-(id)invalidationHandler;
-(id)powerSourcesFoundHandler;
@end
