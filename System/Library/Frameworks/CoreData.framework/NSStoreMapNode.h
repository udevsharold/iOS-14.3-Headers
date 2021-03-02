/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPersistentStoreMap, NSManagedObjectID, NSMutableDictionary, NSString;

@interface NSStoreMapNode : NSObject {

	NSPersistentStoreMap* _map;
	NSManagedObjectID* _objectID;
	NSMutableDictionary* _relatedNodes;
	NSString* _entityName;
	unsigned _version;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)configurationName;
-(void)_setMap:(id)arg1 ;
-(const id*)knownKeyValuesPointer;
-(id)objectID;
-(id)key;
-(void)dealloc;
-(id)_relatedNodes;
-(id)entity;
-(unsigned)_versionNumber;
-(id)initWithCoder:(id)arg1 ;
-(id)_snapshot_;
-(BOOL)isEqual:(id)arg1 ;
-(void)_setVersionNumber:(unsigned)arg1 ;
-(id)initWithObjectID:(id)arg1 ;
-(void)setDestinations:(id)arg1 forRelationship:(id)arg2 ;
-(id)destinationsForRelationship:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
