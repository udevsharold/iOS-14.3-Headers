/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class PVVideoCompositingContext;

@interface PVCameraPreviewRenderer : NSObject {

	HGRef<PVRenderManager>* _renderManager;
	HGRef<HGRenderJob>* _currentRenderJob;
	PVVideoCompositingContext* _compositingContext;

}
-(id)init;
-(void)dealloc;
-(HGRef<HGGLContext>*)rootContext;
-(HGRef<PVRenderManager>*)renderManager;
-(void)enqueueRenderRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)getSharedEAGLContext;
@end

