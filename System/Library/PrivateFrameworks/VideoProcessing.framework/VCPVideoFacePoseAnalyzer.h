/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPCNNFaceLandmarkDetector, VCPPnPSolver, VCPVideoFacePoseFilter;

@interface VCPVideoFacePoseAnalyzer : NSObject {

	VCPCNNFaceLandmarkDetector* _landmarkDetector;
	VCPPnPSolver* _poseEstimator;
	VCPVideoFacePoseFilter* _filter;
	float _focalLengthInPixels;
	SCD_Struct_VC6 _lastTimestamp;
	int _width;
	int _height;
	float _points2D[14];
	float _points3D[21];
	SCD_Struct_VC45 _pose;

}

@property (assign) SCD_Struct_VC45 pose;              //@synthesize pose=_pose - In the implementation block
-(SCD_Struct_VC45)pose;
-(BOOL)updateFocalLengthInPixels:(float)arg1 ;
-(id)init;
-(void)setPose:(SCD_Struct_VC45)arg1 ;
-(id)initWithFocalLengthInPixels:(float)arg1 ;
-(int)analyzeFrameForPose:(CVBufferRef)arg1 withFaceRect:(CGRect)arg2 withTimestamp:(SCD_Struct_VC6)arg3 ;
@end
