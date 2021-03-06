/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLProbabilityDictionary.h>

@interface MLInt64ProbabilityDictionary : MLProbabilityDictionary {

	map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >* _mapIntLabelToIndex;

}

@property (assign,nonatomic) map<unsigned long mapIntLabelToIndex;              //@synthesize mapIntLabelToIndex=_mapIntLabelToIndex - In the implementation block
+(id)probabilityDictionaryForInt64Labels:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(id)initWithIntLabels:(id)arg1 ;
-(map<unsigned long)mapIntLabelToIndex;
-(void)setMapIntLabelToIndex:(map<unsigned long)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)copy;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
@end

