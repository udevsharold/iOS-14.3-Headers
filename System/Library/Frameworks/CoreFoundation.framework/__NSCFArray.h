/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@interface __NSCFArray : NSMutableArray
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeLastObject;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(unsigned long long)retainCount;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)hash;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)retain;
-(BOOL)isEqual:(id)arg1 ;
-(oneway void)release;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(Class)classForCoder;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
@end
