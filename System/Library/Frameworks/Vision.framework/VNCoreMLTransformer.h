/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@class VNCoreMLModel;

@interface VNCoreMLTransformer : VNDetector {

	VNCoreMLModel* _model;

}

@property (readonly) VNCoreMLModel * model;              //@synthesize model=_model - In the implementation block
-(VNCoreMLModel *)model;
-(BOOL)needsMetalContext;
-(id)initWithOptions:(id)arg1 model:(id)arg2 error:(id*)arg3 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
@end

