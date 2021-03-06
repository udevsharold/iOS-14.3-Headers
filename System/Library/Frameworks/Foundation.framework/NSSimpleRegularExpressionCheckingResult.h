/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSRegularExpressionCheckingResult.h>

@class NSRegularExpression;

@interface NSSimpleRegularExpressionCheckingResult : NSRegularExpressionCheckingResult {

	NSRegularExpression* _regularExpression;
	NSRange _ranges[3];

}
-(NSRange)range;
-(NSRange)rangeAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)_adjustRangesWithOffset:(long long)arg1 ;
-(id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2 ;
-(unsigned long long)numberOfRanges;
-(id)regularExpression;
-(id)rangeArray;
-(id)initWithRanges:(NSRange*)arg1 count:(unsigned long long)arg2 regularExpression:(id)arg3 ;
@end

