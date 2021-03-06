/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearbyInteraction/NearbyInteraction-Structs.h>
#import <NearbyInteraction/NIConfiguration.h>

@class NIDiscoveryToken, NSDictionary;

@interface _NIWiFiRangingTestConfiguration : NIConfiguration {

	NIDiscoveryToken* _peerDiscoveryToken;
	NSDictionary* _parameters;

}

@property (nonatomic,copy,readonly) NIDiscoveryToken * peerDiscoveryToken;              //@synthesize peerDiscoveryToken=_peerDiscoveryToken - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters;                               //@synthesize parameters=_parameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)parameters;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)descriptionInternal;
-(NIDiscoveryToken *)peerDiscoveryToken;
-(id)initWithDiscoveryToken:(id)arg1 wifiRangingParameters:(id)arg2 ;
@end

