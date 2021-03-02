/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@interface PPEvictingMinPriorityQueue : NSObject {

	unsigned long long _capacity;
	priority_queue<PPScoredItem *, std::__1::vector<PPScoredItem *, std::__1::allocator<PPScoredItem *> >, PPScoredItemCompareGreater>=vector<PPScoredItem *, std::__1::allocator<PPScoredItem *> >=@@compressed_pair<PPScoredItem *__strong *, std::__1::allocator<PPScoredItem *> >=@}}PPScoredItemCompareGreater}Ref _queue;

}

@property (nonatomic,readonly) double count; 
-(id)init;
-(id)popItem;
-(id)extractSortedMutableArray;
-(void)dealloc;
-(double)count;
-(void)addObject:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
@end
