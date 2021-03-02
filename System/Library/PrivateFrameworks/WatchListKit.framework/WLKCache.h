/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSMutableDictionary;

@interface WLKCache : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableArray* _stack;
	NSMutableDictionary* _dictionary;
	unsigned long long _countLimit;

}

@property (assign) unsigned long long countLimit; 
-(unsigned long long)countLimit;
-(void)setCountLimit:(unsigned long long)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(id)init;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(void)_onQueueRemoveObjectForKey:(id)arg1 ;
@end
