/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFMessagePolicy.h>

@interface HMDXPCBackgroundMessagePolicy : HMFMessagePolicy {

	BOOL _requiresEntitlement;

}

@property (readonly) BOOL requiresEntitlement;              //@synthesize requiresEntitlement=_requiresEntitlement - In the implementation block
+(id)defaultPolicy;
+(id)policyWithEntitlementRequirement:(BOOL)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)requiresEntitlement;
-(id)__initWithEntitlementRequirement:(BOOL)arg1 ;
@end

