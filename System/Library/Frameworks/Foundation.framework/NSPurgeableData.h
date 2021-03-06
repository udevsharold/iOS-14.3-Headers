/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSMutableData.h>
#import <libobjc.A.dylib/NSDiscardableContent.h>

@interface NSPurgeableData : NSMutableData <NSDiscardableContent> {

	unsigned long long _length;
	int _accessCount;
	unsigned char _private[32];
	void* _reserved;

}
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(/*^block*/id)arg4 ;
-(void)setLength:(unsigned long long)arg1 ;
-(unsigned long long)length;
-(id)init;
-(void)dealloc;
-(BOOL)beginContentAccess;
-(void*)mutableBytes;
-(void)_destroyMemory;
-(void)discardContentIfPossible;
-(const void*)bytes;
-(BOOL)isContentDiscarded;
-(id)description;
-(void)endContentAccess;
-(id)initWithCapacity:(unsigned long long)arg1 ;
@end

