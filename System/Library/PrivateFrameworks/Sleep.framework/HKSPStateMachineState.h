/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sleep/Sleep-Structs.h>
#import <libobjc.A.dylib/HKSPStateMachineEventHandler.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKSPStateMachine, NSString;

@interface HKSPStateMachineState : NSObject <HKSPStateMachineEventHandler, NSCopying> {

	HKSPStateMachine* _stateMachine;

}

@property (assign,nonatomic,__weak) HKSPStateMachine * stateMachine;              //@synthesize stateMachine=_stateMachine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKSPStateMachine *)stateMachine;
-(id)stateName;
-(void)updateState;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(id)succinctDescriptionBuilder;
-(void)willExitWithNextState:(id)arg1 context:(id)arg2 ;
-(void)didExitWithNextState:(id)arg1 context:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)equalsBuilderWithObject:(id)arg1 ;
-(id)initWithStateMachine:(id)arg1 ;
-(void)willEnterWithPreviousState:(id)arg1 context:(id)arg2 ;
-(void)didEnterWithPreviousState:(id)arg1 context:(id)arg2 ;
-(void)setStateMachine:(HKSPStateMachine *)arg1 ;
@end

