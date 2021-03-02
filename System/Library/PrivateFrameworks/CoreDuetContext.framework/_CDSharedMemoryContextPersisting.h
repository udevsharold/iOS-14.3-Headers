/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDContextPersisting.h>

@protocol OS_dispatch_queue;
@class _CDSharedMemoryKeyValueStore, NSObject, NSCountedSet, NSString;

@interface _CDSharedMemoryContextPersisting : NSObject <_CDContextPersisting> {

	_CDSharedMemoryKeyValueStore* _store;
	NSObject*<OS_dispatch_queue> _queue;
	NSCountedSet* _keyPathRegistrationCount;
	NSCountedSet* _legacyKeyPathRegistrationCount;
	NSString* _localDeviceID;

}

@property (nonatomic,retain) _CDSharedMemoryKeyValueStore * store;                       //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSCountedSet * keyPathRegistrationCount;                    //@synthesize keyPathRegistrationCount=_keyPathRegistrationCount - In the implementation block
@property (nonatomic,retain) NSCountedSet * legacyKeyPathRegistrationCount;              //@synthesize legacyKeyPathRegistrationCount=_legacyKeyPathRegistrationCount - In the implementation block
@property (nonatomic,retain) NSString * localDeviceID;                                   //@synthesize localDeviceID=_localDeviceID - In the implementation block
+(id)sharedMemoryKeyFromKeyPath:(id)arg1 ;
+(id)sharedMemoryKeyFromRegistration:(id)arg1 ;
+(id)persistenceWithSharedMemoryKeyValueStore:(id)arg1 ;
-(_CDSharedMemoryKeyValueStore *)store;
-(void)deleteDataCreatedBefore:(id)arg1 ;
-(void)setStore:(_CDSharedMemoryKeyValueStore *)arg1 ;
-(void)deleteKeyPaths:(id)arg1 ;
-(void)setLocalDeviceID:(NSString *)arg1 ;
-(void)saveValue:(id)arg1 forKeyPath:(id)arg2 ;
-(NSString *)localDeviceID;
-(NSCountedSet *)keyPathRegistrationCount;
-(id)loadValues;
-(void)deleteAllData;
-(id)initWithSharedMemoryKeyValueStore:(id)arg1 ;
-(void)setKeyPathRegistrationCount:(NSCountedSet *)arg1 ;
-(void)saveRegistration:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSCountedSet *)legacyKeyPathRegistrationCount;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)allKeysForContextStore;
-(void)deleteRegistration:(id)arg1 ;
-(void)setLegacyKeyPathRegistrationCount:(NSCountedSet *)arg1 ;
-(id)loadRegistrations;
@end
