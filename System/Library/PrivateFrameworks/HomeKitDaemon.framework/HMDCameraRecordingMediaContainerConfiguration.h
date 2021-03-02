/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDCameraRecordingMediaContainer, HMDCameraRecordingMediaContainerParameters;

@interface HMDCameraRecordingMediaContainerConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	HMDCameraRecordingMediaContainer* _container;
	HMDCameraRecordingMediaContainerParameters* _parameters;

}

@property (nonatomic,copy,readonly) HMDCameraRecordingMediaContainer * container;                         //@synthesize container=_container - In the implementation block
@property (nonatomic,copy,readonly) HMDCameraRecordingMediaContainerParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(HMDCameraRecordingMediaContainerParameters *)parameters;
-(HMDCameraRecordingMediaContainer *)container;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_parseFromTLVData;
-(id)initWithMediaContainer:(id)arg1 containerParameters:(id)arg2 ;
@end
