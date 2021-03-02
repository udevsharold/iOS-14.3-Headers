/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDRemoteMessageDestination.h>

@class HMDDevice, HMDDeviceHandle;

@interface HMDRemoteDeviceMessageDestination : HMDRemoteMessageDestination {

	HMDDevice* _device;
	HMDDeviceHandle* _preferredHandle;

}

@property (nonatomic,copy) HMDDeviceHandle * preferredHandle;              //@synthesize preferredHandle=_preferredHandle - In the implementation block
@property (nonatomic,readonly) HMDDevice * device;                         //@synthesize device=_device - In the implementation block
+(id)shortDescription;
-(id)initWithTarget:(id)arg1 ;
-(HMDDeviceHandle *)preferredHandle;
-(void)setPreferredHandle:(HMDDeviceHandle *)arg1 ;
-(HMDDevice *)device;
-(unsigned long long)hash;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(id)shortDescription;
-(id)initWithTarget:(id)arg1 device:(id)arg2 ;
-(id)remoteDestinationString;
@end
