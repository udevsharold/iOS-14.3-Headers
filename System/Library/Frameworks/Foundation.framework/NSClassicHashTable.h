/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSHashTable.h>

@interface NSClassicHashTable : NSHashTable {

	SCD_Struct_NS26* _callBacks;
	CFBasicHashRef _ht;

}
-(void)removeItem:(const void*)arg1 ;
-(id)init;
-(void)insertKnownAbsentItem:(const void*)arg1 ;
-(void)dealloc;
-(id)copy;
-(id)allObjects;
-(unsigned long long)hash;
-(void)insertItem:(const void*)arg1 ;
-(id)description;
-(void*)getItem:(const void*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)removeAllItems;
-(void)getKeys:(const void*)arg1 count:(unsigned long long*)arg2 ;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
@end

