/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
@class PETAggregateStateStorage;

@interface PETAggregateState : NSObject {

	PETAggregateStateStorage* _storage;
	SCD_Struct_PE7 _rng;

}
+(unsigned char)hashForString:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(BOOL)checkIntegrity;
-(id)init;
-(void)reset;
-(id)initInMemory;
-(void)enumerateCounters:(/*^block*/id)arg1 distributions:(/*^block*/id)arg2 ;
-(void)updateDistributionWithValue:(double)arg1 forKey:(const void*)arg2 keyLength:(unsigned short)arg3 maxSampleSize:(unsigned short)arg4 ;
-(id)initWithStorage:(id)arg1 ;
-(void)updateCounterTo:(double)arg1 forKey:(const void*)arg2 keyLength:(unsigned short)arg3 ;
-(id)description;
-(void)updateDistributionWithValue:(double)arg1 forKey:(id)arg2 maxSampleSize:(unsigned short)arg3 ;
-(void)enumerateAndResetCounters:(/*^block*/id)arg1 distributions:(/*^block*/id)arg2 ;
-(void)incrementCounterBy:(double)arg1 forKey:(const void*)arg2 keyLength:(unsigned short)arg3 ;
-(void)incrementCounterBy:(double)arg1 forKey:(id)arg2 ;
-(void)updateCounterTo:(double)arg1 forKey:(id)arg2 ;
@end

