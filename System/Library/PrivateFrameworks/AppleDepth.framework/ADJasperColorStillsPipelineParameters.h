/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleDepth/ADPipelineParameters.h>

@class ADJasperPointCloudFilterParamaters;

@interface ADJasperColorStillsPipelineParameters : ADPipelineParameters {

	ADJasperPointCloudFilterParamaters* _pointCloudFilter;
	ADJasperPointCloudFilterParamaters* _pointCloudFilterForTransformCorrection;

}

@property (nonatomic,retain) ADJasperPointCloudFilterParamaters * pointCloudFilter;                                    //@synthesize pointCloudFilter=_pointCloudFilter - In the implementation block
@property (nonatomic,retain) ADJasperPointCloudFilterParamaters * pointCloudFilterForTransformCorrection;              //@synthesize pointCloudFilterForTransformCorrection=_pointCloudFilterForTransformCorrection - In the implementation block
-(id)init;
-(ADJasperPointCloudFilterParamaters *)pointCloudFilter;
-(void)setPointCloudFilter:(ADJasperPointCloudFilterParamaters *)arg1 ;
-(ADJasperPointCloudFilterParamaters *)pointCloudFilterForTransformCorrection;
-(void)setPointCloudFilterForTransformCorrection:(ADJasperPointCloudFilterParamaters *)arg1 ;
@end
