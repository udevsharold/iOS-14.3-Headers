/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSManagedObjectID.h>

@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID {

	int _cd_rc;
	int _counter;
	NSEntityDescription* _entity;

}
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)_storeDeallocated;
+(id)alloc;
+(id)initWithEntity:(id)arg1 andUUIDString:(id)arg2 ;
+(BOOL)accessInstanceVariablesDirectly;
+(void)_release_1;
+(id)initWithEntity:(id)arg1 ;
+(BOOL)_usesTaggedPointers;
+(unsigned)allocateBatch:(id*)arg1 forEntity:(id)arg2 count:(unsigned)arg3 ;
+(id)_retain_1;
+(id)retain;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(void)release;
+(long long)version;
+(void)setObjectStoreIdentifier:(id)arg1 ;
+(Class)classForStore:(id)arg1 ;
-(BOOL)_isPersistentStoreAlive;
-(id)persistentStore;
-(id)URIRepresentation;
-(id)initWithEntity:(id)arg1 andUUIDString:(id)arg2 ;
-(BOOL)isTemporaryID;
-(id)initWithEntity:(id)arg1 ;
-(void)dealloc;
-(id)entity;
-(unsigned long long)retainCount;
-(id)_retainedURIString;
-(unsigned long long)hash;
-(id)_storeIdentifier;
-(id)retain;
-(BOOL)isEqual:(id)arg1 ;
-(void)finalize;
-(oneway void)release;
-(id)_referenceData;
-(void)_setPersistentStore:(id)arg1 ;
-(int)_temporaryIDCounter;
@end

