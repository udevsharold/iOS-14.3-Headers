/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearbyInteraction/NearbyInteraction-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NIDiscoveryToken, NSString;

@interface NINearbyObject : NSObject <NSCopying, NSSecureCoding> {

	float _distance;
	float _azimuth;
	float _elevation;
	NIDiscoveryToken* _discoveryToken;
	unsigned long long _relationship;
	NSString* _deviceIdentifer;
	 _direction;
	SCD_Struct_NI7 _quaternion;

}

@property (nonatomic,copy) NIDiscoveryToken * discoveryToken;              //@synthesize discoveryToken=_discoveryToken - In the implementation block
@property (assign,nonatomic) float distance;                               //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic)  direction;                                   //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) SCD_Struct_NI7 quaternion;                    //@synthesize quaternion=_quaternion - In the implementation block
@property (assign,nonatomic) float azimuth;                                //@synthesize azimuth=_azimuth - In the implementation block
@property (assign,nonatomic) float elevation;                              //@synthesize elevation=_elevation - In the implementation block
@property (assign,nonatomic) unsigned long long relationship;              //@synthesize relationship=_relationship - In the implementation block
@property (copy) NSString * deviceIdentifer;                               //@synthesize deviceIdentifer=_deviceIdentifer - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
-(void)setDirection:;
-(id)init;
-(float)distance;
-(void)setQuaternion:(SCD_Struct_NI7)arg1 ;
-(void)setDistance:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-()direction;
-(unsigned long long)relationship;
-(void)setRelationship:(unsigned long long)arg1 ;
-(id)initWithToken:(id)arg1 ;
-(unsigned long long)hash;
-(void)setAzimuth:(float)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(float)azimuth;
-(SCD_Struct_NI7)quaternion;
-(void)encodeWithCoder:(id)arg1 ;
-(float)elevation;
-(void)setElevation:(float)arg1 ;
-(NIDiscoveryToken *)discoveryToken;
-(NSString *)deviceIdentifer;
-(id)initWithNearbyObject:(id)arg1 ;
-(void)setDiscoveryToken:(NIDiscoveryToken *)arg1 ;
-(void)setDeviceIdentifer:(NSString *)arg1 ;
@end

