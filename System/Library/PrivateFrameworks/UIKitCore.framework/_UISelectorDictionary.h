/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMapTable, _UISelectorSet, NSArray;

@interface _UISelectorDictionary : NSObject <NSCopying> {

	NSMapTable* _map;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) _UISelectorSet * allSelectors; 
@property (nonatomic,readonly) NSArray * allObjects; 
-(void)addEntriesFromDictionary:(id)arg1 ;
-(id)initWithMap:(id)arg1 ;
-(id)init;
-(id)objectForSelector:(SEL)arg1 ;
-(_UISelectorSet *)allSelectors;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)allObjects;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(id)initWithMapping:(/*^block*/id)arg1 objects:(id)arg2 ;
-(void)removeObjectForSelector:(SEL)arg1 ;
-(void)removeObjectsForSelectors:(id)arg1 ;
-(void)enumerateSelectorsAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)setObject:(id)arg1 forSelector:(SEL)arg2 ;
@end
