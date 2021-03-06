/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@class _PFArray, NSMutableArray;

@interface _PFMutableProxyArray : NSMutableArray {

	int _cd_rc;
	unsigned _editCount;
	unsigned _offset;
	unsigned _limit;
	_PFArray* _originalArray;
	NSMutableArray* _updatedObjectsArray;
	CFArrayRef _indicesVeneer;

}
+(Class)classForKeyedUnarchiver;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeLastObject;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_isDeallocating;
-(void)dealloc;
-(BOOL)_tryRetain;
-(unsigned long long)indexOfManagedObjectForObjectID:(id)arg1 ;
-(unsigned long long)retainCount;
-(id)copy;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)retain;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(void)finalize;
-(oneway void)release;
-(id)initWithPFArray:(id)arg1 ;
-(id)initWithPFArray:(id)arg1 inRange:(NSRange)arg2 ;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(id)managedObjectIDAtIndex:(unsigned long long)arg1 ;
-(id)newArrayFromObjectIDs;
-(Class)classForCoder;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(id)arrayFromObjectIDs;
@end

