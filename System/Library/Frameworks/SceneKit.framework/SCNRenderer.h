/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/SCNSceneRenderer.h>
#import <libobjc.A.dylib/SCNTechniqueSupport.h>

@protocol OS_dispatch_queue, MTLTexture, SCNSceneRenderer;
@class SCNScene, SCNNode, SKScene, MTLRenderPassDescriptor, AVAudioEngine, AVAudioEnvironmentNode, SCNTechnique, SCNRecursiveLock, NSObject, NSArray, SCNRendererTransitionContext, EAGLContext, SCNMTLRenderContext, UIColor, __SKSCNRenderer, SCNAuthoringEnvironment, NSString;

@interface SCNRenderer : NSObject <SCNSceneRenderer, SCNTechniqueSupport> {

	SCNScene* _scene;
	SCNNode* _pointOfView;
	SCNNode* _pointOfCulling;
	SCNRecursiveLock* _lock;
	NSObject*<OS_dispatch_queue> __renderingQueue;
	unsigned long long __antialiasingMode;
	unsigned long long __preparePixelFormat;
	SCD_Struct_SC103* _framebufferInfo;
	id<MTLTexture> _mtlTexture;
	NSArray* _viewPoints;
	BOOL _pointOfViewWasSet;
	unsigned _shouldDeleteFramebuffer : 1;
	unsigned _rendersContinuously : 1;
	unsigned _isPrivateRenderer : 1;
	unsigned _isViewPrivateRenderer : 1;
	unsigned _renderingSnapshot : 1;
	unsigned _renderingPrepare : 1;
	unsigned _autoUpdate : 1;
	unsigned _disableLinearRendering : 1;
	double _currentSceneTime;
	double _currentSystemTime;
	double _deltaTime;
	double _forceSystemTime;
	double _lastSystemTime;
	double __nextFrameTime;
	SCNRendererTransitionContext* _transitionContext;
	BOOL _playing;
	BOOL _loops;
	BOOL _isAnimating;
	unsigned _adaptativeState0;
	unsigned _adaptativeEndFrame;
	unsigned _adaptativeTechniqueTimeStamp;
	id _delegate;
	C3DEngineContextRef _engineContext;
	unsigned long long _renderingAPI;
	SCNVector4 __viewport;
	double __aspectRatio;
	 __drawableSafeAreaInsets;
	EAGLContext* _glContext;
	SCNMTLRenderContext* _renderContext;
	unsigned _jitteringEnabled : 1;
	unsigned _temporalAntialiasingEnabled : 1;
	unsigned _frozen : 1;
	unsigned _shouldForwardSceneRendererDelegationMessagesToSelf : 1;
	unsigned _shouldForwardSceneRendererDelegationMessagesToPrivateRendererOwner : 1;
	SCD_Struct_SC104 _selfDelegationConformance;
	SCD_Struct_SC104 _privateRendererOwnerDelegationConformance;
	SCD_Struct_SC104 _delegationConformance;
	UIColor* _backgroundColor;
	C3DColor4 _c3dBackgroundColor;
	SCNRenderer* _preloadRenderer;
	id<SCNSceneRenderer> _privateRendererOwner;
	SCNTechnique* _technique;
	SCNRenderer* _snapshotRenderer;
	__SKSCNRenderer* _overlayRenderer;
	id _overlayScene;
	BOOL _disableOverlays;
	float _contentScaleFactor;
	BOOL _isRunningInExtension;
	SCNAuthoringEnvironment* _authoringEnvironment;
	unsigned long long _debugOptions;
	BOOL _showStatistics;
	BOOL _showAuthoringEnvironment;
	double _statisticsTimeStamp;

}

