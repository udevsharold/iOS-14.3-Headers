/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <CoreData/NSXPCStoreServerRequestHandlingPolicy.h>

@class PLLimitedLibraryFetchFilter, PLAssetsdConnectionAuthorization, NSString, NSDictionary, NSNumber;

@interface PLXPCPhotoLibraryStoreServerRequestHandlingPolicy : NSXPCStoreServerRequestHandlingPolicy {

	PLLimitedLibraryFetchFilter* _fetchFilter;
	PLAssetsdConnectionAuthorization* _connectionAuthorization;
	NSString* _fetchFilterClientIdentifier;
	NSDictionary* _fetchFilterEntityNameToPredicateMap;
	NSNumber* _fetchFilterEnabledStatus;
	os_unfair_lock_s _fetchFilterLock;

}
-(id)_restrictedEntityNamesAllowedForContext:(id)arg1 ;
-(id)init;
-(id)initWithConnectionAuthorization:(id)arg1 ;
-(void)dealloc;
-(id)restrictingPullChangeHistoryPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2 ;
-(void)limitedLibraryFetchFiltersUpdated:(id)arg1 ;
-(id)restrictingWritePredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2 ;
-(id)_entityNamesAllowedByRestrictedDataEntitlements:(id)arg1 ;
-(BOOL)shouldAcceptConnectionsFromClientWithContext:(id)arg1 ;
-(id)restrictingReadPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2 ;
-(BOOL)shouldAcceptMetadataChangesFromClientWithContext:(id)arg1 ;
@end

