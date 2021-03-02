/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDEvent.h>
#import <libobjc.A.dylib/HMDLocationDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLRegion, NSString;

@interface HMDLocationEvent : HMDEvent <HMDLocationDelegate, NSSecureCoding> {

	CLRegion* _region;

}

@property (nonatomic,retain) CLRegion * region;                           //@synthesize region=_region - In the implementation block
@property (nonatomic,copy,readonly) CLRegion * uniqueRegion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(void)setRegion:(CLRegion *)arg1 ;
-(CLRegion *)region;
-(void)_registerForMessages;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)dumpState;
-(BOOL)isActive;
-(void)encodeWithCoder:(id)arg1 ;
-(id)emptyModelObject;
-(void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)_transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(BOOL)_activate:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)createPayload;
-(id)initWithModel:(id)arg1 home:(id)arg2 ;
-(void)_handleUpdateRequest:(id)arg1 ;
-(id)analyticsTriggerEventData;
-(void)_handleRetrieveLocationEventForEventTrigger:(id)arg1 ;
-(void)_handleLocationEventOccured:(id)arg1 ;
-(void)fmfStatusUpdateNotification:(id)arg1 ;
-(void)checkFMFStatus:(id)arg1 ;
-(CLRegion *)uniqueRegion;
-(void)informLocationEventOccuranceToResident;
-(void)locationEventOccured;
-(void)didEnterRegion:(id)arg1 ;
-(void)didExitRegion:(id)arg1 ;
@end
