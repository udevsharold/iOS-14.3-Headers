/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SCNSceneRenderer.h>
#import <libobjc.A.dylib/SCNTechniqueSupport.h>

@protocol SCNEventHandler, MTLDevice;
@class NSString, SCNRenderer, SCNScene, SCNDisplayLink, CALayer, SCNJitterer, SCNRecursiveLock, UIColor, SCNSpriteKitEventHandler, NSArray, SCNCameraController, EAGLContext, SCNNode, SKScene, MTLRenderPassDescriptor, AVAudioEngine, AVAudioEnvironmentNode, SCNTechnique;

@interface SCNView : UIView <SCNSceneRenderer, SCNTechniqueSupport> {

	double _currentSystemTime;
	double _lastUpdate;
	NSString* __ibSceneName;
	unsigned long long __ibPreferredRenderingAPI;
	unsigned _ibNoMultisampling : 1;
	unsigned long long _renderingAPI;
	unsigned _isOpaque : 1;
	unsigned _rendersContinuously : 1;
	unsigned _firstDrawDone : 1;
	unsigned _drawOnMainThreadPending : 1;
	unsigned _viewIsOffscreen : 1;
	unsigned _appChangedColorAppearance : 1;
	unsigned _appIsDeactivated : 1;
	unsigned _autoPausedScene : 1;
	unsigned _inRenderQueueForLayerBackedGLRendering : 1;
	unsigned _disableLinearRendering : 1;
	unsigned _isInLiveResize : 1;
	BOOL _isHidden;
	BOOL _didTriggerRedrawWhileRendering;
	id _delegate;
	SCNRenderer* _renderer;
	SCNScene* _scene;
	BOOL _displayLinkCreationRequested;
	BOOL _skipFramesIfNoDrawableAvailable;
	SCNDisplayLink* _displayLink;
	long long _preferredFramePerSeconds;
	CALayer* _backingLayer;
	SCNJitterer* _jitterer;
	SCNRecursiveLock* _lock;
	UIColor* _backgroundColor;
	CGSize _boundsSize;
	char* _snapshotImageData;
	unsigned long long _snapshotImageDataLength;
	id<SCNEventHandler> _navigationCameraController;
	SCNSpriteKitEventHandler* _spriteKitEventHandler;
	id<MTLDevice> _device;
	NSArray* _controllerGestureRecognizers;

}

