/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKControllerDelegate, OS_dispatch_semaphore, OS_dispatch_queue;
#import <PencilKit/PencilKit-Structs.h>
@class NSArray, NSMutableArray, NSObject, PKMetalRendererController, PKDrawing, PKStrokeGenerator;

@interface PKController : NSObject {

	NSArray* _renderedStrokes;
	NSMutableArray* _mutableRenderedStrokes;
	BOOL _liveInteraction;
	BOOL _invertColors;
	NSObject*<PKControllerDelegate> _delegate;
	PKMetalRendererController* _rendererController;
	PKDrawing* _drawing;
	NSObject*<OS_dispatch_semaphore> _interactSemaphore;
	NSObject*<OS_dispatch_queue> _interactQueue;
	NSObject*<OS_dispatch_queue> _backgroundQueue;

}

@property (nonatomic,retain) PKMetalRendererController * rendererController;                  //@synthesize rendererController=_rendererController - In the implementation block
@property (nonatomic,retain) PKDrawing * drawing;                                             //@synthesize drawing=_drawing - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> interactSemaphore;              //@synthesize interactSemaphore=_interactSemaphore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> interactQueue;                      //@synthesize interactQueue=_interactQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> backgroundQueue;                    //@synthesize backgroundQueue=_backgroundQueue - In the implementation block
@property (assign) BOOL liveInteraction;                                                      //@synthesize liveInteraction=_liveInteraction - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<PKControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * renderedStrokes; 
@property (nonatomic,readonly) PKStrokeGenerator * inputController; 
@property (assign,nonatomic) BOOL invertColors;                                               //@synthesize invertColors=_invertColors - In the implementation block
+(void)updatesFrom:(id)arg1 to:(id)arg2 newStrokesToRender:(id*)arg3 redrawAllInRect:(CGRect*)arg4 ;
-(id)init;
-(void)teardown;
-(PKDrawing *)drawing;
-(void)setDrawing:(PKDrawing *)arg1 ;
-(NSObject*<OS_dispatch_queue>)backgroundQueue;
-(PKStrokeGenerator *)inputController;
-(void)setDelegate:(NSObject*<PKControllerDelegate>)arg1 ;
-(void)setBackgroundQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<PKControllerDelegate>)delegate;
-(void)_didUpdateMutableRenderedStrokes;
-(PKMetalRendererController *)rendererController;
-(void)cancelLongRunningRenders;
-(void)setLiveInteraction:(BOOL)arg1 ;
-(void)_renderImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 ;
-(void)_setDrawing:(id)arg1 initialDrawing:(id)arg2 withImage:(CGImageRef)arg3 andMask:(CGImageRef)arg4 setupComplete:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)_loadInitialDrawing:(id)arg1 withImage:(CGImageRef)arg2 andMask:(CGImageRef)arg3 ;
-(BOOL)_updateFrom:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_renderAllInStrokeSpaceRect:(CGRect)arg1 completion:(/*^block*/id)arg2 ;
-(void)_drawingChanged;
-(void)_renderStrokes:(id)arg1 renderIntermediateSteps:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)performAsyncInteractBlock:(/*^block*/id)arg1 ;
-(void)_updateDrawing:(id)arg1 erasedStrokes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)applyCommands:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_applyCommands:(id)arg1 interactCompletion:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_didRenderStrokes:(id)arg1 ;
-(void)removeStrokesInRect:(CGRect)arg1 from:(id)arg2 ;
-(void)_renderAllStrokes:(id)arg1 clipRect:(CGRect)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)liveInteraction;
-(void)_addNewStrokes:(id)arg1 hidden:(BOOL)arg2 preDrawingChangedBlock:(/*^block*/id)arg3 ;
-(void)addNewStrokes:(id)arg1 hidden:(BOOL)arg2 preDrawingChangedBlock:(/*^block*/id)arg3 ;
-(void)setInvertColors:(BOOL)arg1 ;
-(id)initWithPixelSize:(CGSize)arg1 actualSize:(CGSize)arg2 renderQueue:(id)arg3 usePrivateResourceHandler:(BOOL)arg4 singleComponent:(BOOL)arg5 ;
-(NSArray *)renderedStrokes;
-(void)didStartLiveInteraction;
-(void)didEndLiveInteraction;
-(void)setDrawing:(id)arg1 tiles:(id)arg2 tileTransform:(CGAffineTransform)arg3 setupComplete:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)setDrawing:(id)arg1 initialDrawing:(id)arg2 withImage:(CGImageRef)arg3 andMask:(CGImageRef)arg4 setupComplete:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)updateDrawing;
-(void)hideStrokesWithoutUpdating:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateDrawingWithErasedStrokes:(id)arg1 ;
-(void)updateDrawingFrom:(id)arg1 ;
-(void)applyCommand:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)renderImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 forRenderedStrokes:(id)arg3 thenRenderStrokes:(id)arg4 inStrokeSpaceClipRect:(CGRect)arg5 completion:(/*^block*/id)arg6 ;
-(void)renderImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 forRenderedStrokes:(id)arg3 thenRenderStrokes:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)renderStrokes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 completion:(/*^block*/id)arg3 ;
-(void)imageWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)addNewRenderedStrokes:(id)arg1 hidden:(BOOL)arg2 preDrawingChangedBlock:(/*^block*/id)arg3 ;
-(void)addNewStrokes:(id)arg1 preDrawingChangedBlock:(/*^block*/id)arg2 ;
-(void)setRendererController:(PKMetalRendererController *)arg1 ;
-(BOOL)invertColors;
-(NSObject*<OS_dispatch_semaphore>)interactSemaphore;
-(void)setInteractSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_queue>)interactQueue;
-(void)setInteractQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

