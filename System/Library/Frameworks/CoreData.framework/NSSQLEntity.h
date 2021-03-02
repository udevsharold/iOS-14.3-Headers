/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSStoreMapping.h>

@class NSSQLModel, NSEntityDescription, NSString, NSMutableDictionary, NSArray, NSMutableArray, NSSQLPrimaryKey, NSSQLEntityKey, NSSQLOptLockKey, NSSQLStoreMappingGenerator, NSKnownKeysMappingStrategy, NSSQLEntity_DerivedAttributesExtension, NSDictionary;

@interface NSSQLEntity : NSStoreMapping {

	NSSQLModel* _model;
	NSEntityDescription* _entityDescription;
	NSString* _tableName;
	NSMutableDictionary* _properties;
	NSArray* _propertyAllCache;
	NSArray* _propertiesAllToManysCache;
	NSArray* _propertyManyToManyCache;
	NSMutableArray* _columnsToFetch;
	NSMutableArray* _ekColumns;
	NSMutableArray* _fkColumns;
	NSMutableArray* _fokColumns;
	NSMutableArray* _attrColumns;
	NSMutableArray* _virtualFKs;
	NSSQLPrimaryKey* _primaryKey;
	NSSQLEntityKey* _entityKey;
	NSSQLOptLockKey* _optLockKey;
	NSMutableArray* _subentities;
	NSSQLEntity* _superentity;
	NSSQLEntity* _rootEntity;
	NSSQLStoreMappingGenerator* _mappingGenerator;
	unsigned _entityID;
	unsigned _subentityMaxID;
	NSRange _toOneRange;
	NSMutableArray* _uniqueProperties;
	NSMutableArray* _multicolumnUniquenessConstraints;
	void* _fetch_entity_plan;
	NSMutableDictionary* _rtreeIndices;
	NSKnownKeysMappingStrategy* _propertyMapping;
	void* _odiousHashHackStorage;
	NSMutableArray* _derivedAttributes;
	NSSQLEntity_DerivedAttributesExtension* _derivedAttributeExtension;
	struct {
		unsigned _hasAttributesWithExternalDataReferences : 1;
		unsigned _hasAttributesWithFileBackedFutures : 1;
		unsigned _reserved : 30;
	}  _sqlentityFlags;

}

@property (nonatomic,readonly) NSDictionary * rtreeIndexes; 
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)attributeColumns;
-(id)externalName;
-(NSDictionary *)rtreeIndexes;
-(unsigned)entityID;
-(BOOL)hasAttributesWithExternalDataReferences;
-(id)tableName;
-(unsigned)fetchIndexForKey:(id)arg1 ;
-(void)setEntityID:(unsigned)arg1 ;
-(id)primaryKey;
-(id)toManyRelationships;
-(id)uniqueProperties;
-(id)optLockKey;
-(void)setSuperentity:(id)arg1 ;
-(id)derivedAttributesExtension;
-(id)attributeNamed:(id)arg1 ;
-(id)_sqlPropertyWithRenamingIdentifier:(id)arg1 ;
-(id)propertiesByName;
-(void)addDerivedAttribute:(id)arg1 ;
-(id)model;
-(id)foreignKeyColumns;
-(void)dealloc;
-(BOOL)hasAttributesWithFileBackedFutures;
-(id)attributes;
-(void)_addForeignOrderKeyForToOne:(id)arg1 entity:(id)arg2 ;
-(void)_generateIndexes;
-(BOOL)hasInheritance;
-(unsigned)subentityMaxID;
-(id)entitySpecificAttributes;
-(id)derivedAttributes;
-(id)propertyNamed:(id)arg1 ;
-(id)virtualForeignKeyColumns;
-(BOOL)hasSubentities;
-(id)rootEntity;
-(void)_addColumnToFetch:(id)arg1 ;
-(id)tempTableName;
-(id)entitySpecificRelationships;
-(id)subentityKey;
-(id)propertyMapping;
-(id)foreignOrderKeyColumns;
-(id)_addVirtualToOneForToMany:(id)arg1 withInheritedProperty:(id)arg2 ;
-(id)description;
-(unsigned)_generateIDWithSuperEntity:(id)arg1 nextID:(unsigned)arg2 ;
-(BOOL)_collectFKSlots:(id)arg1 error:(id*)arg2 ;
-(id)properties;
-(void)_doPostModelGenerationCleanup;
-(id)entitySpecificPropertiesPassing:(/*^block*/id)arg1 ;
-(void*)_odiousHashHack;
-(id)_propertySearchMapping;
-(NSRange)_toOneRange;
-(BOOL)_generateAttributeDerivations:(id*)arg1 ;
-(void)_generateInverseRelationshipsAndMore;
-(void)_generateProperties;
-(void)setSubentities:(id)arg1 ;
-(id)multicolumnUniquenessConstraints;
-(id)binaryIndexForIndexDescription:(id)arg1 ;
-(BOOL)addPropertiesForReadOnlyFetch:(id)arg1 keys:(id)arg2 context:(id)arg3 ;
-(BOOL)_isValidFunctionForDerivations:(id)arg1 ;
-(void)_organizeConstraints;
-(id)manyToManyRelationships;
-(void)_addRootColumnToFetch:(id)arg1 ;
-(id)relationshipNamed:(id)arg1 ;
-(id)subentities;
-(id)columnsToCreate;
-(id)name;
-(void)_addSubentity:(id)arg1 ;
-(id)mappingGenerator;
-(BOOL)isRootEntity;
-(id)indexForIndexDescription:(id)arg1 ;
-(id)rtreeIndexForIndexDescription:(id)arg1 ;
-(id)columnsToFetch;
-(id)entityDescription;
-(id)superentity;
-(id)subhierarchyColumnMatching:(id)arg1 ;
-(BOOL)isKindOfSQLEntity:(id)arg1 ;
-(id)initWithModel:(id)arg1 entityDescription:(id)arg2 ;
-(void)_generateMulticolumnUniquenessConstraints;
-(BOOL)_entityIsBroken:(id*)arg1 ;
-(void)addUniquedProperty:(id)arg1 ;
-(void)addDerivationKeypath:(id)arg1 forAttribute:(id)arg2 ;
-(id)rtreeIndexForIndexNamed:(id)arg1 ;
-(id)entitySpecificProperties;
-(id)foreignEntityKeyColumns;
@end
