/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDAccessoryAdvertisement.h>
#import <libobjc.A.dylib/HMDWACAccessoryAssociation.h>

@protocol HMFLocking;
@class HMDMediaOutputDevice;

@interface HMDMediaAccessoryAdvertisement : HMDAccessoryAdvertisement <HMDWACAccessoryAssociation> {

	id<HMFLocking> _lock;
	BOOL _associated;
	HMDMediaOutputDevice* _outputDevice;

}

@property (retain) HMDMediaOutputDevice * outputDevice;              //@synthesize outputDevice=_outputDevice - In the implementation block
@property (getter=isAssociated) BOOL associated;                     //@synthesize associated=_associated - In the implementation block
+(BOOL)canAirPortExpressSupportMediaAccessory:(id)arg1 ;
-(id)initWithOutputDevice:(id)arg1 ;
-(long long)associationOptions;
-(BOOL)isAssociated;
-(id)description;
-(void)setAssociated:(BOOL)arg1 ;
-(HMDMediaOutputDevice *)outputDevice;
-(void)setOutputDevice:(HMDMediaOutputDevice *)arg1 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 ;
-(BOOL)matchesWACDeviceID:(id)arg1 ;
@end
