/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UIPointVector : NSObject {

	unsigned long long _count;
	unsigned long long _capacity;
	* _vectors;

}

@property (assign,nonatomic) unsigned long long capacity;              //@synthesize capacity=_capacity - In the implementation block
@property (assign,nonatomic) unsigned long long count;                 //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) * vectors;                                //@synthesize vectors=_vectors - In the implementation block
-(void)setCapacity:(unsigned long long)arg1 ;
-(unsigned long long)capacity;
-(void)clear;
-(id)init;
-(void)setCount:(unsigned long long)arg1 ;
-(void)reset;
-(void)dealloc;
-(1)lastVector;
-(*)vectors;
-(void)setVectors:(*)arg1 ;
-(void)removeVectorAtIndex:(unsigned long long)arg1 ;
-(2)vectorAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(void)addVector:;
@end