@property (nonatomic,retain) SCNScene * scene; 
@property (nonatomic,readonly) double nextFrameTime; 
@property (assign,nonatomic) double sceneTime; 
@property (assign,nonatomic,__weak) id<SCNSceneRendererDelegate> delegate; 
@property (getter=isPlaying) BOOL playing; 
@property (assign,nonatomic) BOOL loops; 
@property (nonatomic,retain) SCNNode * pointOfView; 
@property (assign,nonatomic) BOOL autoenablesDefaultLighting; 
@property (assign,getter=isJitteringEnabled,nonatomic) BOOL jitteringEnabled; 
@property (assign,getter=isTemporalAntialiasingEnabled,nonatomic) BOOL temporalAntialiasingEnabled; 
@property (assign,nonatomic) BOOL showsStatistics; 
@property (assign,nonatomic) unsigned long long debugOptions; 
@property (nonatomic,retain) SKScene * overlaySKScene; 
@property (nonatomic,readonly) unsigned long long renderingAPI; 
@property (nonatomic,readonly) void* context; 
@property (nonatomic,readonly) id<MTLRenderCommandEncoder> currentRenderCommandEncoder; 
@property (nonatomic,readonly) MTLRenderPassDescriptor * currentRenderPassDescriptor; 
@property (nonatomic,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) unsigned long long colorPixelFormat; 
@property (nonatomic,readonly) unsigned long long depthPixelFormat; 
@property (nonatomic,readonly) unsigned long long stencilPixelFormat; 
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue; 
@property (nonatomic,readonly) AVAudioEngine * audioEngine; 
@property (nonatomic,readonly) AVAudioEnvironmentNode * audioEnvironmentNode; 
@property (nonatomic,retain) SCNNode * audioListener; 
@property (nonatomic,readonly) CGRect currentViewport; 
@property (assign,nonatomic) BOOL usesReverseZ; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) SCNTechnique * technique; 
+(id)rendererWithDevice:(id)arg1 options:(id)arg2 ;
+(id)rendererWithContext:(id)arg1 options:(id)arg2 ;
-(void)setFrozen:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id<MTLCommandQueue>)commandQueue;
-(void)setCurrentTime:(double)arg1 ;
-(void)setTemporalAntialiasingEnabled:(BOOL)arg1 ;
-(CGSize)_backingSize;
-(void)render;
-(BOOL)usesReverseZ;
-(id)hitTestWithSegmentFromPoint:(SCNVector3)arg1 toPoint:(SCNVector3)arg2 options:(id)arg3 ;
-(BOOL)loops;
-(id)hitTest:(CGPoint)arg1 options:(id)arg2 ;
-(void)setDebugOptions:(unsigned long long)arg1 ;
-(CGRect)viewport;
-(id)init;
-(SCNNode *)pointOfView;
-(CGRect)currentViewport;
-(double)sceneTime;
-(BOOL)autoenablesDefaultLighting;
-(void)set_showsAuthoringEnvironment:(BOOL)arg1 ;
-(BOOL)isTemporalAntialiasingEnabled;
-(SCNVector3)unprojectPoint:(SCNVector3)arg1 ;
-(id)pointOfCulling;
-(void)setPlaying:(BOOL)arg1 ;
-(double)currentTime;
-(void)setTechnique:(SCNTechnique *)arg1 ;
-(void)_drawAtTime:(double)arg1 ;
-(unsigned long long)stencilPixelFormat;
-(void)setUsesReverseZ:(BOOL)arg1 ;
-(id)_authoringEnvironment;
-(SCNVector3)projectPoint:(SCNVector3)arg1 ;
-(SCNTechnique *)technique;
-(BOOL)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2 ;
-(void)unlock;
-(id<MTLRenderCommandEncoder>)currentRenderCommandEncoder;
-(unsigned long long)debugOptions;
-(void)setLoops:(BOOL)arg1 ;
-(void)setJitteringEnabled:(BOOL)arg1 ;
-(void)setAutoenablesDefaultLighting:(BOOL)arg1 ;
-(AVAudioEngine *)audioEngine;
-(BOOL)isJitteringEnabled;
-(SKScene *)overlaySKScene;
-(void)setOverlaySKScene:(SKScene *)arg1 ;
-(SCNNode *)audioListener;
-(BOOL)showsStatistics;
-(void)dealloc;
-(void)_play;
-(void)_endFrame;
-(BOOL)isPlaying;
-(void)setPointOfView:(SCNNode *)arg1 ;
-(void)_draw;
-(void)setShowsStatistics:(BOOL)arg1 ;
-(void)setScene:(SCNScene *)arg1 ;
-(unsigned long long)renderingAPI;
-(SCNVector4)_viewport;
-(double)_contentsScaleFactor;
-(id<MTLDevice>)device;
-(double)_aspectRatio;
-(void)_update:(C3DSceneRef)arg1 ;
-(BOOL)frozen;
-(unsigned long long)_sampleCount;
-(id)_renderingQueue;
-(unsigned long long)colorPixelFormat;
-(AVAudioEnvironmentNode *)audioEnvironmentNode;
-(double)_nextFrameTime;
-(MTLRenderPassDescriptor *)currentRenderPassDescriptor;
-(NSString *)description;
-(void)setContext:(void*)arg1 ;
-(void)_beginFrame;
-(unsigned long long)depthPixelFormat;
-(id)nodesInsideFrustumWithPointOfView:(id)arg1 ;
-(void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setAudioListener:(SCNNode *)arg1 ;
-(void)setPointOfCulling:(id)arg1 ;
-(void)_pause;
-(void)setDelegate:(id<SCNSceneRendererDelegate>)arg1 ;
-(void)_setInterfaceOrientation:(long long)arg1 ;
-(CGImageRef)createSnapshot:(double)arg1 ;
-(id)metalDevice;
-(void*)context;
-(double)nextFrameTime;
-(void)lock;
-(void)_stop;
-(SCNScene *)scene;
-(id)backgroundColor;
-(BOOL)_showsAuthoringEnvironment;
-(id<SCNSceneRendererDelegate>)delegate;
-(void)prepareObjects:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)prepareObject:(id)arg1 shouldAbortBlock:(/*^block*/id)arg2 ;
-(void)setSceneTime:(double)arg1 ;
-(id)metalLayer;
-(id)currentCommandBuffer;
-(void)updateAtTime:(double)arg1 ;
-(id)snapshotAtTime:(double)arg1 withSize:(CGSize)arg2 antialiasingMode:(unsigned long long)arg3 ;
-(void)set_enableARMode:(BOOL)arg1 ;
-(void)set_wantsSceneRendererDelegationMessages:(BOOL)arg1 ;
-(void)_UIOrientationDidChangeNotification:(id)arg1 ;
-(void)setRendersContinuously:(BOOL)arg1 ;
-(void)set_superSamplingFactor:(double)arg1 ;
-(void)renderWithViewport:(CGRect)arg1 commandBuffer:(id)arg2 passDescriptor:(id)arg3 ;
-(unsigned long long)_antialiasingMode;
-(BOOL)renderMovieToURL:(id)arg1 size:(CGSize)arg2 antialiasingMode:(unsigned long long)arg3 attributes:(id)arg4 error:(id*)arg5 ;
-(void)_presentFramebuffer;
-(const void*)__CFObject;
-(void)_jitterAtStep:(unsigned long long)arg1 updateMainFramebuffer:(BOOL)arg2 redisplay:(BOOL)arg3 jitterer:(id)arg4 ;
-(C3DEngineContextRef)_engineContext;
-(double)_superSamplingFactor;
-(SCNMatrix4)_screenTransform;
-(BOOL)_disableLinearRendering;
-(BOOL)_enableARMode;
-(BOOL)_shouldDelegateARCompositing;
-(void)set_antialiasingMode:(unsigned long long)arg1 ;
-(void)_updateEngineCallbacks;
-(id)_initWithOptions:(id)arg1 isPrivateRenderer:(BOOL)arg2 privateRendererOwner:(id)arg3 clearsOnDraw:(BOOL)arg4 context:(void*)arg5 renderingAPI:(unsigned long long)arg6 ;
-(3)adjustViewportForRendering:;
-(void)_invalidateFramebuffer;
-(id)_prepareSKRenderer;
-(void)_prepareRenderTarget;
-(void)_deleteGLFramebuffer;
-(void)_createPrepareFramebufferIfNeeded;
-(void)_createOffscreenFramebufferIfNeeded;
-(void)_prepareGLRenderTarget;
-(unsigned long long)_preparePixelFormat;
-(SCNVector3)_projectPoint:(SCNVector3)arg1 viewport:(SCNVector4)arg2 ;
-(SCNVector3)_unprojectPoint:(SCNVector3)arg1 viewport:(SCNVector4)arg2 ;
-(long long)_getFrameIndex;
-(void)_prepareForTransition:(id)arg1 outgoingScene:(id)arg2 outgoingPointOfView:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_defaultPOVForScene:(id)arg1 ;
-(void)_c3dBackgroundColorDidChange;
-(id)_setupSKRendererIfNeeded;
-(void)_overlaysDidUpdate:(id)arg1 ;
-(BOOL)_installContext;
-(void)set_preparePixelFormat:(unsigned long long)arg1 ;
-(BOOL)_collectCompilationErrors;
-(id)_renderContextMetal;
-(BOOL)_preparePreloadRenderer:(id)arg1 ;
-(BOOL)_prepareObject:(id)arg1 shouldAbortBlock:(/*^block*/id)arg2 ;
-(void)_releasePreloadRenderer;
-(BOOL)_preloadResource:(id)arg1 abortHandler:(/*^block*/id)arg2 ;
-(void)_setSceneTime:(double)arg1 ;
-(void)updateCurrentTimeIfPlayingWithSystemTime:(double)arg1 ;
-(double)_systemTime;
-(void)_updateSystemTimeAndDeltaTimeWithCurrentTime:(double)arg1 ;
-(void)_updateWithSystemTime:(double)arg1 ;
-(BOOL)_needsRepetitiveRedraw;
-(id)_hitTest:(CGPoint)arg1 viewport:(CGSize)arg2 options:(id)arg3 ;
-(BOOL)_isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2 viewport:(SCNVector4)arg3 ;
-(id)_nodesInsideFrustumWithPointOfView:(id)arg1 viewport:(SCNVector4)arg2 ;
-(void)setupAuthoringEnvironment;
-(void)_resolveAndDiscardGL;
-(id)_compilationErrors;
-(void)_reloadDebugOptions;
-(void)_renderSceneWithEngineContext:(C3DEngineContextRef)arg1 sceneTime:(double)arg2 ;
-(double)_computeNextFrameTime;
-(void)set_nextFrameTime:(double)arg1 ;
-(void)updateAndDrawStatisticsIfNeeded;
-(BOOL)_needsRedrawAsap;
-(BOOL)_drawSceneWithNewRenderer:(C3DSceneRef)arg1 ;
-(BOOL)_drawSceneWithLegacyRenderer:(C3DSceneRef)arg1 ;
-(void)_clearBackBuffer;
-(void)set_systemTime:(double)arg1 ;
-(void)set_deltaTime:(double)arg1 ;
-(void)_installViewport;
-(void)set_viewport:(SCNVector4)arg1 ;
-(void)renderAtTime:(double)arg1 ;
-(void)_drawScene:(C3DSceneRef)arg1 ;
-(id)MTLTexture;
-(void)_updatePointOfView;
-(void)_renderAtTime:(double)arg1 ;
-(void)_renderAtTime:(double)arg1 viewport:(CGRect)arg2 encoder:(id)arg3 passDescriptor:(id)arg4 commandQueue:(id)arg5 commandBuffer:(id)arg6 ;
-(void)renderWithCommandBuffer:(id)arg1 viewPoints:(id)arg2 ;
-(void)_installGLContextAndSetViewport;
-(CGImageRef)_createSnapshotAtTime:(double)arg1 withSize:(CGSize)arg2 antialiasingMode:(unsigned long long)arg3 ;
-(void)_setBackingSize:(CGSize)arg1 ;
-(id)snapshotRendererWithSize:(CGSize)arg1 ;
-(id)_computedLightingEnvironmentMapsPath;
-(void)set_computedLightingEnvironmentMapsPath:(id)arg1 ;
-(void)_setupOffscreenRendererWithSize:(CGSize)arg1 ;
-(BOOL)autoAdjustCamera;
-(void)setAutoAdjustCamera:(BOOL)arg1 ;
-(void)set_screenTransform:(SCNMatrix4)arg1 ;
-(void)set_collectCompilationErrors:(BOOL)arg1 ;
-(void)__setTransitionContext:(id)arg1 ;
-(void)updateProbes:(id)arg1 atTime:(double)arg2 ;
-(void)renderAtTime:(double)arg1 viewport:(CGRect)arg2 commandBuffer:(id)arg3 passDescriptor:(id)arg4 ;
-(void)_interfaceOrientationDidChange;
-(void)_setContentsScaleFactor:(double)arg1 ;
-(void)set_aspectRatio:(double)arg1 ;
-(_C3DRendererContext*)_rendererContextGL;
-(void)_projectPoints:(SCNVector3*)arg1 count:(unsigned long long)arg2 viewport:(SCNVector4)arg3 ;
-(void)_didRenderScene:(id)arg1 ;
-(void)_willRenderScene:(id)arg1 ;
-(id)_readSubdivCacheForHash:(id)arg1 ;
-(void)_writeSubdivCacheForHash:(id)arg1 dataProvider:(/*^block*/id)arg2 ;
-(void)setScene:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resolvedBackgroundColorDidChange;
-(BOOL)disableOverlays;
-(void)setDisableOverlays:(BOOL)arg1 ;
-(id)_copyPassDescription;
-(id)_copyRenderGraphDescription;
-(void)_renderGraphFrameRecordingAtPath:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)_recordWithoutExecute;
-(void)set_recordWithoutExecute:(BOOL)arg1 ;
-(id)programWithNode:(id)arg1 withMaterial:(id)arg2 ;
-(BOOL)_wantsSceneRendererDelegationMessages;
-(BOOL)_shouldForwardSceneRendererDelegationMessagesToPrivateRendererOwner;
-(void)set_shouldForwardSceneRendererDelegationMessagesToPrivateRendererOwner:(BOOL)arg1 ;
-(void)_drawOverlaySceneAtTime:(double)arg1 ;
-(BOOL)jitteringEnabled;
-(BOOL)temporalAntialiasingEnabled;
-(id)_copyPerformanceStatistics;
-(void)_displayLinkStatsTick;
-(void)_displayLinkStatsTack;
-(void)_runningInExtension;
-(BOOL)_enablesDeferredShading;
-(void)set_enablesDeferredShading:(BOOL)arg1 ;
-(void)set_disableLinearRendering:(BOOL)arg1 ;
-(void)set_shouldDelegateARCompositing:(BOOL)arg1 ;
-(1)_drawableSafeAreaInsets;
-(void)set_drawableSafeAreaInsets:;
-(void)_drawWithJitteringPresentationMode;
-(void)renderAtTime:(double)arg1 viewport:(CGRect)arg2 encoder:(id)arg3 passDescriptor:(id)arg4 commandQueue:(id)arg5 ;
-(void)renderAtTime:(double)arg1 commandBuffer:(id)arg2 viewPoints:(id)arg3 ;
-(void)renderWithViewpoints:(id)arg1 events:(id)arg2 ;
-(id)snapshotAtTime:(double)arg1 ;
-(void)_updateProbes:(id)arg1 withProgress:(id)arg2 ;
-(CGImageRef)copySnapshotWithSize:(CGSize)arg1 ;
-(id)initOffscreenRendererWithSize:(CGSize)arg1 options:(id)arg2 ;
-(id)privateRendererOwner;
@end
