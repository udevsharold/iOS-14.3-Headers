/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUFlushableObject.h>

@class NSString, NSMutableDictionary;

@interface TSUCache : TSUFlushableObject {

	NSString* mCacheName;
	NSMutableDictionary* mCache;

}
-(id)objectForKey:(id)arg1 ;
-(void)unload;
-(id)init;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)description;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)initWithName:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(BOOL)hasFlushableContent;
-(id)p_objectForKey:(id)arg1 ;
-(void)p_addEntriesFromDictionary:(id)arg1 ;
-(id)p_objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
@end

