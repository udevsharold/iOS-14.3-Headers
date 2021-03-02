/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNFaceDetector.h>

@class VNFaceBBoxAligner;

@interface VNFaceDetectorRevision2 : VNFaceDetector {

	shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector_v2>* _faceDetector;
	VNFaceBBoxAligner* _faceBBoxAligner;

}
+(id)configurationOptionKeysForDetectorKey;
-(void)purgeIntermediates;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(BOOL)completeInitializationForSession:(id)arg1 error:(id*)arg2 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
@end
