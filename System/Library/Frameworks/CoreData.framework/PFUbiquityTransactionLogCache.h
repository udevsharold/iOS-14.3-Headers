/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSRecursiveLock, PFUbiquityGlobalObjectIDCache;

@interface PFUbiquityTransactionLogCache : NSObject {

	NSString* _localPeerID;
	NSMutableDictionary* _transactionLogCache;
	NSRecursiveLock* _transactionLogCacheLock;
	PFUbiquityGlobalObjectIDCache* _gidCache;

}
-(id)init;
-(void)dealloc;
-(void)cacheExportedLog:(id)arg1 ;
-(id)initWithLocalPeerID:(id)arg1 andGlobalIDCache:(id)arg2 ;
-(id)retainedCachedLogForLocation:(id)arg1 loadWithRetry:(BOOL)arg2 error:(id*)arg3 ;
-(void)removeLogsCachedForStoreNamed:(id)arg1 withUbiquityRootLocation:(id)arg2 ;
@end