@property (nonatomic,retain) SCNScene * scene; 
@property (assign,nonatomic) BOOL rendersContinuously; 
@property (assign,nonatomic) BOOL allowsCameraControl; 
@property (nonatomic,readonly) id<SCNCameraControlConfiguration> cameraControlConfiguration; 
@property (nonatomic,readonly) SCNCameraController * defaultCameraController; 
@property (assign,nonatomic) long long preferredFramesPerSecond; 
@property (nonatomic,retain) EAGLContext * eaglContext; 
@property (assign,nonatomic) unsigned long long antialiasingMode; 
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
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(BOOL)lowLatency;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)_kvoKeysForwardedToRenderer;
+(Class)layerClass;
+(BOOL)usesSeparateWorkGroup;
+(id)currentUIFocusEnvironment;
+(id)deviceForOptions:(id)arg1 ;
+(unsigned long long)renderingAPIForOptions:(id)arg1 ;
+(BOOL)_isMetalSupported;
-(void)setBackgroundColor:(id)arg1 ;
-(id<MTLCommandQueue>)commandQueue;
-(void)setTemporalAntialiasingEnabled:(BOOL)arg1 ;
-(void)setEventHandler:(id)arg1 ;
-(id)renderer;
-(void)_enterBackground:(id)arg1 ;
-(id)scn_backingLayer;
-(id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2 ;
-(id)eventHandler;
-(id)snapshot;
-(BOOL)_canJitter;
-(BOOL)usesReverseZ;
-(id)hitTestWithSegmentFromPoint:(SCNVector3)arg1 toPoint:(SCNVector3)arg2 options:(id)arg3 ;
-(BOOL)loops;
-(void)setDisplayLink:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 options:(id)arg2 ;
-(void)setDebugOptions:(unsigned long long)arg1 ;
-(id)init;
-(void)setNeedsDisplay;
-(SCNNode *)pointOfView;
-(CGRect)currentViewport;
-(double)sceneTime;
-(BOOL)autoenablesDefaultLighting;
-(void)set_showsAuthoringEnvironment:(BOOL)arg1 ;
-(BOOL)isTemporalAntialiasingEnabled;
-(SCNVector3)unprojectPoint:(SCNVector3)arg1 ;
-(id)pointOfCulling;
-(void)setPlaying:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(void)play:(id)arg1 ;
-(void)stop:(id)arg1 ;
-(void)setTechnique:(SCNTechnique *)arg1 ;
-(void)_drawAtTime:(double)arg1 ;
-(void)_jitterRedisplay;
-(BOOL)_supportsJitteringSyncRedraw;
-(BOOL)scn_inLiveResize;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)stencilPixelFormat;
-(void)setUsesReverseZ:(BOOL)arg1 ;
-(void)setAntialiasingMode:(unsigned long long)arg1 ;
-(id)_authoringEnvironment;
-(void)resumeDisplayLink;
-(SCNVector3)projectPoint:(SCNVector3)arg1 ;
-(void)_enterForeground:(id)arg1 ;
-(BOOL)_checkAndUpdateDisplayLinkStateIfNeeded;
-(unsigned long long)antialiasingMode;
-(SCNTechnique *)technique;
-(BOOL)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2 ;
-(void)unlock;
-(id<MTLRenderCommandEncoder>)currentRenderCommandEncoder;
-(unsigned long long)debugOptions;
-(void)setLoops:(BOOL)arg1 ;
-(void)setJitteringEnabled:(BOOL)arg1 ;
-(void)_systemTimeAnimationStarted:(id)arg1 ;
-(void)setAutoenablesDefaultLighting:(BOOL)arg1 ;
-(AVAudioEngine *)audioEngine;
-(BOOL)isJitteringEnabled;
-(void)_sceneDidUpdate:(id)arg1 ;
-(SKScene *)overlaySKScene;
-(void)pauseDisplayLink;
-(void)setOverlaySKScene:(SKScene *)arg1 ;
-(SCNNode *)audioListener;
-(BOOL)showsStatistics;
-(void)dealloc;
-(void)pause:(id)arg1 ;
-(BOOL)isPlaying;
-(void)setPointOfView:(SCNNode *)arg1 ;
-(void)setShowsStatistics:(BOOL)arg1 ;
-(void)setScene:(SCNScene *)arg1 ;
-(unsigned long long)renderingAPI;
-(SCNVector4)_viewport;
-(id<MTLDevice>)device;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(id)_renderingQueue;
-(id)displayLink;
-(void)willMoveToWindow:(id)arg1 ;
-(unsigned long long)colorPixelFormat;
-(id)initWithCoder:(id)arg1 ;
-(void)SCN_displayLinkCallback:(double)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(AVAudioEnvironmentNode *)audioEnvironmentNode;
-(MTLRenderPassDescriptor *)currentRenderPassDescriptor;
-(void)drawRect:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(NSString *)description;
-(void)layoutSubviews;
-(BOOL)isOpaque;
-(void)safeAreaInsetsDidChange;
-(long long)_preferredFocusMovementStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)depthPixelFormat;
-(void)didMoveToWindow;
-(id)nodesInsideFrustumWithPointOfView:(id)arg1 ;
-(void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setContentScaleFactor:(double)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setAudioListener:(SCNNode *)arg1 ;
-(void)setPointOfCulling:(id)arg1 ;
-(void)setDelegate:(id<SCNSceneRendererDelegate>)arg1 ;
-(double)_flipY:(double)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void*)context;
-(id)_defaultBackgroundColor;
-(void)lock;
-(SCNScene *)scene;
-(void)_updateOpacity;
-(id)backgroundColor;
-(id)initWithFrame:(CGRect)arg1 options:(id)arg2 ;
-(long long)preferredFramesPerSecond;
-(BOOL)_showsAuthoringEnvironment;
-(BOOL)_controlsOwnScaleFactor;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id<SCNSceneRendererDelegate>)delegate;
-(void)prepareObjects:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)prepareObject:(id)arg1 shouldAbortBlock:(/*^block*/id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSceneTime:(double)arg1 ;
-(void)updateAtTime:(double)arg1 ;
-(void)set_enableARMode:(BOOL)arg1 ;
-(void)set_wantsSceneRendererDelegationMessages:(BOOL)arg1 ;
-(void)setRendersContinuously:(BOOL)arg1 ;
-(void)set_superSamplingFactor:(double)arg1 ;
-(CGSize)_updateBackingSize;
-(void)_createDisplayLinkIfNeeded;
-(const void*)__CFObject;
-(double)_superSamplingFactor;
-(SCNMatrix4)_screenTransform;
-(BOOL)_disableLinearRendering;
-(BOOL)_enableARMode;
-(BOOL)_shouldDelegateARCompositing;
-(double)_renderThreadPriority;
-(void)_initializeDisplayLinkWithScreen:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_isEditor;
-(void)set_screenTransform:(SCNMatrix4)arg1 ;
-(BOOL)_wantsSceneRendererDelegationMessages;
-(BOOL)_enablesDeferredShading;
-(void)set_enablesDeferredShading:(BOOL)arg1 ;
-(void)set_disableLinearRendering:(BOOL)arg1 ;
-(void)set_shouldDelegateARCompositing:(BOOL)arg1 ;
-(void)_updateProbes:(id)arg1 withProgress:(id)arg2 ;
-(SCNCameraController *)defaultCameraController;
-(void)scn_setBackingLayer:(id)arg1 ;
-(EAGLContext *)eaglContext;
-(void)setAllowsCameraControl:(BOOL)arg1 ;
-(void)setNavigationCameraController:(id)arg1 ;
-(void)_selectRenderingAPIWithOptions:(id)arg1 ;
-(void)_commonInit:(id)arg1 ;
-(void)set_ibPreferredRenderingAPI:(int)arg1 ;
-(void)set_ibWantsMultisampling:(BOOL)arg1 ;
-(BOOL)_ibWantsMultisampling;
-(void)set_ibSceneName:(id)arg1 ;
-(BOOL)allowsCameraControl;
-(id)_ibSceneName;
-(int)_ibPreferredRenderingAPI;
-(void)_flushDisplayLink;
-(void)scn_setGestureRecognizers:(id)arg1 ;
-(void)_setNeedsDisplay;
-(void)_scnUpdateContentsGravity;
-(BOOL)drawableResizesAsynchronously;
-(void)setDrawableResizesAsynchronously:(BOOL)arg1 ;
-(void)_updateContentsScaleFactor;
-(CGSize)backingSizeForBoundSize:(CGSize)arg1 ;
-(id)navigationCameraController;
-(void)scn_updateGestureRecognizers;
-(void)_adjustBackingLayerPixelFormat;
-(void)_backgroundDidChange;
-(void)setPointOfView:(id)arg1 animate:(BOOL)arg2 ;
-(id)_getFocusableNodes;
-(CGRect)_focusFrameForSCNNode:(id)arg1 ;
-(BOOL)skipFramesIfNoDrawableAvailable;
-(void)setSkipFramesIfNoDrawableAvailable:(BOOL)arg1 ;
-(void)set_renderOptions:(unsigned long long)arg1 ;
-(unsigned long long)_renderOptions;
-(BOOL)asynchronousResizing;
-(void)setAsynchronousResizing:(BOOL)arg1 ;
-(void)_resetContentsScaleFactor;
-(id<SCNCameraControlConfiguration>)cameraControlConfiguration;
-(BOOL)rendersContinuously;
-(void)eventHandlerWantsRedraw;
-(void)switchToCameraNamed:(id)arg1 ;
-(void)switchToNextCamera;
-(int)ibPreferredRenderingAPI;
-(void)setIbPreferredRenderingAPI:(int)arg1 ;
-(id)ibSceneName;
-(void)setIbSceneName:(id)arg1 ;
-(BOOL)ibWantsMultisampling;
-(void)setIbWantsMultisampling:(BOOL)arg1 ;
-(double)_runFPSTestWithDuration:(double)arg1 ;
-(void)setEaglContext:(EAGLContext *)arg1 ;
-(id)_focusedItemRegionContainer;
@end

