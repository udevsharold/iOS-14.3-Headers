/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSUbiquitousKeyValueStore, NSString;

@interface CWFKeyValueStore : NSObject {

	NSObject*<OS_dispatch_queue> _mutexQueue;
	NSObject*<OS_dispatch_queue> _eventQueue;
	NSUbiquitousKeyValueStore* _ubiquitousKVS;
	BOOL _activated;
	long long _type;
	NSString* _identifier;
	/*^block*/id _invalidationHandler;
	/*^block*/id _eventHandler;

}

@property (assign,getter=isActivated,nonatomic) BOOL activated;              //@synthesize activated=_activated - In the implementation block
@property (readonly) long long type;                                         //@synthesize type=_type - In the implementation block
@property (copy,readonly) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (copy) id invalidationHandler;                                     //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (copy) id eventHandler;                                            //@synthesize eventHandler=_eventHandler - In the implementation block
-(BOOL)isActivated;
-(void)setActivated:(BOOL)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)setEventHandler:(id)arg1 ;
-(id)eventHandler;
-(BOOL)synchronize;
-(void)activate;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 ;
-(void)__ubiquitousKVSChanged:(id)arg1 ;
-(NSString *)identifier;
-(long long)type;
-(id)dictionaryRepresentation;
-(void)removeAllEntries;
-(BOOL)__synchronize;
-(void)invalidate;
-(id)__debugDescriptionForType:(long long)arg1 ;
-(id)invalidationHandler;
@end

