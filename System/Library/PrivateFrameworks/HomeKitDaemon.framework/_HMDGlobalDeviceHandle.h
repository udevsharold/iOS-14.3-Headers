/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/_HMDDeviceHandle.h>

@class HMDAccountHandle, NSData;

@interface _HMDGlobalDeviceHandle : _HMDDeviceHandle {

	HMDAccountHandle* _accountHandle;
	NSData* _pushToken;

}

@property (copy,readonly) HMDAccountHandle * accountHandle;              //@synthesize accountHandle=_accountHandle - In the implementation block
@property (copy,readonly) NSData * pushToken;                            //@synthesize pushToken=_pushToken - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isValidDestination:(id)arg1 ;
-(NSData *)pushToken;
-(id)destination;
-(id)initWithDestination:(id)arg1 ;
-(id)privateDescription;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isGlobal;
-(HMDAccountHandle *)accountHandle;
-(id)initWithPushToken:(id)arg1 accountHandle:(id)arg2 ;
@end

