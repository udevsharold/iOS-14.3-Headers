/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary;

@interface WPDState : NSObject {

	BOOL _restricted;
	BOOL _initialUpdate;
	long long _state;
	NSObject*<OS_dispatch_queue> _cbQueue;
	/*^block*/id _notification;
	NSMutableSet* _cbManagers;
	NSMutableDictionary* _cbStates;

}

@property (assign) long long state;                                   //@synthesize state=_state - In the implementation block
@property (assign) BOOL restricted;                                   //@synthesize restricted=_restricted - In the implementation block
@property (__weak) NSObject*<OS_dispatch_queue> cbQueue;              //@synthesize cbQueue=_cbQueue - In the implementation block
@property (__weak) id notification;                                   //@synthesize notification=_notification - In the implementation block
@property (retain) NSMutableSet * cbManagers;                         //@synthesize cbManagers=_cbManagers - In the implementation block
@property (retain) NSMutableDictionary * cbStates;                    //@synthesize cbStates=_cbStates - In the implementation block
@property (assign) BOOL initialUpdate;                                //@synthesize initialUpdate=_initialUpdate - In the implementation block
+(long long)getWPStateFromCBManagerState:(long long)arg1 ;
-(id)notification;
-(void)setNotification:(id)arg1 ;
-(void)setRestricted:(BOOL)arg1 ;
-(void)setCbQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)dealloc;
-(void)updateWithCompletion:(/*^block*/id)arg1 ;
-(long long)state;
-(void)updateWithManager:(id)arg1 Completion:(/*^block*/id)arg2 ;
-(void)coalesceState:(long long*)arg1 Restricted:(BOOL*)arg2 UpdateCache:(BOOL)arg3 ;
-(void)setCbManagers:(NSMutableSet *)arg1 ;
-(BOOL)initialUpdate;
-(id)description;
-(void)setInitialUpdate:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)cbQueue;
-(NSMutableSet *)cbManagers;
-(BOOL)restricted;
-(void)registerManager:(id)arg1 ;
-(void)setCbStates:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cbStates;
-(void)setState:(long long)arg1 ;
@end
