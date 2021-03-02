/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDRemoteAccountHandleMessageDestination.h>

@class HMDAccount;

@interface HMDRemoteAccountMessageDestination : HMDRemoteAccountHandleMessageDestination {

	HMDAccount* _account;

}

@property (nonatomic,readonly) HMDAccount * account;              //@synthesize account=_account - In the implementation block
+(id)shortDescription;
-(HMDAccount *)account;
-(unsigned long long)hash;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(id)shortDescription;
-(id)remoteDestinationString;
-(id)initWithTarget:(id)arg1 handle:(id)arg2 multicast:(BOOL)arg3 deviceCapabilities:(id)arg4 ;
-(id)initWithTarget:(id)arg1 account:(id)arg2 multicast:(BOOL)arg3 ;
-(id)initWithTarget:(id)arg1 account:(id)arg2 multicast:(BOOL)arg3 deviceCapabilities:(id)arg4 ;
@end
