/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableIndexSet, NSIndexSet;

@interface TSTHiddenDimensionCache : NSObject <NSCopying> {

	unsigned long long mCount;
	NSMutableIndexSet* mCachedVisible;
	NSMutableIndexSet* mCachedUserVisible;
	NSMutableIndexSet* mInvalidRanges;
	unsigned long long mMarkIndex;

}

@property (nonatomic,readonly) NSIndexSet * visibleIndices; 
-(void)invalidate:(NSRange)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(NSIndexSet *)visibleIndices;
-(id)initWithUserHiddenInformation:(BOOL)arg1 ;
-(BOOL)isIndexHidden:(unsigned long long)arg1 ;
-(BOOL)isIndexUserHidden:(unsigned long long)arg1 ;
-(unsigned long long)numberHiddenIndicesInRange:(NSRange)arg1 ;
-(unsigned long long)numberUserHiddenIndicesInRange:(NSRange)arg1 ;
-(BOOL)anyHiddenIndicesInRange:(NSRange)arg1 ;
-(BOOL)anyUserHiddenIndicesInRange:(NSRange)arg1 ;
-(unsigned long long)findPreviousVisibleIndex:(unsigned long long)arg1 ;
-(unsigned long long)findNextVisibleIndex:(unsigned long long)arg1 ;
-(unsigned long long)findNthPreviousVisibleIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2 ;
-(unsigned long long)findNthNextVisibleIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2 ;
-(unsigned short)numberOfVisibleIndicesToMarkIndexFrom:(unsigned long long)arg1 ;
-(void)setMarkIndex:(unsigned long long)arg1 ;
-(void)setAllValuesToZero;
-(void)setAllInvalidValuesUsingBlock:(/*^block*/id)arg1 ;
-(void)moveRangeFrom:(NSRange)arg1 toIndex:(unsigned long long)arg2 ;
-(void)deleteRange:(NSRange)arg1 ;
-(void)insertRange:(NSRange)arg1 ;
@end

