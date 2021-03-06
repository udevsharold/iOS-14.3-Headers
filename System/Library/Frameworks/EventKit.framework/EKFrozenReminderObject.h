/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKPersistentObject.h>

@class EKChangeSet, EKReminderStore, NSArray;

@interface EKFrozenReminderObject : EKPersistentObject {

	EKChangeSet* _changeSet;
	EKReminderStore* _reminderStore;
	id _remObject;
	NSArray* _path;

}

@property (nonatomic,readonly) EKChangeSet * uncommittedChanges; 
@property (nonatomic,copy) NSArray * path;                                    //@synthesize path=_path - In the implementation block
+(Class)meltedClass;
+(Class)frozenClass;
+(BOOL)canCommitSelf;
+(id)uniqueIdentifierForREMObject:(id)arg1 ;
-(id)semanticIdentifier;
-(BOOL)isNew;
-(int)entityType;
-(id)initWithObject:(id)arg1 ;
-(BOOL)isFrozen;
-(NSArray *)path;
-(BOOL)_applyChangesToSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)REMObject;
-(id)changeSet;
-(id)initWithREMObject:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3 ;
-(id)valueForSingleValueKey:(id)arg1 backingValue:(/*^block*/id)arg2 ;
-(id)initWithREMObject:(id)arg1 inStore:(id)arg2 ;
-(unsigned long long)hash;
-(id)frozenObject;
-(BOOL)isPropertyUnavailable:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ignoringProperties:(id)arg2 ;
-(BOOL)existsInStore;
-(id)uniqueIdentifier;
-(id)existingMeltedObject;
-(BOOL)isCompletelyEqual:(id)arg1 ;
-(BOOL)isPartialObject;
-(EKChangeSet *)uncommittedChanges;
-(id)updateParentToCommitSelf:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPath:(NSArray *)arg1 ;
-(id)updatedFrozenObjectWithChanges:(id)arg1 ;
-(id)updatedFrozenObjectWithChanges:(id)arg1 updatedChildren:(id)arg2 ;
-(id)remObjectID;
@end

