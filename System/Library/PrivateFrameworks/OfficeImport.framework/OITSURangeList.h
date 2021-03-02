/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OITSURangeList : NSObject {

	vector<_NSRange, std::__1::allocator<_NSRange> >* mRangeList;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)initWithString:(id)arg1 ;
-(NSRange)rangeAtIndex:(unsigned long long)arg1 ;
-(void)removeRangeAtIndex:(unsigned long long)arg1 ;
-(id)stringValue;
-(void)insertRange:(NSRange)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithRange:(NSRange)arg1 ;
-(void)reverse;
-(unsigned long long)count;
-(void)addRange:(NSRange)arg1 ;
-(id)initWithRangeList:(id)arg1 ;
-(void)replaceWithRange:(NSRange)arg1 atIndex:(unsigned long long)arg2 ;
-(void)consolidate;
@end
