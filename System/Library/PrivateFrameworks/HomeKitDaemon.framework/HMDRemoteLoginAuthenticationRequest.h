/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMRemoteLoginMessage.h>

@interface HMDRemoteLoginAuthenticationRequest : HMRemoteLoginMessage {

	unsigned long long _targetedAccountType;

}

@property (assign,nonatomic) unsigned long long targetedAccountType;              //@synthesize targetedAccountType=_targetedAccountType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)messageName;
+(id)objWithDict:(id)arg1 ;
+(id)objWithMessage:(id)arg1 ;
+(id)xpcMessageName;
-(id)messagePayload;
-(id)messageName;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)xpcMessageName;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTargetedAccountType:(unsigned long long)arg1 ;
-(unsigned long long)targetedAccountType;
@end

