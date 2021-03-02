/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID;

@interface HMDAccessoryReachabilityElectionParameter : HMFObject {

	BOOL _reachable;
	NSUUID* _identifier;

}

@property (copy,readonly) NSUUID * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (getter=isReachable,readonly) BOOL reachable;              //@synthesize reachable=_reachable - In the implementation block
-(id)init;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(unsigned long long)hash;
-(NSUUID *)identifier;
-(BOOL)isReachable;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
