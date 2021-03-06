/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <QuartzCore/CAEAGLLayer.h>

@protocol TSDGLLayerContext, TSDGLLayerDelegate;
@class NSObject, EAGLContext, CADisplayLink;

@interface TSDGLLayer : CAEAGLLayer {

	id<TSDGLLayerContext> _layerContext;
	NSObject*<TSDGLLayerDelegate> _delegate;
	BOOL _setNeedsDisplay;
	EAGLContext* _sharedContext;
	BOOL _wasSharedContextCreated;
	CADisplayLink* _displayLink;

}

@property (assign) NSObject*<TSDGLLayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) EAGLContext * sharedContext;               //@synthesize sharedContext=_sharedContext - In the implementation block
-(void)stopAnimation;
-(void)startAnimation;
-(void)pauseAnimation;
-(void)unlock;
-(void)dealloc;
-(void)teardown;
-(void)resumeAnimation;
-(void)setDelegate:(NSObject*<TSDGLLayerDelegate>)arg1 ;
-(void)lock;
-(EAGLContext *)sharedContext;
-(NSObject*<TSDGLLayerDelegate>)delegate;
-(void)setSharedContext:(EAGLContext *)arg1 ;
-(void)setCurrentContext;
-(void)p_drawFrameAtLayerTime:(double)arg1 ;
-(void)p_drawFrameFromDisplayLink:(id)arg1 ;
-(void)displayAtCurrentLayerTime;
-(id)initWithFrame:(CGRect)arg1 isOpaque:(BOOL)arg2 delegate:(id)arg3 sharedContext:(id)arg4 isWideGamut:(BOOL)arg5 ;
@end

