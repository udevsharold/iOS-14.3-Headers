/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSFetchRequestResult.h>

@class NSManagedObjectContext, NSManagedObjectID, NSString, NSEntityDescription;

@interface NSManagedObject : NSObject <NSFetchRequestResult> {

	int _cd_rc;
	unsigned _cd_lockingInfo;
	unsigned _cd_stateFlags;
	unsigned _cd_extraFlags;
	id _cd_rawData;
	NSManagedObjectContext* _cd_managedObjectContext;
	NSManagedObjectID* _cd_objectID;
	SCD_Struct_NS13* _cd_extras;
	id _cd_queueReference;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext; 
@property (nonatomic,readonly) NSEntityDescription * entity; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isInserted,nonatomic,readonly) BOOL inserted; 
@property (getter=isUpdated,nonatomic,readonly) BOOL updated; 
@property (getter=isDeleted,nonatomic,readonly) BOOL deleted; 
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,readonly) BOOL hasPersistentChangedValues; 
@property (getter=isFault,nonatomic,readonly) BOOL fault; 
@property (nonatomic,readonly) unsigned long long faultingState; 
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)entityName;
+(id)alloc;
+(void)_release_1;
+(id)fetchRequest;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(id)entity;
+(Class)classForEntity:(id)arg1 ;
+(id)_retain_1;
+(id)retain;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(void)release;
+(id)allocWithEntity:(id)arg1 ;
+(BOOL)_isGeneratedClass;
+(id)_PFPlaceHolderSingleton;
+(id)alloc_10_4;
+(id)allocWithZone_10_4:(NSZone*)arg1 ;
+(char*)_transientPropertiesChangesMask__;
+(BOOL)contextShouldIgnoreUnmodeledPropertyChanges;
+(id)_PFPlaceHolderSingleton_core;
+(BOOL)_useFastValidationMethod;
+(BOOL)_isGeneratedClass_1;
+(SCD_Struct_NS14*)_PFMOClassFactoryData;
+(unsigned)allocBatch:(id*)arg1 withEntity:(id)arg2 count:(unsigned)arg3 ;
+(void)_initializeAccessorStubs;
+(void)_initializePrimitiveAccessorStubs;
+(BOOL)resolveClassMethod:(SEL)arg1 ;
+(id)batchAllocateWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 count:(unsigned)arg3 ;
+(BOOL)_hasOverriddenAwake;
+(void)_entityDeallocated;
-(BOOL)validateRequiredAttributesForObject:(id)arg1 error:(id*)arg2 ;
-(id)_removeObsoleteKeysFromDictionary:(id)arg1 ;
-(void)setValuesWithObject:(id)arg1 ;
-(id)_obsoleteAttributes;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setObservationInfo:(void*)arg1 ;
-(void)prepareForDeletion;
-(void)willSave;
-(void)awakeFromInsert;
-(void)awakeFromFetch;
-(NSManagedObjectID *)objectID;
-(void)willTurnIntoFault;
-(void)didSave;
-(void)willChangeValueForKey:(id)arg1 ;
-(id)dictionaryWithValuesForKeys:(id)arg1 ;
-(BOOL)isDeleted;
-(void)willChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3 ;
-(id)init;
-(void)didChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)willChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3 ;
-(void)didTurnIntoFault;
-(BOOL)_isDeallocating;
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
-(void)dealloc;
-(void)didChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3 ;
-(BOOL)_tryRetain;
-(NSEntityDescription *)entity;
-(void)setValuesForKeysWithDictionary:(id)arg1 ;
-(unsigned long long)retainCount;
-(BOOL)validateValue:(id*)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)hash;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)mutableOrderedSetValueForKey:(id)arg1 ;
-(void*)observationInfo;
-(id)initWithContext:(id)arg1 ;
-(id)mutableArrayValueForKey:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(NSString *)description;
-(id)_implicitObservationInfo;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)mutableSetValueForKey:(id)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(id)primitiveValueForKey:(id)arg1 ;
-(id)retain;
-(BOOL)isUpdated;
-(void)_setVersionReference__:(unsigned)arg1 ;
-(void)willAccessValueForKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isFault;
-(BOOL)isInserted;
-(void)setNilValueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)implementsSelector:(SEL)arg1 ;
-(oneway void)release;
-(void)didFireFault;
-(void)willFireFault;
-(void)_setGenericValue:(id)arg1 forKey:(id)arg2 withIndex:(long long)arg3 flags:(long long)arg4 ;
-(id)_genericValueForKey:(id)arg1 withIndex:(long long)arg2 flags:(long long)arg3 ;
-(unsigned long long)faultingState;
-(void)didAccessValueForKey:(id)arg1 ;
-(id)_genericMutableSetValueForKey:(id)arg1 withIndex:(long long)arg2 flags:(long long)arg3 ;
-(id)_genericMutableOrderedSetValueForKey:(id)arg1 withIndex:(long long)arg2 flags:(long long)arg3 ;
-(BOOL)hasFaultForRelationshipNamed:(id)arg1 ;
-(void)awakeFromSnapshotEvents:(unsigned long long)arg1 ;
-(BOOL)validateForDelete:(id*)arg1 ;
-(void)setPrimitiveValue:(id)arg1 forKey:(id)arg2 ;
-(id)dictionaryWithPropertyValues;
-(id)committedValuesForKeys:(id)arg1 ;
-(id)changedValues;
-(id)changedValuesForCurrentEvent;
-(BOOL)hasPersistentChangedValues;
-(id)objectIDsForRelationshipNamed:(id)arg1 ;
-(void)willRefresh:(BOOL)arg1 ;
-(id)bindableObjectPublisher;
-(void)setBindableObjectPublisher:(id)arg1 ;
-(void)didRefresh:(BOOL)arg1 ;
-(BOOL)hasChanges;
-(id)_initWithEntity:(id)arg1 withID:(id)arg2 withHandler:(id)arg3 withContext:(id)arg4 ;
-(unsigned)_versionReference__;
-(void)_didChangeValue:(id)arg1 forRelationship:(id)arg2 named:(id)arg3 withInverse:(id)arg4 ;
-(id)_orderKeysForRelationshipWithName__:(id)arg1 ;
-(BOOL)_updateLocationsOfObjectsToLocationByOrderKey:(id)arg1 inRelationshipWithName:(id)arg2 error:(id*)arg3 ;
-(id)valueForKey:(id)arg1 ;
-(BOOL)_defaultValidation:(id*)arg1 error:(id*)arg2 ;
-(/*function pointer*/void*)methodForSelector:(SEL)arg1 ;
-(BOOL)validateForUpdate:(id*)arg1 ;
-(BOOL)validateForInsert:(id*)arg1 ;
@end
