/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIDetector.h>

@class CIContext, NSMutableDictionary;

@interface CIRectangleDetector : CIDetector {

	CIContext* context;
	double _width;
	double _height;
	NSMutableDictionary* featureOptions;
	OpaqueVTPixelTransferSessionRef pixelTransferSession;
	CVBufferRef interimScaleBuffer;
	CVBufferRef scaleBuffer;
	SCD_Struct_CI34* CVMLFuncs;
	float* _perMeshPtr;
	vImage_Buffer* _internalBuffer;

}

@property (nonatomic,retain) CIContext * context; 
-(void)dealloc;
-(void)releaseResources;
-(void)setContext:(CIContext *)arg1 ;
-(void)finalize;
-(id)featuresInImage:(id)arg1 options:(id)arg2 ;
-(id)initWithContext:(id)arg1 options:(id)arg2 ;
-(id)featuresInImage:(id)arg1 ;
-(CIContext *)context;
@end

