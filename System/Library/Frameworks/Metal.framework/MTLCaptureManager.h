/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLCaptureScope;
@interface MTLCaptureManager : NSObject {

	BOOL _isCapturing;
	id<MTLCaptureScope> _defaultCaptureScope;

}

@property (retain) id<MTLCaptureScope> defaultCaptureScope;              //@synthesize defaultCaptureScope=_defaultCaptureScope - In the implementation block
@property (readonly) BOOL isCapturing;                                   //@synthesize isCapturing=_isCapturing - In the implementation block
+(id)sharedCaptureManager;
-(void)startCaptureWithCommandQueue:(id)arg1 ;
-(id)newCaptureScopeWithCommandQueue:(id)arg1 ;
-(BOOL)startCaptureWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(BOOL)isCapturing;
-(void)dealloc;
-(BOOL)supportsDestination:(long long)arg1 ;
-(void)setDefaultCaptureScope:(id<MTLCaptureScope>)arg1 ;
-(id)newCaptureScopeWithDevice:(id)arg1 ;
-(id<MTLCaptureScope>)defaultCaptureScope;
-(void)stopCapture;
-(void)startCaptureWithScope:(id)arg1 ;
-(void)startCaptureWithDevice:(id)arg1 ;
@end
