/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSArray;

@interface AMSThreadSafeDictionary : NSObject {

	NSMutableDictionary* _backingDictionary;
	NSObject*<OS_dispatch_queue> _backingDictionaryAccessQueue;

}

@property (nonatomic,retain) NSMutableDictionary * backingDictionary;                                //@synthesize backingDictionary=_backingDictionary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> backingDictionaryAccessQueue;              //@synthesize backingDictionaryAccessQueue=_backingDictionaryAccessQueue - In the implementation block
@property (copy,readonly) NSArray * allKeys; 
@property (copy,readonly) NSArray * allValues; 
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setBackingDictionary:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)allValues;
-(NSArray *)allKeys;
-(NSObject*<OS_dispatch_queue>)backingDictionaryAccessQueue;
-(void)setBackingDictionaryAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)backingDictionary;
-(void)removeAllObjects;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
@end

