/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface NSConstantData : NSData {

	unsigned long long _length;
	const char* _bytes;

}
+(id)new;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(/*^block*/id)arg4 ;
-(BOOL)_providesConcreteBacking;
-(unsigned long long)length;
-(id)init;
-(id)autorelease;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_isDeallocating;
-(void)dealloc;
-(BOOL)_tryRetain;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)retainCount;
-(id)copy;
-(const void*)bytes;
-(id)retain;
-(BOOL)_isCompact;
-(oneway void)release;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)_copyWillRetain;
@end
