/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sleep/Sleep-Structs.h>
#import <Sleep/HKSPStateMachineState.h>
#import <libobjc.A.dylib/HKSPDictionarySerializable.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDateInterval, HKSPPersistentStateMachine, NSDate, NSString;

@interface HKSPPersistentStateMachineState : HKSPStateMachineState <HKSPDictionarySerializable, NSCoding, NSCopying> {

	NSDateInterval* _lifetimeInterval;

}

@property (nonatomic,readonly) HKSPPersistentStateMachine * stateMachine; 
@property (nonatomic,retain) NSDate * expirationDate; 
@property (nonatomic,readonly) BOOL hasExpirationDate; 
@property (nonatomic,copy) NSDateInterval * lifetimeInterval;                          //@synthesize lifetimeInterval=_lifetimeInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)infiniteInterval;
-(BOOL)hasExpirationDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isExpiredForDate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)expirationDate;
-(id)succinctDescriptionBuilder;
-(void)willExitWithNextState:(id)arg1 context:(id)arg2 ;
-(NSDateInterval *)lifetimeInterval;
-(id)equalsBuilderWithObject:(id)arg1 ;
-(id)initWithStateMachine:(id)arg1 ;
-(id)initWithStateMachine:(id)arg1 lifetimeInterval:(id)arg2 ;
-(void)setLifetimeInterval:(NSDateInterval *)arg1 ;
-(id)determineExpirationDateForCurrentDate:(id)arg1 ;
-(void)updateLifetimeIntervalForCurrentDate:(id)arg1 expirationBlock:(/*^block*/id)arg2 ;
-(void)willEnterWithPreviousState:(id)arg1 context:(id)arg2 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
