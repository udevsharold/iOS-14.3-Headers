/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSPointerFunctions;

@interface NSMapTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>

@property (copy,readonly) NSPointerFunctions * keyPointerFunctions; 
@property (copy,readonly) NSPointerFunctions * valuePointerFunctions; 
@property (readonly) unsigned long long count; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)alloc;
+(BOOL)supportsSecureCoding;
+(id)mapTableWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 ;
+(id)mapTableWithStrongToStrongObjects;
+(id)weakToStrongObjectsMapTable;
+(id)strongToWeakObjectsMapTable;
+(id)mapTableWithWeakToStrongObjects;
+(id)mapTableWithStrongToWeakObjects;
+(id)strongToStrongObjectsMapTable;
+(id)mapTableWithWeakToWeakObjects;
+(id)weakToWeakObjectsMapTable;
-(id)bs_safeObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(void)bs_setSafeObject:(id)arg1 forKey:(id)arg2 ;
-(id)bs_takeObjectForKey:(id)arg1 ;
-(void)bs_each:(/*^block*/id)arg1 ;
-(id)bs_filter:(/*^block*/id)arg1 ;
-(id)enumerator;
-(unsigned long long)__capacity;
-(id)objectForKey:(id)arg1 ;
-(id)initWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 capacity:(unsigned long long)arg3 ;
-(id)keyEnumerator;
-(id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned long long)arg3 ;
-(NSPointerFunctions *)keyPointerFunctions;
-(id)init;
-(BOOL)mapMember:(const void*)arg1 originalKey:(const void*)arg2 value:(const void*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setItem:(const void*)arg1 forAbsentKey:(const void*)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(id)allValues;
-(void)setItem:(const void*)arg1 forKey:(const void*)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)mutableDictionary;
-(id)description;
-(id)allKeys;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS24*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)dictionaryRepresentation;
-(void)removeAllItems;
-(unsigned long long)count;
-(unsigned long long)getKeys:(const void*)arg1 values:(const void*)arg2 ;
-(void)removeAllObjects;
-(void)replaceItem:(const void*)arg1 forExistingKey:(const void*)arg2 ;
-(NSPointerFunctions *)valuePointerFunctions;
-(void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2 ;
-(void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2 ;
-(Class)classForCoder;
-(id)objectEnumerator;
-(void)removeObjectForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

