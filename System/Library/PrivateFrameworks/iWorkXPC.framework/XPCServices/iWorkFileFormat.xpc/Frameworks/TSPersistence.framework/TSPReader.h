/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPObjectDelegate.h>
#import <TSPersistence/TSPUnarchiverDelegate.h>

@protocol TSPReaderDelegate, OS_dispatch_group, OS_dispatch_queue;
@class TSPObjectContext, TSPComponent, TSPCancellationState, TSPComponentObjectUUIDMap, TSPFinalizeHandlerQueue, NSObject, NSError, NSMapTable, NSHashTable, NSString;

@interface TSPReader : NSObject <TSPObjectDelegate, TSPUnarchiverDelegate> {

	BOOL _hasReadFailure;
	id<TSPReaderDelegate> _delegate;
	TSPCancellationState* _cancellationState;
	TSPComponent* _component;
	TSPComponentObjectUUIDMap* _componentObjectUUIDMap;
	TSPFinalizeHandlerQueue* _finalizeHandlerQueue;
	NSObject*<OS_dispatch_group> _completionGroup;
	NSObject*<OS_dispatch_queue> _errorQueue;
	NSError* _error;
	NSObject*<OS_dispatch_queue> _unarchiveQueue;
	NSObject*<OS_dispatch_queue> _objectsQueue;
	unordered_map<long long, TSP::ObjectInfo, TSP::ObjectIdentifierHash, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ObjectInfo> > >* _objectInfoMap;
	vector<TSP::UnarchiverRepeatedReference, std::__1::allocator<TSP::UnarchiverRepeatedReference> >* _repeatedReferences;
	NSMapTable* _objects;
	NSObject*<OS_dispatch_queue> _objectsToModifyQueue;
	NSHashTable* _objectsToModify;
	struct {
		unsigned didFinishResolvingReferences : 1;
		unsigned needsUpgrade : 1;
		unsigned hasDocumentVersionUUID : 1;
		unsigned sourceType : 3;
		unsigned canRetainObjectReferencedByWeakLazyReference : 1;
		unsigned isCrossDocumentPaste : 1;
		unsigned isCrossAppPaste : 1;
		unsigned delegateRespondsToDidResetObjectIdentifierForObject : 1;
		unsigned delegateRespondsToDidResetObjectUUID : 1;
		unsigned delegateRespondsToDidUnarchiveObject : 1;
	}  _flags;

}

@property (nonatomic,__weak,readonly) id<TSPReaderDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) TSPComponent * component;                                       //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> completionGroup;                   //@synthesize completionGroup=_completionGroup - In the implementation block
@property (nonatomic,retain) NSError * error; 
@property (readonly) BOOL hasReadFailure; 
@property (nonatomic,readonly) TSPObjectContext * context; 
@property (nonatomic,readonly) long long componentIdentifier; 
@property (nonatomic,readonly) unsigned long long fileFormatVersion; 
@property (nonatomic,readonly) unsigned long long readVersion; 
@property (nonatomic,readonly) BOOL didFinishResolvingReferences; 
@property (nonatomic,readonly) BOOL hasDocumentVersionUUID; 
@property (nonatomic,readonly) long long sourceType; 
@property (nonatomic,readonly) BOOL canRetainObjectReferencedByWeakLazyReference; 
@property (nonatomic,readonly) BOOL isCrossDocumentPaste; 
@property (nonatomic,readonly) BOOL isCrossAppPaste; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)sourceType;
-(NSError *)error;
-(id)init;
-(NSObject*<OS_dispatch_group>)completionGroup;
-(void)setError:(NSError *)arg1 ;
-(TSPComponent *)component;
-(TSPObjectContext *)context;
-(id<TSPReaderDelegate>)delegate;
-(long long)componentIdentifier;
-(long long)modifyObjectTokenForNewObject;
-(long long)newObjectIdentifier;
-(id)dataForIdentifier:(long long)arg1 ;
-(unsigned long long)fileFormatVersion;
-(BOOL)hasDocumentVersionUUID;
-(BOOL)isCrossAppPaste;
-(id)newObjectUUIDForObject:(id)arg1 uuidNamespace:(unsigned char)arg2 offset:(unsigned long long)arg3 ignoringBaseUUIDForObjectUUID:(BOOL)arg4 requireDeterministicUUID:(BOOL)arg5 ;
-(void)beginIgnoringModificationsForObject:(id)arg1 ;
-(void)endIgnoringModificationsForObject:(id)arg1 ;
-(void)willModifyObject:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)canSetObjectUUIDForObject:(id)arg1 ;
-(id)objectUUIDMap;
-(BOOL)isObjectInDocument:(id)arg1 ;
-(BOOL)didFinishResolvingReferences;
-(BOOL)canRetainObjectReferencedByWeakLazyReference;
-(void)unarchiver:(id)arg1 didReadLazyReference:(id)arg2 isExternal:(BOOL*)arg3 ;
-(unsigned long long)readVersion;
-(long long)objectIdentifierForUUID:(id)arg1 ;
-(id)UUIDForObjectIdentifier:(long long)arg1 ;
-(BOOL)isCrossDocumentPaste;
-(void)readWithIOCompletionQueue:(id)arg1 ioCompletion:(/*^block*/id)arg2 completionQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)shouldValidateComponentsOfInMemoryObjects;
-(id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3 ;
-(BOOL)hasReadFailure;
-(void)attemptedToReadInMemoryObject:(id)arg1 objectIdentifier:(long long)arg2 ;
-(void)unarchiveObjectWithUnarchiver:(id)arg1 ;
-(void)beginReadingWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didUnarchiveObject:(id)arg1 withUnarchiver:(id)arg2 ;
-(BOOL)validateObjectIdentifierForObject:(id)arg1 ;
-(void)resolveReferences;
-(BOOL)finishUnarchiving;
-(void)processObjectsToModifyWithRootObject:(id)arg1 ;
-(void)addUnarchivedObject:(id)arg1 unarchiver:(id)arg2 ;
-(ObjectInfo*)objectInfoForIdentifier:(long long)arg1 ;
-(void)setObjectDelegatesToContextObjectDelegate;
@end

