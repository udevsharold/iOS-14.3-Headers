/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <libobjc.A.dylib/FBSServiceFacilityManaging.h>

@class BSServiceDomainSpecification, BSServiceConnectionListener, NSMutableDictionary, NSMutableSet, NSString;

@interface FBServiceFacilityServer : NSObject <BSServiceConnectionListenerDelegate, FBSServiceFacilityManaging> {

	os_unfair_lock_s _lock;
	BSServiceDomainSpecification* _domain;
	BSServiceConnectionListener* _serviceListener;
	NSMutableDictionary* _lock_facilitiesByIdentifier;
	NSMutableSet* _lock_completedMilestones;
	NSMutableDictionary* _lock_suspendedFacilitiesByIdentifier;
	NSMutableSet* _lock_pendingConnects;

}

@property (nonatomic,readonly) BSServiceDomainSpecification * domain;              //@synthesize domain=_domain - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)run;
-(void)noteMilestoneReached:(id)arg1 ;
-(id)init;
-(void)removeFacility:(id)arg1 ;
-(void)dealloc;
-(BSServiceDomainSpecification *)domain;
-(BOOL)_lock_areFacilityPrerequisitesSatisfied:(id)arg1 ;
-(void)addFacility:(id)arg1 ;
-(id)_initWithDomain:(id)arg1 ;
-(void)_facilityQueue_facility:(id)arg1 handleMessage:(id)arg2 client:(id)arg3 ;
-(void)_lock_evaluateSuspendedFacility:(id)arg1 ;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
@end

