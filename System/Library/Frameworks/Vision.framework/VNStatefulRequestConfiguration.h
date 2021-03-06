/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSUUID;

@interface VNStatefulRequestConfiguration : VNImageBasedRequestConfiguration {

	NSUUID* _requestUUID;
	SCD_Struct_VN51 _frameAnalysisSpacing;

}

@property (assign) SCD_Struct_VN51 frameAnalysisSpacing;              //@synthesize frameAnalysisSpacing=_frameAnalysisSpacing - In the implementation block
@property (readonly) NSUUID * requestUUID;                            //@synthesize requestUUID=_requestUUID - In the implementation block
-(NSUUID *)requestUUID;
-(id)initWithRequestClass:(Class)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_VN51)frameAnalysisSpacing;
-(void)setFrameAnalysisSpacing:(SCD_Struct_VN51)arg1 ;
@end

