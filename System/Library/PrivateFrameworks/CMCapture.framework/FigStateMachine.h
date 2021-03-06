/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSString;

@interface FigStateMachine : NSObject {

	id _owner;
	os_unfair_lock_s _lock;
	BOOL _performsAtomicStateTransitions;
	unsigned _currentState;
	FigStateMachineStateConfiguration* _stateConfigurations;
	char _stateCount;
	NSString* _label;

}

@property (assign,nonatomic) BOOL performsAtomicStateTransitions;              //@synthesize performsAtomicStateTransitions=_performsAtomicStateTransitions - In the implementation block
@property (readonly) unsigned currentState; 
@property (readonly) NSString * label; 
@property (readonly) NSString * currentStateLabel; 
+(void)initialize;
-(BOOL)transitionToState:(unsigned)arg1 ;
-(void)markStateAsTerminal:(unsigned)arg1 ;
-(NSString *)currentStateLabel;
-(BOOL)transitionToState:(unsigned)arg1 errorStatus:(int)arg2 ;
-(void)setLabel:(id)arg1 forState:(unsigned)arg2 ;
-(void)setPerformsAtomicStateTransitions:(BOOL)arg1 ;
-(void)whenTransitioningFromState:(unsigned)arg1 toState:(unsigned)arg2 callHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)whenTransitioningToStatesFail:(unsigned)arg1 callHandler:(/*^block*/id)arg2 ;
-(void)whenTransitioningToStateFails:(unsigned)arg1 callHandler:(/*^block*/id)arg2 ;
-(unsigned)currentState;
-(id)labelForState:(unsigned)arg1 ;
-(void)whenTransitioningToStates:(unsigned)arg1 callHandler:(/*^block*/id)arg2 ;
-(BOOL)performsAtomicStateTransitions;
-(BOOL)_transitionToState:(unsigned)arg1 fromStates:(unsigned)arg2 errorStatus:(int)arg3 ;
-(id)description;
-(id)initWithLabel:(id)arg1 stateCount:(char)arg2 initialState:(unsigned)arg3 owner:(id)arg4 ;
-(void)whenTransitioningToState:(unsigned)arg1 callHandler:(/*^block*/id)arg2 ;
-(NSString *)label;
-(BOOL)transitionToState:(unsigned)arg1 fromState:(unsigned)arg2 ;
-(BOOL)transitionToState:(unsigned)arg1 fromStates:(unsigned)arg2 ;
@end

