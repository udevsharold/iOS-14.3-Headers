/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BannerKit/BannerKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, NSArray;

@interface BNTieredArray : NSObject <NSCopying, NSFastEnumeration> {

	NSMutableArray* _collections;
	NSArray* _allObjects;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long tierCount; 
@property (nonatomic,readonly) id topObject; 
@property (nonatomic,readonly) NSArray * topObjectFromEachTier; 
@property (nonatomic,readonly) NSArray * allObjects; 
-(id)indexPathForObject:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeObject:(id)arg1 ;
-(NSArray *)allObjects;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BN7*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)objectAtIndexPath:(id)arg1 ;
-(unsigned long long)tierCount;
-(id)tierAtIndex:(unsigned long long)arg1 ;
-(id)topObjectInTier:(long long)arg1 ;
-(void)insertObject:(id)arg1 beneathObject:(id)arg2 ;
-(void)addObject:(id)arg1 incrementingTier:(BOOL)arg2 ;
-(id)topObject;
-(void)_invalidateAllObjectsCache;
-(void)removeObjectAtIndexPath:(id)arg1 ;
-(NSArray *)topObjectFromEachTier;
@end
