/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_os_transaction;
#import <CoreFoundation/CoreFoundation-Structs.h>
@class CFPrefsDaemon, CFPDDataBuffer, NSObject;

@interface CFPDSource : NSObject {

	CFPrefsDaemon* _cfprefsd;
	CFPDDataBuffer* _plist;
	NSObject*<OS_xpc_object> _pendingChangesQueue;
	unsigned long long _pendingChangesSize;
	CFStringRef _userName;
	CFStringRef _domain;
	char* _actualPath;
	CFSetRef _observingConnections;
	NSObject*<OS_os_transaction> _dirtyTransaction;
	CFStringRef _uncanonicalizedPathCache;
	os_unfair_lock_s _uncanonicalizedPathCacheLock;
	os_unfair_lock_s _observingConnectionsLock;
	os_unfair_lock_s _writeLock;
	os_unfair_lock_s _lock;
	unsigned _lastEuid;
	unsigned _lastEgid;
	int _fileProtectionClass;
	short _generationShmemIndex;
	BOOL _byHost;
	BOOL _managed;
	BOOL _managedUsesContainer;
	BOOL _watchingParentDirectory;
	unsigned _handlingRequest : 1;
	unsigned _dirty : 1;
	unsigned _neverCache : 1;
	unsigned _checkedForNonPrefsPlist : 1;
	unsigned _restrictedReadability : 1;
	unsigned _waitingForDeviceUnlock : 1;
	unsigned _disableBackup : 1;

}
-(CFStringRef)user;
-(CFStringRef)container;
-(void)asyncNotifyObserversOfWriteFromConnection:(id)arg1 message:(id)arg2 ;
-(CFStringRef)copyUncanonicalizedPath;
-(void)setDirty:(BOOL)arg1 ;
-(void)updateShmemEntry;
-(CFStringRef)debugDump;
-(void)lockedSync:(/*^block*/id)arg1 ;
-(int)validateMessage:(id)arg1 withNewKey:(id)arg2 newValue:(id)arg3 plistIsAvailableToRead:(BOOL)arg4 containerPath:(const char*)arg5 diagnosticMessage:(const char**)arg6 ;
-(id)acceptMessage:(id)arg1 ;
-(void)setManagedPreferencesUseContainer:(BOOL)arg1 ;
-(void)dealloc;
-(void)finishedNonRequestWriteWithError:(int)arg1 ;
-(CFStringRef)cloudConfigurationPath;
-(id)initWithDomain:(CFStringRef)arg1 userName:(CFStringRef)arg2 byHost:(BOOL)arg3 managed:(BOOL)arg4 shmemIndex:(short)arg5 daemon:(id)arg6 ;
-(unsigned long long)hash;
-(void)syncWriteToDiskAndFlushCacheForReason:(CFStringRef)arg1 ;
-(void)cacheActualPath;
-(CFStringRef)domain;
-(BOOL)managed;
-(void)lockedAsync:(/*^block*/id)arg1 ;
-(id)description;
-(void)observingConnectionWasInvalidated:(id)arg1 ;
-(/*^block*/id)createDiskWriteShouldPerformSynchronously:(BOOL*)arg1 ;
-(void)processEndOfMessageIntendingToRemoveSource:(BOOL*)arg1 ;
-(void)respondToFileWrittenToBehindOurBack;
-(BOOL)isEqual:(id)arg1 ;
-(void)setUncanonicalizedPathCached:(BOOL)arg1 ;
-(id)copyPropertyListWithoutDrainingPendingChangesValidatingPlist:(BOOL)arg1 ;
-(id)copyPropertyListValidatingPlist:(BOOL)arg1 ;
-(BOOL)byHost;
-(void)syncWriteToDisk;
-(void)drainPendingChanges;
-(BOOL)enqueueNewKey:(id)arg1 value:(id)arg2 encoding:(int)arg3 inBatch:(BOOL)arg4 ;
-(short)shmemIndex;
-(void)cleanUpAfterAcceptingMessage:(id)arg1 ;
@end

