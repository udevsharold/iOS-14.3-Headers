/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <libobjc.A.dylib/EKProtocolObject.h>
#import <libobjc.A.dylib/EKFrozenMeltedPair.h>

@class NSDictionary, EKEventStore, EKObjectID, NSMutableSet, NSMutableDictionary, NSString;

@interface EKPersistentObject : NSObject <EKProtocolObject, EKFrozenMeltedPair> {

	opaque_pthread_mutex_t _lock;
	EKEventStore* _eventStore;
	EKObjectID* _objectID;
	unsigned _flags;
	NSMutableSet* _coCommitObjects;
	NSMutableDictionary* _loadedProperties;
	NSMutableDictionary* _updatedProperties;

}

@property (nonatomic,readonly) int entityType; 
@property (nonatomic,readonly) EKEventStore * eventStore; 
@property (nonatomic,readonly) BOOL canBeConvertedToFullObject; 
@property (nonatomic,readonly) BOOL isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isFrozen; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSString * semanticIdentifier; 
+(id)_relationForKey:(id)arg1 ;
+(BOOL)_shouldRetainPropertyForKey:(id)arg1 ;
+(id)allObjectsWithChangesRelatedToObjects:(id)arg1 ;
+(Class)meltedClass;
+(Class)frozenClass;
+(id)relations;
+(id)propertiesUnavailableForPartialObjects;
+(id)defaultPropertiesToLoad;
+(Class)alternateUniverseClass;
-(NSString *)semanticIdentifier;
-(BOOL)isNew;
-(void)changed;
-(id)objectID;
-(void)rollback;
-(BOOL)refresh;
-(int)entityType;
-(id)init;
-(void)saved;
-(BOOL)_isNew;
-(id)initWithObject:(id)arg1 ;
-(BOOL)isFrozen;
-(BOOL)isDirty;
-(id)_propertyForKey:(id)arg1 ;
-(void)reset;
-(BOOL)setAttributes:(id)arg1 relations:(id)arg2 objectID:(id)arg3 eventStore:(id)arg4 error:(id*)arg5 ;
-(BOOL)_isPendingDelete;
-(BOOL)_isPendingUpdate;
-(void)dealloc;
-(id)_loadedPropertyKeys;
-(id)_loadedPropertyForKey:(id)arg1 ;
-(void)_releaseLoadedProperties;
-(void)_setDefaultPropertiesLoaded:(BOOL)arg1 ;
-(void)_loadDefaultPropertiesIfNeeded;
-(void)_takeValues:(id)arg1 forKeys:(id)arg2 ;
-(void)_setProperty:(id)arg1 forKey:(id)arg2 forRelation:(id)arg3 isUpdatedProperty:(BOOL)arg4 ;
-(void)_createUpdatedPropertiesIfNeeded;
-(void)_createLoadedPropertiesIfNeeded;
-(BOOL)_loadChildIdentifiersForKey:(id)arg1 values:(id*)arg2 ;
-(void)_setProperty:(id)arg1 forKey:(id)arg2 isUpdatedProperty:(BOOL)arg3 ;
-(BOOL)_loadRelationForKey:(id)arg1 value:(id*)arg2 ;
-(void)_addObjectCore:(id)arg1 toValues:(id)arg2 relation:(id)arg3 ;
-(void)_removeObjectCore:(id)arg1 fromValues:(id)arg2 relation:(id)arg3 ;
-(id)coCommitObjects;
-(id)_primitiveValueForKey:(id)arg1 loader:(/*^block*/id)arg2 ;
-(void)_primitiveSetValue:(id)arg1 forKey:(id)arg2 daemonSetter:(/*^block*/id)arg3 ;
-(id)_loadStringValueForKey:(id)arg1 ;
-(BOOL)isPropertyLoaded:(id)arg1 ;
-(void)_setProperty:(id)arg1 forKey:(id)arg2 isRelation:(BOOL)arg3 isUpdatedProperty:(BOOL)arg4 ;
-(void)_takeValuesForDefaultPropertyKeys:(id)arg1 values:(id)arg2 ;
-(void)_setPendingUpdate:(BOOL)arg1 ;
-(BOOL)_areDefaultPropertiesLoaded;
-(void)_setPendingInsert:(BOOL)arg1 ;
-(void)_setPendingDelete:(BOOL)arg1 ;
-(void)primitiveAddRelatedObject:(id)arg1 forKey:(id)arg2 ;
-(void)primitiveRemoveRelatedObject:(id)arg1 forKey:(id)arg2 ;
-(void)takeValues:(id)arg1 forKeys:(id)arg2 ;
-(double)primitiveDoubleValueForKey:(id)arg1 ;
-(void)primitiveSetDoubleValue:(double)arg1 forKey:(id)arg2 ;
-(void)takeValuesForDefaultPropertyKeys:(id)arg1 values:(id)arg2 ;
-(void)_setObjectID:(id)arg1 ;
-(EKEventStore *)eventStore;
-(id)changeSet;
-(id)primitiveStringValueForKey:(id)arg1 ;
-(void)primitiveSetStringValue:(id)arg1 forKey:(id)arg2 ;
-(int)primitiveIntValueForKey:(id)arg1 ;
-(void)primitiveSetIntValue:(int)arg1 forKey:(id)arg2 ;
-(void)primitiveSetRelationValue:(id)arg1 forKey:(id)arg2 ;
-(id)primitiveRelationValueForKey:(id)arg1 ;
-(id)primitiveDataValueForKey:(id)arg1 ;
-(void)primitiveSetDataValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)primitiveBoolValueForKey:(id)arg1 ;
-(void)primitiveSetBoolValue:(BOOL)arg1 forKey:(id)arg2 ;
-(id)primitiveDateValueForKey:(id)arg1 ;
-(void)primitiveSetDateValue:(id)arg1 forKey:(id)arg2 ;
-(Class)frozenClass;
-(id)frozenObject;
-(BOOL)isPropertyUnavailable:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ignoringProperties:(id)arg2 ;
-(BOOL)existsInStore;
-(id)loadedPropertyForKey:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(BOOL)pushDirtyProperties:(id*)arg1 ;
-(BOOL)_isPendingInsert;
-(void)addCoCommitObject:(id)arg1 ;
-(id)existingMeltedObject;
-(BOOL)isCompletelyEqual:(id)arg1 ;
-(BOOL)isPartialObject;
-(BOOL)canBeConvertedToFullObject;
-(NSDictionary *)preFrozenRelationshipObjects;
-(BOOL)isEqual:(id)arg1 ;
-(id)primitiveNumberValueForKey:(id)arg1 ;
-(void)primitiveSetNumberValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithAlternateUniverseObject:(id)arg1 inEventStore:(id)arg2 withUpdatedChildObjects:(id)arg3 ;
-(void)_setEventStore:(id)arg1 ;
-(id)meltedObjectInStore:(id)arg1 ;
-(BOOL)isPropertyDirty:(id)arg1 ;
-(id)dump;
-(void)unloadPropertyForKey:(id)arg1 ;
@end

