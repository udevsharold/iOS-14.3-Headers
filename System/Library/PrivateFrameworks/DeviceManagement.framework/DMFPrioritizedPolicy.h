/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DMFPrioritizedPolicy : NSObject {

	long long _priority;
	long long _policy;

}

@property (assign,nonatomic) long long priority;              //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) long long policy;                //@synthesize policy=_policy - In the implementation block
+(id)prioritizedPoliciesForAppPolicy:(id)arg1 bundleIdentifiers:(id)arg2 categoryPolicy:(id)arg3 categoryIdentifiers:(id)arg4 webPolicy:(id)arg5 webDomains:(id)arg6 ;
+(long long)arbitratePolicyForPrioritizedPolicies:(id)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)setPolicy:(long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(long long)policy;
-(id)initWithEffectivePolicy:(id)arg1 identifier:(id)arg2 ;
-(BOOL)isEqualToPrioritizedPolicy:(id)arg1 ;
-(long long)priority;
@end

