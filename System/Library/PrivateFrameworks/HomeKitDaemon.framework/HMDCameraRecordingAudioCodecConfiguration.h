/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDCameraRecordingAudioCodec, HMDCameraRecordingAudioCodecParameters;

@interface HMDCameraRecordingAudioCodecConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	HMDCameraRecordingAudioCodec* _codec;
	HMDCameraRecordingAudioCodecParameters* _parameters;

}

@property (nonatomic,copy,readonly) HMDCameraRecordingAudioCodec * codec;                             //@synthesize codec=_codec - In the implementation block
@property (nonatomic,copy,readonly) HMDCameraRecordingAudioCodecParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(HMDCameraRecordingAudioCodec *)codec;
-(HMDCameraRecordingAudioCodecParameters *)parameters;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_parseFromTLVData;
-(id)initWithAudioCodec:(id)arg1 codecParameters:(id)arg2 ;
@end
