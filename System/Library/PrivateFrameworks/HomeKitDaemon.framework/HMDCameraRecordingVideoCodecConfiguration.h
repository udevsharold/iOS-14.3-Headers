/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDCameraRecordingVideoCodec, HMDCameraRecordingVideoCodecParameters, NSArray;

@interface HMDCameraRecordingVideoCodecConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	HMDCameraRecordingVideoCodec* _codec;
	HMDCameraRecordingVideoCodecParameters* _parameters;
	NSArray* _videoAttributes;

}

@property (nonatomic,copy,readonly) HMDCameraRecordingVideoCodec * codec;                             //@synthesize codec=_codec - In the implementation block
@property (nonatomic,copy,readonly) HMDCameraRecordingVideoCodecParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy,readonly) NSArray * videoAttributes;                                        //@synthesize videoAttributes=_videoAttributes - In the implementation block
+(BOOL)supportsSecureCoding;
-(HMDCameraRecordingVideoCodec *)codec;
-(HMDCameraRecordingVideoCodecParameters *)parameters;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)videoAttributes;
-(BOOL)_parseFromTLVData;
-(id)initWithCodec:(id)arg1 codecParameters:(id)arg2 videoAttributes:(id)arg3 ;
@end

