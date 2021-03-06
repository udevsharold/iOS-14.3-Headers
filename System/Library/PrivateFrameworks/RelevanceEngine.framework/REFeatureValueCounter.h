/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RelevanceEngine/RelevanceEngine-Structs.h>
@class NSPointerArray;

@interface REFeatureValueCounter : NSObject {

	unsigned long long _count;
	NSPointerArray* _values;
	REFancyShrinkingDictionary* _indicies;
	opaque_pthread_rwlock_t _lock;

}

@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)countForValue:(id)arg1 ;
-(id)init;
-(void)setCount:(unsigned long long)arg1 ;
-(BOOL)readFromURL:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)totalCount;
-(unsigned long long)count;
-(void)_updateConfigurationForCount:(unsigned long long)arg1 ;
-(unsigned long long)trackedValueForValue:(id)arg1 ;
-(id)_createErrorWithCode:(unsigned long long)arg1 description:(id)arg2 underlyingError:(id)arg3 ;
@end

