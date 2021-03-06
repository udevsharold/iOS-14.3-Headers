/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>
#import <HMFoundation/HMFTimerDelegate.h>

@class HMFTimer, NSString;

@interface HMFOperationBudget : HMFObject <HMFLogging, HMFTimerDelegate> {

	os_unfair_recursive_lock_s _lock;
	HMFTimer* _timer;
	unsigned long long _value;
	unsigned long long _limit;
	HMFRate _rate;

}

@property (nonatomic,readonly) unsigned long long limit;              //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) HMFRate rate;                          //@synthesize rate=_rate - In the implementation block
@property (readonly) unsigned long long value;                        //@synthesize value=_value - In the implementation block
@property (getter=isFull,readonly) BOOL full; 
@property (getter=isEmpty,readonly) BOOL empty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(HMFRate)rate;
-(unsigned long long)value;
-(id)initWithLimit:(unsigned long long)arg1 rate:(HMFRate)arg2 ;
-(BOOL)isEmpty;
-(id)init;
-(void)timerDidFire:(id)arg1 ;
-(void)reset;
-(BOOL)isFull;
-(unsigned long long)limit;
-(BOOL)decrementByCount:(unsigned long long)arg1 ;
-(BOOL)decrement;
@end

