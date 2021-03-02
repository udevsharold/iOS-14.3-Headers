/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPointerFunctions;

@interface NSPointerArray : NSObject <NSFastEnumeration, NSCopying, NSSecureCoding>

@property (copy,readonly) NSPointerFunctions * pointerFunctions; 
@property (assign) unsigned long long count; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)weakObjectsPointerArray;
+(id)pointerArrayWithStrongObjects;
+(id)pointerArrayWithOptions:(unsigned long long)arg1 ;
+(id)pointerArrayWithWeakObjects;
+(id)strongObjectsPointerArray;
+(id)pointerArrayWithPointerFunctions:(id)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(id)init;
-(void)setCount:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void*)pointerAtIndex:(unsigned long long)arg1 ;
-(id)mutableArray;
-(id)allObjects;
-(id)initWithCoder:(id)arg1 ;
-(void)replacePointerAtIndex:(unsigned long long)arg1 withPointer:(void*)arg2 ;
-(void)compact;
-(id)initWithPointerFunctions:(id)arg1 ;
-(NSPointerFunctions *)pointerFunctions;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS24*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)removePointerAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(void)addPointer:(void*)arg1 ;
-(void)insertPointer:(void*)arg1 atIndex:(unsigned long long)arg2 ;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
@end
