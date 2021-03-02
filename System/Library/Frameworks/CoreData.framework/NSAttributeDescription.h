/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPropertyDescription.h>

@class NSString, NSData;

@interface NSAttributeDescription : NSPropertyDescription {

	unsigned short _type;
	Class _attributeValueClass;
	NSString* _valueTransformerName;
	NSString* _attributeValueClassName;
	id _defaultValue;

}

@property (assign) BOOL preserveValueOnDeletionInPersistentHistory; 
@property (assign) BOOL isFileBackedFuture; 
@property (assign) unsigned long long attributeType; 
@property (copy) NSString * attributeValueClassName; 
@property (retain) id defaultValue; 
@property (copy,readonly) NSData * versionHash; 
@property (copy) NSString * valueTransformerName; 
@property (assign) BOOL allowsExternalBinaryDataStorage; 
@property (assign) BOOL preservesValueInHistoryOnDeletion; 
+(void)initialize;
+(id)stringForAttributeType:(unsigned long long)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)_classNameForType:(unsigned long long)arg1 ;
-(NSString *)valueTransformerName;
-(Class)_attributeValueClass;
-(BOOL)isFileBackedFuture;
-(id)_initWithName:(id)arg1 type:(unsigned long long)arg2 ;
-(void)_createCachesAndOptimizeState;
-(id)_initWithName:(id)arg1 type:(unsigned long long)arg2 withClassName:(id)arg3 ;
-(void)_versionHash:(char*)arg1 inStyle:(unsigned long long)arg2 ;
-(void)setIsFileBackedFuture:(BOOL)arg1 ;
-(void)setPreserveValueOnDeletionInPersistentHistory:(BOOL)arg1 ;
-(void)setAttributeValueClassName:(NSString *)arg1 ;
-(BOOL)_isSchemaEqual:(id)arg1 ;
-(BOOL)allowsExternalBinaryDataStorage;
-(NSData *)versionHash;
-(unsigned long long)attributeType;
-(long long)_canConvertPredicate:(id)arg1 andWarning:(id)arg2 ;
-(void)setAllowsExternalBinaryDataStorage:(BOOL)arg1 ;
-(BOOL)isIndexed;
-(BOOL)_attributeTypeIsSchemaEqual:(unsigned long long)arg1 ;
-(void)setDefaultValue:(id)arg1 ;
-(unsigned long long)_propertyType;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7 ;
-(BOOL)_comparePredicatesAndWarningsWithUnoptimizedAttributeDescription:(id)arg1 ;
-(void)setValueTransformerName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)storesBinaryDataExternally;
-(BOOL)preservesValueInHistoryOnDeletion;
-(void)dealloc;
-(id)validationPredicates;
-(id)defaultValue;
-(id)_initWithType:(unsigned long long)arg1 ;
-(BOOL)_comparePredicatesAndWarnings:(id)arg1 ;
-(id)_rawValidationWarnings;
-(void)_setPreserveValueOnDeletionInPersistentHistory:(BOOL)arg1 ;
-(NSString *)attributeValueClassName;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_epsilonEquals:(id)arg1 rhs:(id)arg2 withFlags:(int)arg3 ;
-(id)description;
-(void)setStoresBinaryDataExternally:(BOOL)arg1 ;
-(void)setPreservesValueInHistoryOnDeletion:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAttributeType:(unsigned long long)arg1 ;
-(BOOL)preserveValueOnDeletionInPersistentHistory;
-(id)validationWarnings;
-(BOOL)_nonPredicateValidateValue:(id*)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id*)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_rawValidationPredicates;
@end
