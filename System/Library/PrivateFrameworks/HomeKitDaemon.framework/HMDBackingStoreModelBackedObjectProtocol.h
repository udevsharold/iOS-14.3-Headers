/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID;


@protocol HMDBackingStoreModelBackedObjectProtocol <NSObject>
@property (readonly) Class modelClass; 
@property (nonatomic,copy,readonly) NSUUID * modelIdentifier; 
@property (nonatomic,copy,readonly) NSUUID * modelParentIdentifier; 
@optional
-(BOOL)isBackingStorageEqual:(id)arg1;
-(id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id*)arg3;

@required
-(Class)modelClass;
-(NSUUID *)modelIdentifier;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
-(id)modelBackedObjects;
-(NSUUID *)modelParentIdentifier;
-(id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;

@end
