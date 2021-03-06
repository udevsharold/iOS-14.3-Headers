/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRUndoDelegate.h>
#import <libobjc.A.dylib/REMObjectIDProviding.h>

@protocol REMCRReminderIDListDelegate;
@class CRTombstoneOrderedSet, NSObject, NSUUID, CRDocument, REMObjectID, NSMutableOrderedSet, NSString;

@interface REMCRReminderIDList : NSObject <CRUndoDelegate, REMObjectIDProviding> {

	CRTombstoneOrderedSet* _reminderIDsStorage;
	NSObject*<REMCRReminderIDListDelegate> _delegate;
	NSUUID* _replica;
	CRDocument* _document;
	REMObjectID* _remObjectID;

}

@property (nonatomic,readonly) NSUUID * replica;                                                  //@synthesize replica=_replica - In the implementation block
@property (nonatomic,retain) CRDocument * document;                                               //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) REMObjectID * remObjectID;                                           //@synthesize remObjectID=_remObjectID - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<REMCRReminderIDListDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * reminderIDsProxy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cdEntityName;
+(id)listFromSerializedData:(id)arg1 replica:(id)arg2 ;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg1 ;
-(id)_orderedSet;
-(CRDocument *)document;
-(NSUUID *)replica;
-(id)init;
-(void)mergeWith:(id)arg1 ;
-(id)copyForReplica:(id)arg1 ;
-(void)addUndoCommandsForObject:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)wantsUndoCommands;
-(void)setRemObjectID:(REMObjectID *)arg1 ;
-(id)initWithDocument:(id)arg1 objectID:(id)arg2 ;
-(NSMutableOrderedSet *)reminderIDsProxy;
-(void)addReminder:(id)arg1 ;
-(unsigned long long)countOfReminderIDs;
-(id)objectInReminderIDsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexInReminderIDsOfObject:(id)arg1 ;
-(void)insertObject:(id)arg1 inReminderIDsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromReminderIDsAtIndex:(unsigned long long)arg1 ;
-(void)setDelegate:(NSObject*<REMCRReminderIDListDelegate>)arg1 ;
-(REMObjectID *)remObjectID;
-(NSObject*<REMCRReminderIDListDelegate>)delegate;
-(void)setDocument:(CRDocument *)arg1 ;
@end

