/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NFStateMachineState, NSMutableDictionary, NFMutexLock;

@interface NFStateMachine : NSObject {

	unsigned long long _status;
	NFStateMachineState* _state;
	id _owner;
	NSMutableDictionary* _states;
	NSMutableDictionary* _events;
	NFMutexLock* _lock;
	long long _statusToken;

}

@property (assign,nonatomic,__weak) id owner;                           //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * states;              //@synthesize states=_states - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * events;              //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NFStateMachineState * state;               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long status;                 //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NFMutexLock * lock;                        //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) long long statusToken;                     //@synthesize statusToken=_statusToken - In the implementation block
-(NSMutableDictionary *)events;
-(void)activate;
-(void)deactivateIfNeeded;
-(NFStateMachineState *)state;
-(void)setOwner:(id)arg1 ;
-(unsigned long long)status;
-(void)deactivate;
-(id)fireEventWithName:(id)arg1 withContext:(id)arg2 ;
-(void)addState:(id)arg1 ;
-(id)description;
-(id)owner;
-(void)addEvent:(id)arg1 ;
-(void)setLock:(NFMutexLock *)arg1 ;
-(id)initWithState:(id)arg1 withOwner:(id)arg2 ;
-(void)setStatusToken:(long long)arg1 ;
-(void)setStates:(NSMutableDictionary *)arg1 ;
-(long long)statusToken;
-(void)setEvents:(NSMutableDictionary *)arg1 ;
-(id)debugDescription;
-(NFMutexLock *)lock;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)activateIfNeeded;
-(void)setState:(NFStateMachineState *)arg1 ;
-(NSMutableDictionary *)states;
@end
