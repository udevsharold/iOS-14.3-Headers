/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSOrthography;

@interface NSOrthographyCheckingResult : NSTextCheckingResult {

	NSRange _range;
	NSOrthography* _orthography;

}
+(BOOL)supportsSecureCoding;
-(NSRange)range;
-(unsigned long long)resultType;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(void)dealloc;
-(id)orthography;
-(BOOL)_adjustRangesWithOffset:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRange:(NSRange)arg1 orthography:(id)arg2 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
@end
