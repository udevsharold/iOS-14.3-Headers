/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PubSub.framework/PubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PubSub/PSSubscription.h>

@class NSUUID;

@interface PSRemoteSubscription : PSSubscription {

	NSUUID* _remoteDeviceIdentifier;

}

@property (copy,readonly) NSUUID * remoteDeviceIdentifier;              //@synthesize remoteDeviceIdentifier=_remoteDeviceIdentifier - In the implementation block
-(NSUUID *)remoteDeviceIdentifier;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTopic:(id)arg1 filters:(id)arg2 conditionals:(id)arg3 remoteDeviceIdentifier:(id)arg4 ;
@end
