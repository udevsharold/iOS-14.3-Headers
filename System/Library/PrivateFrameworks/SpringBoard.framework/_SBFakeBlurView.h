/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_SBFakeBlur.h>
#import <libobjc.A.dylib/SBWallpaperReachabilityObserving.h>

@protocol _SBFakeBlurObserver, SBWallpaperReachabilityCoordinating;
@class SBFWallpaperView, UIImageView, SBWallpaperViewController, NSString;

@interface _SBFakeBlurView : UIView <_SBFakeBlur, SBWallpaperReachabilityObserving> {

	unsigned long long _transformOptions;
	long long _requestedStyle;
	long long _effectiveStyle;
	SBFWallpaperView* _wallpaperView;
	BOOL _fullscreen;
	UIImageView* _imageView;
	CGPoint _wallpaperOffset;
	id<_SBFakeBlurObserver> _observer;
	SBWallpaperViewController* _wallpaperViewController;
	id<SBWallpaperReachabilityCoordinating> _reachabilityCoordinator;

}

@property (nonatomic,readonly) long long variant; 
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen;                                            //@synthesize fullscreen=_fullscreen - In the implementation block
@property (nonatomic,__weak,readonly) SBWallpaperViewController * wallpaperViewController;                   //@synthesize wallpaperViewController=_wallpaperViewController - In the implementation block
@property (nonatomic,readonly) id<SBWallpaperReachabilityCoordinating> reachabilityCoordinator;              //@synthesize reachabilityCoordinator=_reachabilityCoordinator - In the implementation block
@property (assign,nonatomic,__weak) id<_SBFakeBlurObserver> observer;                                        //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) double zoomScale; 
@property (assign,nonatomic) unsigned long long transformOptions;                                            //@synthesize transformOptions=_transformOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_imageForStyle:(inout long long*)arg1 withSource:(id)arg2 overrideTraitCollection:(id)arg3 ;
+(id)_imageForStyle:(inout long long*)arg1 withSource:(id)arg2 ;
-(double)zoomScale;
-(void)handleReachabilityYOffsetDidChange;
-(long long)effectiveStyle;
-(BOOL)isFullscreen;
-(void)setZoomScale:(double)arg1 ;
-(unsigned long long)transformOptions;
-(id<SBWallpaperReachabilityCoordinating>)reachabilityCoordinator;
-(id)initWithVariant:(long long)arg1 wallpaperViewController:(id)arg2 transformOptions:(unsigned long long)arg3 reachabilityCoordinator:(id)arg4 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)requestStyle:(long long)arg1 ;
-(id<_SBFakeBlurObserver>)observer;
-(void)dealloc;
-(void)setFullscreen:(BOOL)arg1 ;
-(long long)variant;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setTransformOptions:(unsigned long long)arg1 ;
-(void)rotateToInterfaceOrientation:(long long)arg1 ;
-(void)setObserver:(id<_SBFakeBlurObserver>)arg1 ;
-(NSString *)description;
-(void)layoutSubviews;
-(void)updateImageWithSource:(id)arg1 ;
-(void)didMoveToWindow;
-(void)reconfigureWithSource:(id)arg1 ;
-(SBWallpaperViewController *)wallpaperViewController;
-(void)offsetWallpaperBy:(CGPoint)arg1 ;
@end
