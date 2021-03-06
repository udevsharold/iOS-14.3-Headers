/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSURL;

@interface NSLinkCheckingResult : NSTextCheckingResult {

	NSRange _range;
	NSURL* _url;

}
+(BOOL)supportsSecureCoding;
-(NSRange)range;
-(unsigned long long)resultType;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(void)dealloc;
-(BOOL)_adjustRangesWithOffset:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithRange:(NSRange)arg1 URL:(id)arg2 ;
-(id)URL;
-(void)encodeWithCoder:(id)arg1 ;
@end

