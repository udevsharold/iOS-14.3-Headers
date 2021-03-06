/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/STSyncableSubObject.h>

@class NSSet, NSString, STUserDeviceState;

@interface STCoreDevice : NSManagedObject <STSyncableSubObject>

@property (nonatomic,retain) NSSet * userDeviceAddresses; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) short platform; 
@property (nonatomic,retain) STUserDeviceState * localUserDeviceState; 
@property (nonatomic,retain) NSSet * userDeviceStates; 
@property (nonatomic,retain) NSSet * usages; 
@property (readonly) id<STSerializableManagedObject> syncableRootObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchRequestForOrphanedDevices;
+(id)fetchOrCreateDeviceWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchOrCreateLocalDeviceInContext:(id)arg1 error:(id*)arg2 ;
+(id)fetchDeviceWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id<STSerializableManagedObject>)syncableRootObject;
@end

