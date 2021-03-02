/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/WFRecordStorage.h>

@class WFWorkflowIcon, NSArray, NSOrderedSet, NSString, NSData, WFCoreDataWorkflowIcon, NSSet;

@interface WFCoreDataCollection : NSManagedObject <WFRecordStorage>

@property (getter=isFolder,nonatomic,readonly) BOOL folder; 
@property (nonatomic,retain) WFWorkflowIcon * workflowIcon; 
@property (nonatomic,copy) NSArray * collectionOrdering; 
@property (nonatomic,copy) NSArray * shortcutOrdering; 
@property (nonatomic,copy) NSOrderedSet * deserializedLastRemoteShortcutOrdering; 
@property (nonatomic,copy) NSOrderedSet * deserializedLastRemoteShortcutOrderingSubset; 
@property (nonatomic,copy) NSOrderedSet * deserializedLastRemoteCollectionOrdering; 
@property (nonatomic,copy) NSOrderedSet * deserializedLastRemoteCollectionOrderingSubset; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSData * cloudKitFolderRecordMetadata; 
@property (nonatomic,retain) NSData * cloudKitOrderingRecordMetadata; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) NSData * lastRemoteCollectionOrderingData; 
@property (nonatomic,retain) NSData * lastRemoteCollectionOrderingSubsetData; 
@property (nonatomic,retain) NSData * lastRemoteShortcutOrderingData; 
@property (nonatomic,retain) NSData * lastRemoteShortcutOrderingSubsetData; 
@property (assign,nonatomic) long long lastSyncedHash; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) BOOL tombstoned; 
@property (nonatomic,retain) NSOrderedSet * collections; 
@property (nonatomic,retain) WFCoreDataWorkflowIcon * icon; 
@property (nonatomic,retain) NSSet * parents; 
@property (nonatomic,retain) NSOrderedSet * shortcuts; 
+(id)fetchRequest;
+(id)recordPropertyMap;
-(BOOL)isFolder;
-(id)descriptor;
-(void)setCollectionOrdering:(NSArray *)arg1 ;
-(NSArray *)collectionOrdering;
-(void)setShortcutOrdering:(NSArray *)arg1 ;
-(NSArray *)shortcutOrdering;
-(WFWorkflowIcon *)workflowIcon;
-(void)setWorkflowIcon:(WFWorkflowIcon *)arg1 ;
-(NSOrderedSet *)deserializedLastRemoteShortcutOrdering;
-(void)setDeserializedLastRemoteShortcutOrdering:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)deserializedLastRemoteShortcutOrderingSubset;
-(void)setDeserializedLastRemoteShortcutOrderingSubset:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)deserializedLastRemoteCollectionOrdering;
-(void)setDeserializedLastRemoteCollectionOrdering:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)deserializedLastRemoteCollectionOrderingSubset;
-(void)setDeserializedLastRemoteCollectionOrderingSubset:(NSOrderedSet *)arg1 ;
@end
