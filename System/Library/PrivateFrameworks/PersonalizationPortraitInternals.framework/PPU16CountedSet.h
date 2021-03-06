/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class NSMutableDictionary;

@interface PPU16CountedSet : NSObject {

	vector<std::__1::pair<unsigned short, unsigned short>, std::__1::allocator<std::__1::pair<unsigned short, unsigned short> > >* _vectorStorage;
	NSMutableDictionary* _dictStorage;
	type _vectorInlineStorage;

}
-(unsigned short)countForValue:(unsigned short)arg1 ;
-(void)addValue:(unsigned short)arg1 ;
-(void)enumerateValuesAndCountsUsingBlock:(/*^block*/id)arg1 ;
-(void)_vectorEnumerateValuesAndCountsUsingBlock:(/*^block*/id)arg1 ;
-(void)_dictEnumerateValuesAndCountsUsingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_convertToDictionaryRepresentation;
-(void)dealloc;
-(id)description;
-(BOOL)isEqualToU16CountedSet:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)uniqueValueCount;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)dictionary;
@end

