/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RETaggedFeatureValueArray : NSObject <NSCopying> {

	CFArrayRef _array;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long count; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)hash;
-(id)initWithValues:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)enumerateFeatureValuesUsingBlock:(/*^block*/id)arg1 ;
-(void)addFeatureValue:(unsigned long long)arg1 ;
-(unsigned long long)_locked_count;
-(unsigned long long)_locked_featureValueAtIndex:(unsigned long long)arg1 ;
-(id)initWithFeatureValues:(id)arg1 ;
-(unsigned long long)featureValueAtIndex:(unsigned long long)arg1 ;
-(void)insertFeatureValue:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeFeatureValueAtIndex:(unsigned long long)arg1 ;
-(void)removeAllFeatureValues;
-(void)replaceFeatureValueAtIndex:(unsigned long long)arg1 withValue:(unsigned long long)arg2 ;
-(unsigned long long)firstFeatureValue;
-(unsigned long long)lastFeatureValue;
@end

