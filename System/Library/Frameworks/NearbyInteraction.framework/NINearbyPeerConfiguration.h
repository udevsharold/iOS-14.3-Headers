/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearbyInteraction/NearbyInteraction-Structs.h>
#import <NearbyInteraction/NIConfiguration.h>

@class NIDiscoveryToken;

@interface NINearbyPeerConfiguration : NIConfiguration {

	NIDiscoveryToken* _peerDiscoveryToken;

}

@property (nonatomic,copy) NIDiscoveryToken * peerDiscoveryToken;              //@synthesize peerDiscoveryToken=_peerDiscoveryToken - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)descriptionInternal;
-(id)initWithPeerToken:(id)arg1 ;
-(NIDiscoveryToken *)peerDiscoveryToken;
-(void)setPeerDiscoveryToken:(NIDiscoveryToken *)arg1 ;
@end

