/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSArray.h>

@interface NSConstantArray : NSArray {

	unsigned long long _count;
	const id* _objects;

}
+(id)new;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)init;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)autorelease;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_isDeallocating;
-(void)dealloc;
-(BOOL)_tryRetain;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(unsigned long long)retainCount;
-(id)copy;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)objectEnumerator;
@end

