/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSMapTable;

@interface TSUUnfairMapTable : NSObject {

	os_unfair_lock_s _unfairLock;
	NSMapTable* _mapTable;

}

@property (assign,nonatomic) os_unfair_lock_s unfairLock;              //@synthesize unfairLock=_unfairLock - In the implementation block
@property (nonatomic,retain) NSMapTable * mapTable;                    //@synthesize mapTable=_mapTable - In the implementation block
@property (readonly) unsigned long long count; 
+(id)mapTableWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 ;
-(os_unfair_lock_s)unfairLock;
-(id)objectForKey:(id)arg1 ;
-(id)initWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 capacity:(unsigned long long)arg3 ;
-(NSMapTable *)mapTable;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setUnfairLock:(os_unfair_lock_s)arg1 ;
-(unsigned long long)count;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setMapTable:(NSMapTable *)arg1 ;
@end

