/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDRemoteMessageDestination.h>

@class HMDAccountHandle, NSDictionary;

@interface HMDRemoteAccountHandleMessageDestination : HMDRemoteMessageDestination {

	BOOL _multicast;
	HMDAccountHandle* _handle;
	NSDictionary* _deviceCapabilities;

}

@property (copy,readonly) HMDAccountHandle * handle;                      //@synthesize handle=_handle - In the implementation block
@property (getter=isMulticast,readonly) BOOL multicast;                   //@synthesize multicast=_multicast - In the implementation block
@property (copy,readonly) NSDictionary * deviceCapabilities;              //@synthesize deviceCapabilities=_deviceCapabilities - In the implementation block
+(id)shortDescription;
-(id)initWithTarget:(id)arg1 ;
-(HMDAccountHandle *)handle;
-(unsigned long long)hash;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)deviceCapabilities;
-(id)debugDescription;
-(id)shortDescription;
-(id)remoteDestinationString;
-(id)initWithTarget:(id)arg1 handle:(id)arg2 multicast:(BOOL)arg3 ;
-(id)initWithTarget:(id)arg1 handle:(id)arg2 multicast:(BOOL)arg3 deviceCapabilities:(id)arg4 ;
-(BOOL)isMulticast;
@end

