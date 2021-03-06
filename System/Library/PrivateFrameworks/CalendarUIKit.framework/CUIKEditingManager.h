/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class EKEventStore, NSMutableSet, NSObject, NSMutableDictionary;

@interface CUIKEditingManager : NSObject {

	EKEventStore* _eventStore;
	NSMutableSet* _editingContextGroups;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _changeHistory;
	NSMutableDictionary* _changedObjectMap;

}

@property (__weak) EKEventStore * eventStore;                           //@synthesize eventStore=_eventStore - In the implementation block
@property (retain) NSMutableSet * editingContextGroups;                 //@synthesize editingContextGroups=_editingContextGroups - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (retain) NSMutableDictionary * changeHistory;                 //@synthesize changeHistory=_changeHistory - In the implementation block
@property (retain) NSMutableDictionary * changedObjectMap;              //@synthesize changedObjectMap=_changedObjectMap - In the implementation block
-(NSMutableDictionary *)changeHistory;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(EKEventStore *)eventStore;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSMutableSet *)editingContextGroups;
-(void)setEditingContextGroups:(NSMutableSet *)arg1 ;
-(void)setChangeHistory:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)changedObjectMap;
-(void)setChangedObjectMap:(NSMutableDictionary *)arg1 ;
@end

