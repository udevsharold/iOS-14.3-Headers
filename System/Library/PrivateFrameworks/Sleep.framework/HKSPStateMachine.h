/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKSPStateMachineDelegate.h>
#import <libobjc.A.dylib/HKSPStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HKSPStateMachineEventHandler.h>

@protocol HKSPStateMachineDelegate, HKSPStateMachineInfoProvider;
@class HKSPStateMachineState, NSString;

@interface HKSPStateMachine : NSObject <HKSPStateMachineDelegate, HKSPStateMachineInfoProvider, HKSPStateMachineEventHandler> {

	BOOL _initialized;
	HKSPStateMachineState* _currentState;
	id<HKSPStateMachineDelegate> _delegate;
	id<HKSPStateMachineInfoProvider> _infoProvider;

}

@property (nonatomic,readonly) BOOL initialized;                                                  //@synthesize initialized=_initialized - In the implementation block
@property (nonatomic,__weak,readonly) id<HKSPStateMachineDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) id<HKSPStateMachineInfoProvider> infoProvider;              //@synthesize infoProvider=_infoProvider - In the implementation block
@property (nonatomic,readonly) HKSPStateMachineState * currentState;                              //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateState;
-(HKSPStateMachineState *)currentState;
-(NSString *)description;
-(id)initWithDelegate:(id)arg1 infoProvider:(id)arg2 ;
-(BOOL)enterState:(id)arg1 ;
-(id)stateMachineName;
-(BOOL)enterState:(id)arg1 context:(id)arg2 ;
-(void)notifyDelegateWithBlock:(/*^block*/id)arg1 ;
-(BOOL)initialized;
-(id<HKSPStateMachineInfoProvider>)infoProvider;
-(void)setInitialState:(id)arg1 ;
-(id)stateMachineLog;
-(id<HKSPStateMachineDelegate>)delegate;
@end

