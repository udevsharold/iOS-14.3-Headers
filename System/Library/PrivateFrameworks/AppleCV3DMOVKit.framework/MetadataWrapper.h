/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MetadataWrapper : NSObject
+(id)version;
+(id)encodeAccelerometerData:(id)arg1 andAdditionalData:(id)arg2 ;
+(id)decodeAccel:(id)arg1 ;
+(id)encodeCoreLocationData:(id)arg1 timestamp:(double)arg2 andAdditionalData:(id)arg3 ;
+(id)decodeCLLocation:(id)arg1 timestamp:(double*)arg2 ;
+(id)encodeDeviceMotionData:(id)arg1 andAdditionalData:(id)arg2 ;
+(id)decodeCMDeviceMotion:(id)arg1 ;
+(id)encodeGyroscopeData:(id)arg1 andAdditionalData:(id)arg2 ;
+(id)decodeGyro:(id)arg1 ;
+(id)encodeDictionary:(id)arg1 ;
+(id)decodeNSCoderObject:(id)arg1 classes:(id)arg2 ;
+(id)encodeNSCoderObject:(id)arg1 ;
+(id)decodeCVACalibration:(id)arg1 ;
+(id)accelerometerTrackName:(long long*)arg1 ;
+(id)gyroTrackName:(long long*)arg1 ;
+(id)compassTrackName:(long long*)arg1 ;
+(id)decodeCompass:(id)arg1 ;
+(id)alsTrackName:(long long*)arg1 ;
+(id)decodeALS:(id)arg1 ;
+(id)decodeMotion:(id)arg1 ;
+(id)decodeCLLocation:(id)arg1 ;
+(id)decodeCMData:(id)arg1 ;
+(id)decodeCVAUserEvent:(id)arg1 ;
+(id)decodePRDevice:(id)arg1 ;
+(id)decodeCVAFeatureBuffer:(id)arg1 ;
+(id)decodeCVADepthTOF:(id)arg1 ;
+(id)decodeCVACameraCalibrationData:(id)arg1 ;
+(id)decodeDictionary:(id)arg1 ;
+(id)decodeClass:(id)arg1 class:(Class)arg2 ;
+(id)encodeCVACalibration:(id)arg1 ;
+(id)encodeALSData:(id)arg1 ;
+(id)encodeCompassData:(id)arg1 ;
+(id)encodeCMData:(id)arg1 ;
+(id)encodeCVAUserEvent:(id)arg1 ;
+(id)encodePRDevice:(id)arg1 ;
+(id)encodeCVAFeatureBuffer:(id)arg1 ;
+(id)encodeCVADepthTOF:(id)arg1 ;
+(id)encodeCVACameraCalibrationData:(id)arg1 ;
+(id)encodeClass:(id)arg1 andAdditionalData:(id)arg2 ;
+(id)decodeClass:(id)arg1 class:(Class)arg2 error:(id*)arg3 ;
+(id)decodeCommon:(id)arg1 ;
+(id)decodeNSCoderObject:(id)arg1 class:(Class)arg2 ;
+(id)decodeNSCoderObject:(id)arg1 class:(Class)arg2 error:(id*)arg3 ;
+(id)decodeNSCoderObject:(id)arg1 classes:(id)arg2 error:(id*)arg3 ;
+(BOOL)locationFromTrackName:(id)arg1 location:(long long*)arg2 ;
+(id)encodeMotionData:(id)arg1 andAdditionalData:(id)arg2 ;
+(id)decodeLocationDict:(id)arg1 ;
@end
