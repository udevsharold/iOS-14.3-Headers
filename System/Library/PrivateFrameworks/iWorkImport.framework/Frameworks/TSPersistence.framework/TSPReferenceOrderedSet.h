/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableArray, NSMutableIndexSet;

@interface TSPReferenceOrderedSet : NSObject <NSCopying, NSMutableCopying> {

	unsigned long long _capacity;
	NSMutableArray* _items;
	NSMutableIndexSet* _objectsIndexSet;
	NSMutableIndexSet* _removedObjectsIndexSet;
	NSMutableIndexSet* _lazyReferencesIndexSet;
	NSMutableIndexSet* _removedLazyReferencesIndexSet;
	unsigned long long _count;

}

@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(BOOL)removeItem:(id)arg1 ;
-(BOOL)addItem:(id)arg1 ;
-(id)init;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)allObjects;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)minusSet:(id)arg1 ;
-(unsigned long long)count;
-(BOOL)containsItem:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
@end

