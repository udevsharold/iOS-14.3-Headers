/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/_PFResultString.h>

@interface _PFResultUniString : _PFResultString {

	unsigned _length;

}
+(void)initialize;
+(CFAllocatorRef)cfDeallocator;
+(unsigned long long)bufferOffset;
-(BOOL)isEqualToString:(id)arg1 ;
-(unsigned long long)cStringLength;
-(unsigned long long)length;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(const char*)UTF8String;
-(void)getCString:(char*)arg1 ;
-(unsigned long long)hash;
-(void)getCharacters:(unsigned short*)arg1 ;
-(BOOL)_isCString;
-(BOOL)isEqual:(id)arg1 ;
@end

