/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKRenderLoopDelegate;
@class CADisplayLink;

@interface PKRenderLoop : NSObject {

	CADisplayLink* _displayLink;
	BOOL _effectivePaused;
	BOOL _background;
	BOOL _invalidated;
	BOOL _drawing;
	BOOL _inApplicationContext;
	BOOL _paused;
	long long _preferredFramesPerSecond;
	id<PKRenderLoopDelegate> _delegate;

}

@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated;               //@synthesize invalidated=_invalidated - In the implementation block
@property (getter=isDrawing,nonatomic,readonly) BOOL drawing;                       //@synthesize drawing=_drawing - In the implementation block
@property (assign,nonatomic) BOOL inApplicationContext;                             //@synthesize inApplicationContext=_inApplicationContext - In the implementation block
@property (assign,nonatomic) long long preferredFramesPerSecond;                    //@synthesize preferredFramesPerSecond=_preferredFramesPerSecond - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                           //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic,__weak) id<PKRenderLoopDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(id)init;
-(void)_drawAtTime:(double)arg1 ;
-(void)dealloc;
-(void)setInApplicationContext:(BOOL)arg1 ;
-(void)attachToScreen:(id)arg1 ;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)isInvalidated;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(BOOL)isPaused;
-(void)setDelegate:(id<PKRenderLoopDelegate>)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(long long)preferredFramesPerSecond;
-(BOOL)isDrawing;
-(void)_didDraw;
-(void)invalidate;
-(id<PKRenderLoopDelegate>)delegate;
-(void)_drawWithDisplayLink:(id)arg1 ;
-(void)_updateEffectivePausedState;
-(void)_willDraw;
-(BOOL)_subclassPreferredPauseState;
-(BOOL)inApplicationContext;
@end

