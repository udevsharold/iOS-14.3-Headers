/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMDBackingStoreModelBackedObjectProtocol.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSUUID, HMDActionSet, NSDictionary, NSString, NSArray;

@interface HMDAction : HMFObject <NSSecureCoding, HMDBackingStoreModelBackedObjectProtocol, HMDBackingStoreObjectProtocol, HMFLogging> {

	NSUUID* _uuid;
	HMDActionSet* _actionSet;

}

@property (assign,nonatomic,__weak) HMDActionSet * actionSet;                        //@synthesize actionSet=_actionSet - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uuid;                                   //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long type; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSString * stateDump; 
@property (readonly) BOOL requiresDeviceUnlock; 
@property (readonly) unsigned long long entitlementsForNotification; 
@property (copy,readonly) NSArray * associatedAccessories; 
@property (readonly) Class modelClass; 
@property (nonatomic,copy,readonly) NSUUID * modelIdentifier; 
@property (nonatomic,copy,readonly) NSUUID * modelParentIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2 ;
-(Class)modelClass;
-(id)init;
-(id)attributeDescriptions;
-(NSUUID *)modelIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(unsigned long long)type;
-(BOOL)requiresDeviceUnlock;
-(NSDictionary *)dictionaryRepresentation;
-(id)logIdentifier;
-(HMDActionSet *)actionSet;
-(void)setActionSet:(HMDActionSet *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)associatedAccessories;
-(BOOL)isAssociatedWithAccessory:(id)arg1 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)initWithUUID:(id)arg1 actionSet:(id)arg2 ;
-(NSString *)stateDump;
-(unsigned long long)entitlementsForNotification;
-(void)executeWithSource:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)configureWithHome:(id)arg1 ;
-(void)updateActionSetIfNil:(id)arg1 ;
-(id)modelBackedObjects;
-(NSUUID *)modelParentIdentifier;
-(id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
@end
