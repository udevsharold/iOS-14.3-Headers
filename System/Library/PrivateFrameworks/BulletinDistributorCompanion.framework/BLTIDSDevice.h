/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BLTAbstractIDSDevice.h>

@class IDSDevice, NSString;

@interface BLTIDSDevice : NSObject <BLTAbstractIDSDevice> {

	IDSDevice* _device;

}

@property (nonatomic,readonly) BOOL isDefaultPairedDevice; 
@property (nonatomic,readonly) BOOL isNearby; 
@property (nonatomic,readonly) BOOL isConnected; 
@property (nonatomic,readonly) BOOL isCloudReachable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isNearby;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)dealloc;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(id)initWithIDSDevice:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)isConnected;
-(BOOL)isDefaultPairedDevice;
-(BOOL)isCloudReachable;
@end

