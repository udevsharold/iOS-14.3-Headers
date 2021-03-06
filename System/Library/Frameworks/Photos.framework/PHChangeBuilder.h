/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectContext, PHPersistentChangeToken, NSMutableSet, NSMutableDictionary;

@interface PHChangeBuilder : NSObject {

	NSManagedObjectContext* _context;
	PHPersistentChangeToken* _changeToken;
	unsigned long long _maximumChangeThreshold;
	NSMutableSet* _insertedObjectIDs;
	NSMutableSet* _updatedObjectIDs;
	NSMutableSet* _deletedObjectIDs;
	NSMutableDictionary* _deletedUuidsByObjectId;
	NSMutableDictionary* _attributesByOID;
	NSMutableDictionary* _relationshipsByOID;
	BOOL _unknownMergeEvent;

}
+(id)changeWithManagedObjectContext:(id)arg1 maximumChangeThreshold:(unsigned long long)arg2 transaction:(id)arg3 ;
-(void)recordTransaction:(id)arg1 ;
-(id)_uuidForDeleteChange:(id)arg1 uniquedObjectID:(id)arg2 ;
-(void)_recordUpdateChange:(id)arg1 withUniquedObjectID:(id)arg2 ;
-(id)initWithManagedObjectContext:(id)arg1 maximumChangeThreshold:(unsigned long long)arg2 ;
-(id)buildChange;
-(void)_recordChangedProperties:(id)arg1 forObjectID:(id)arg2 ;
-(void)recordNonIncrementalChanges;
-(void)_recordInsertChange:(id)arg1 withUniquedObjectID:(id)arg2 ;
-(void)recordChange:(id)arg1 ;
-(void)recordChanges:(id)arg1 ;
-(BOOL)changeCountExeedsThreshold:(unsigned long long)arg1 ;
-(void)_recordDeleteChange:(id)arg1 withUniquedObjectID:(id)arg2 ;
@end

