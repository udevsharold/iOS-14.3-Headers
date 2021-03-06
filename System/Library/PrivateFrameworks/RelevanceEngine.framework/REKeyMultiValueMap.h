/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface REKeyMultiValueMap : NSObject {

	NSMapTable* _keyMap;
	NSMapTable* _valueMap;

}

@property (nonatomic,readonly) unsigned long long keyCount; 
@property (nonatomic,readonly) unsigned long long valueCount; 
-(id)init;
-(unsigned long long)keyCount;
-(void)removeKey:(id)arg1 ;
-(unsigned long long)valueCount;
-(id)keyForValue:(id)arg1 ;
-(id)initWithValuePointFunctionOptions:(unsigned long long)arg1 ;
-(id)valuesForKey:(id)arg1 ;
-(void)addKey:(id)arg1 withValues:(id)arg2 ;
-(void)insertValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeValue:(id)arg1 forKey:(id)arg2 ;
-(void)enumerateValuesForKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

