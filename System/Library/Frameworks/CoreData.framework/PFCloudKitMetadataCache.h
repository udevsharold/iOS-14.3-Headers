/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet;

@interface PFCloudKitMetadataCache : NSObject {

	NSMutableDictionary* _recordZoneIDToZoneMetadata;
	NSMutableDictionary* _objectIDToRecordMetadata;
	NSMutableDictionary* _recordIDToMirroredRelationshipOrRecordMetadata;
	NSMutableDictionary* _mtmKeyToMirroredRelationship;
	NSMutableDictionary* _objectIDToRelationshipNameToExistingMTMKeys;
	NSMutableDictionary* _objectIDToChangedPropertyKeys;
	NSMutableSet* _invalidatedMTMKeys;

}
-(BOOL)efficientlyBatchObjectsInHistoryRequest:(id)arg1 fromStore:(id)arg2 inManagedObjectContext:(id)arg3 returningError:(id*)arg4 withBlock:(/*^block*/id)arg5 ;
-(id)init;
-(void)dealloc;
-(void)cacheZoneMetadata:(id)arg1 ;
-(id)zoneMetadataForZoneID:(id)arg1 ;
-(id)mirroredRelationshipForKey:(id)arg1 ;
-(id)mtmKeysRelatedToObjectWithID:(id)arg1 byRelationshipWithName:(id)arg2 ;
-(BOOL)hasLocalEditsForPropertyNamed:(id)arg1 onObjectWithID:(id)arg2 ;
-(id)recordMetadataForObject:(id)arg1 ;
-(void)registerRecordMetadata:(id)arg1 forObject:(id)arg2 ;
-(id)recordMetadataForObjectID:(id)arg1 ;
-(id)recordMetadataForRecordID:(id)arg1 ;
-(void)_addMirroredRelationshipMTMKey:(id)arg1 forObjectWithID:(id)arg2 andRelationshipName:(id)arg3 ;
-(id)_metadataForRecordID:(id)arg1 ;
-(BOOL)cacheMetadataForObjectsWithIDs:(id)arg1 andRecordsWithIDs:(id)arg2 inStore:(id)arg3 withManagedObjectContext:(id)arg4 error:(id*)arg5 ;
-(id)mirroredRelationshipForRecordID:(id)arg1 ;
-(void)registerMirroredRelationship:(id)arg1 forKey:(id)arg2 ;
@end
