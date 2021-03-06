/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FigDepthDataCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration, FigMetadataObjectCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedDepthDataSinkConfiguration : NSObject {

	FigDepthDataCaptureConnectionConfiguration* _depthDataConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoDataConnectionConfiguration;
	FigMetadataObjectCaptureConnectionConfiguration* _metadataObjectConnectionConfiguration;

}

@property (nonatomic,readonly) FigDepthDataCaptureConnectionConfiguration * depthDataConnectionConfiguration;                        //@synthesize depthDataConnectionConfiguration=_depthDataConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * videoDataConnectionConfiguration;                            //@synthesize videoDataConnectionConfiguration=_videoDataConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigMetadataObjectCaptureConnectionConfiguration * metadataObjectConnectionConfiguration;              //@synthesize metadataObjectConnectionConfiguration=_metadataObjectConnectionConfiguration - In the implementation block
-(FigVideoCaptureConnectionConfiguration *)videoDataConnectionConfiguration;
-(FigMetadataObjectCaptureConnectionConfiguration *)metadataObjectConnectionConfiguration;
-(void)dealloc;
-(FigDepthDataCaptureConnectionConfiguration *)depthDataConnectionConfiguration;
-(id)initWithDepthDataConnectionConfiguration:(id)arg1 videoDataConnectionConfiguration:(id)arg2 metadataObjectConnectionConfiguration:(id)arg3 ;
@end

