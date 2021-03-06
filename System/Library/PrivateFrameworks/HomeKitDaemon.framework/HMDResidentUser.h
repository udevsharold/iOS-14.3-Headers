/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDUser.h>

@class HMDDevice;

@interface HMDResidentUser : HMDUser {

	HMDDevice* _device;
	unsigned long long _configurationState;

}

@property (assign) unsigned long long configurationState;              //@synthesize configurationState=_configurationState - In the implementation block
@property (readonly) HMDDevice * device;                               //@synthesize device=_device - In the implementation block
@property (getter=isBlocked,readonly) BOOL blocked; 
+(BOOL)supportsSecureCoding;
-(BOOL)isBlocked;
-(id)deviceIdentifier;
-(HMDDevice *)device;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithModelObject:(id)arg1 ;
-(unsigned long long)configurationState;
-(id)userID;
-(void)setConfigurationState:(unsigned long long)arg1 ;
-(void)setDevice:(HMDDevice *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)displayName;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)configureWithHome:(id)arg1 ;
-(BOOL)refreshDisplayName;
-(id)initWithDevice:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 configurationState:(unsigned long long)arg4 ;
-(BOOL)requiresMakoSupport;
-(id)legacyUser;
-(BOOL)updateWithDevice:(id)arg1 ;
-(void)registerIdentity;
-(id)encodingRemoteDisplayName;
@end

