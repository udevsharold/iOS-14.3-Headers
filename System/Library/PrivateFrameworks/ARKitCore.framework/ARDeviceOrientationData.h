/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARDictionaryCoding.h>
#import <ARKitCore/ARMetadataWrapperCoding.h>
#import <ARKitCore/ARMutableSensorData.h>
#import <ARKitCore/ARDaemonSecureCoding.h>

@class CMDeviceMotion, NSString;

@interface ARDeviceOrientationData : NSObject <ARDictionaryCoding, ARMetadataWrapperCoding, ARMutableSensorData, ARDaemonSecureCoding> {

	CMDeviceMotion* _deviceMotion;
	double _timestamp;
	SCD_Struct_AR94 _rotationMatrix;

}

@property (nonatomic,retain) CMDeviceMotion * deviceMotion;                   //@synthesize deviceMotion=_deviceMotion - In the implementation block
@property (assign,nonatomic) double timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR94 rotationMatrix;                  //@synthesize rotationMatrix=_rotationMatrix - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AR1 rotationMatrixENU; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(double)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDeviceMotion:(CMDeviceMotion *)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(CMDeviceMotion *)deviceMotion;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(SCD_Struct_AR94)rotationMatrix;
-(void)encodeWithCoder:(id)arg1 ;
-(id)encodeToDictionary;
-(id)encodeToMetadataWrapper;
-(id)initWithMetadataWrapper:(id)arg1 ;
-(void)setRotationMatrix:(SCD_Struct_AR94)arg1 ;
-(SCD_Struct_AR1)rotationMatrixENU;
@end

