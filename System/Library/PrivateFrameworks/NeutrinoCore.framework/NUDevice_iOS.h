/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUDevice.h>

@class NURenderer;

@interface NUDevice_iOS : NUDevice {

	NURenderer* _renderer;

}
-(unsigned long long)family;
-(id)debugDescription;
-(id)initWithName:(id)arg1 ;
-(BOOL)hasOpenGLSupport;
-(long long)_defaultSampleMode;
-(long long)_openGLVirtualScreen;
-(id)_newRenderer:(out id*)arg1 ;
-(id)_lowPriorityRenderer:(out id*)arg1 ;
-(id)_newNoIntermediatesRenderer:(out id*)arg1 ;
-(id)_newLowPriorityNoIntermediatesRenderer:(out id*)arg1 ;
-(id)_newRendererWithOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_newMetalRendererWithOptions:(id)arg1 ;
-(id)_newOpenGLRendererWithOptions:(id)arg1 error:(out id*)arg2 ;
@end

