/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NFCopying, FCFetchedValueManager;
@class NSHashTable, NFUnfairLock, NSError;

@interface FCFetchedValueObservable : NSObject {

	id<NFCopying> _value;
	id<FCFetchedValueManager> _manager;
	/*^block*/id _equalityTest;
	NSHashTable* _observers;
	NFUnfairLock* _lock;
	NSError* _error;

}

@property (nonatomic,__weak,readonly) id<FCFetchedValueManager> manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,copy,readonly) id equalityTest;                                  //@synthesize equalityTest=_equalityTest - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                               //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NFUnfairLock * lock;                                   //@synthesize lock=_lock - In the implementation block
@property (nonatomic,copy) NSError * error;                                           //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id<NFCopying> value;                                       //@synthesize value=_value - In the implementation block
-(void)handleError:(id)arg1 ;
-(id<NFCopying>)value;
-(NSError *)error;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(void)setValue:(id<NFCopying>)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id<FCFetchedValueManager>)manager;
-(id)valueWithError:(id*)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(id)initWithManager:(id)arg1 initialValue:(id)arg2 equalityTest:(/*^block*/id)arg3 ;
-(id)equalityTest;
-(NFUnfairLock *)lock;
@end

