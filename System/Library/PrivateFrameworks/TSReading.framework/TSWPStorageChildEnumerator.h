/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class TSWPStorage, NSArray;

@interface TSWPStorageChildEnumerator : NSEnumerator {

	TSWPStorage* _storage;
	NSRange _charRange;
	unsigned _index;
	NSArray* _charOffsetArray;

}
-(id)nextObject;
-(void)dealloc;
-(id)initWithStorage:(id)arg1 range:(NSRange)arg2 ;
@end

