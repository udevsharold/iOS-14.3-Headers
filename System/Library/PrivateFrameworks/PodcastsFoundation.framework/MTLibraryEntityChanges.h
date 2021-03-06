/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsFoundation/PodcastsFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableSet;

@interface MTLibraryEntityChanges : NSObject <NSCopying> {

	NSString* _entityName;
	NSMutableSet* _insertedObjectIDs;
	NSMutableSet* _deletedObjectIDs;
	NSMutableSet* _updatedObjectIDs;

}

@property (nonatomic,retain) NSMutableSet * insertedObjectIDs;              //@synthesize insertedObjectIDs=_insertedObjectIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * deletedObjectIDs;               //@synthesize deletedObjectIDs=_deletedObjectIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * updatedObjectIDs;               //@synthesize updatedObjectIDs=_updatedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSString * entityName;                       //@synthesize entityName=_entityName - In the implementation block
-(NSString *)entityName;
-(id)initWithEntityName:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableSet *)deletedObjectIDs;
-(NSMutableSet *)insertedObjectIDs;
-(id)description;
-(BOOL)hasInserts;
-(BOOL)hasDeletes;
-(NSMutableSet *)updatedObjectIDs;
-(BOOL)hasChanges;
-(BOOL)hasUpdates;
-(void)setInsertedObjectIDs:(NSMutableSet *)arg1 ;
-(void)setDeletedObjectIDs:(NSMutableSet *)arg1 ;
-(void)setUpdatedObjectIDs:(NSMutableSet *)arg1 ;
-(id)insertedAndUpdatedObjectIDs;
-(void)combineChanges:(id)arg1 ;
-(void)add:(id)arg1 changeType:(int)arg2 ;
@end

