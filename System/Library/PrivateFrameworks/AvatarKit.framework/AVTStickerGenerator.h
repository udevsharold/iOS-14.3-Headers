/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarKit/AvatarKit-Structs.h>
#import <libobjc.A.dylib/SCNSceneRendererDelegate.h>
#import <libobjc.A.dylib/_SCNSceneRendererDelegateSPI.h>

@class AVTStickerConfigurationReversionContext, AVTAvatar, SCNScene, SCNRenderer, AVTAvatarEnvironment, NSString;

@interface AVTStickerGenerator : NSObject <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI> {

	AVTStickerConfigurationReversionContext* _context;
	BOOL _async;
	AVTAvatar* _avatar;
	SCNScene* _scene;
	SCNRenderer* _renderer;
	AVTAvatarEnvironment* _environment;

}

@property (nonatomic,retain) SCNScene * scene;                                //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) SCNRenderer * renderer;                          //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,retain) AVTAvatarEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) AVTAvatar * avatar;                              //@synthesize avatar=_avatar - In the implementation block
@property (assign,nonatomic) BOOL async;                                      //@synthesize async=_async - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)workQueue;
+(id)addCamera:(id)arg1 inScene:(id)arg2 ;
+(void)addProps:(id)arg1 toScene:(id)arg2 forAvatar:(id)arg3 withCamera:(id)arg4 forExport:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
+(id)createPropsParentNodeIfNeededInScene:(id)arg1 ;
+(void)applyConfiguration:(id)arg1 toScene:(id)arg2 withAvatar:(id)arg3 context:(id)arg4 defaultCamera:(id)arg5 forExport:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
+(CGRect)clippingRectForBaseSize:(CGSize)arg1 ;
+(id)findNodesNamed:(id)arg1 inAvatar:(id)arg2 ;
-(SCNRenderer *)renderer;
-(AVTAvatar *)avatar;
-(void)stickerImageWithConfiguration:(id)arg1 correctClipping:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setScene:(SCNScene *)arg1 ;
-(BOOL)async;
-(void)setAvatar:(AVTAvatar *)arg1 ;
-(void)setRenderer:(SCNRenderer *)arg1 ;
-(void)stickerImageWithConfiguration:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setAsync:(BOOL)arg1 ;
-(void)renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2 ;
-(AVTAvatarEnvironment *)environment;
-(void)setEnvironment:(AVTAvatarEnvironment *)arg1 ;
-(id)initWithAvatar:(id)arg1 ;
-(SCNScene *)scene;
-(void)stickerImageWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setupAvatar:(id)arg1 ;
-(void)setupRendererWithAvatar:(id)arg1 ;
-(id)snapshotAtTime:(double)arg1 withRenderer:(id)arg2 configuration:(id)arg3 options:(id)arg4 ;
-(void)rendererWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_stickerImageWithConfiguration:(id)arg1 options:(id)arg2 startTime:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_renderer:(id)arg1 didBuildSubdivDataForHash:(id)arg2 dataProvider:(/*^block*/id)arg3 ;
-(id)_renderer:(id)arg1 subdivDataForHash:(id)arg2 ;
@end

