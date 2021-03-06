/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOExperimentServerProxyDelegate.h>

@protocol GEOExperimentServerProxy;
@class GEOABAssignmentResponse, NSMutableArray, NSString;

@interface GEOExperimentConfiguration : NSObject <GEOExperimentServerProxyDelegate> {

	id<GEOExperimentServerProxy> _serverProxy;
	GEOABAssignmentResponse* _experimentsInfo;
	os_unfair_lock_s _experimentsInfoLock;
	NSMutableArray* _experimentObservers;
	os_unfair_lock_s _experimentObserversLock;

}

@property (nonatomic,readonly) GEOABAssignmentResponse * experimentsInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)useProxy:(Class)arg1 ;
+(id)sharedConfiguration;
-(void)refreshDatasetABStatus:(id)arg1 ;
-(void)serverProxy:(id)arg1 didChangeExperimentsInfo:(id)arg2 ;
-(id)_debug_datasetId;
-(id)init;
-(void)_debug_setCustomQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3 ;
-(void)_debug_setBucketIdDictionaryRepresentation:(id)arg1 ;
-(id)detailedDescription;
-(void)dealloc;
-(id)_debug_bucketId;
-(void)_debug_fetchAllAvailableExperiments:(/*^block*/id)arg1 ;
-(void)abAssignUUIDWithSyncCompletionHandler:(/*^block*/id)arg1 ;
-(id)experimentAssignments;
-(id)_reportAProblemClientMetadata;
-(void)removeExperimentObserver:(id)arg1 ;
-(id)experimentURLForURL:(id)arg1 requestKind:(SCD_Struct_GE91)arg2 ;
-(id)_debug_customQuerySubstringForType:(long long)arg1 dispatcherRequestType:(int)arg2 ;
-(void)_debug_forceUpdate;
-(id)_mapsAbClientMetadata;
-(id)detailedDescriptionDictionaryRepresentation;
-(void)abAssignUUIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)clientConfigurationValueForKey:(id)arg1 ;
-(void)updateURLComponents:(id)arg1 forRequestKind:(SCD_Struct_GE91)arg2 ;
-(id)_parsecClientMetadata;
-(void)_fetchAllAvailableExperimentsResponse:(/*^block*/id)arg1 ;
-(void)_setActiveExperimentBranchDictionaryRepresentation:(id)arg1 ;
-(id)_siriClientMetadata;
-(void)_debug_forEachExperimentType:(/*^block*/id)arg1 ;
-(id)clientConfig;
-(void)_debug_setActiveExperimentBranch:(id)arg1 ;
-(void)addExperimentObserver:(id)arg1 queue:(id)arg2 ;
-(id)_debug_configurationDate;
-(GEOABAssignmentResponse *)experimentsInfo;
@end

