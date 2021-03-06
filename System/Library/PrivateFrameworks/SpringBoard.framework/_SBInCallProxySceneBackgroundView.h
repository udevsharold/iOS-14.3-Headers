/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBApplicationSceneBackgroundView.h>

@protocol SBApplicationSceneBackgroundView;
@class NSString;

@interface _SBInCallProxySceneBackgroundView : UIView <SBApplicationSceneBackgroundView> {

	id<SBApplicationSceneBackgroundView> _proxyTarget;

}

@property (assign,nonatomic,__weak) id<SBApplicationSceneBackgroundView> proxyTarget;              //@synthesize proxyTarget=_proxyTarget - In the implementation block
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen; 
@property (assign,nonatomic) long long wallpaperStyle; 
@property (assign,nonatomic) BOOL needsClassicModeBackground; 
@property (assign,nonatomic) BOOL shouldUseBrightMaterial; 
@property (assign,nonatomic) unsigned long long transformOptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setWallpaperStyle:(long long)arg1 ;
-(BOOL)isFullscreen;
-(long long)wallpaperStyle;
-(void)setNeedsClassicModeBackground:(BOOL)arg1 ;
-(void)setFullscreen:(BOOL)arg1 ;
-(void)setShouldUseBrightMaterial:(BOOL)arg1 ;
-(BOOL)needsClassicModeBackground;
-(BOOL)shouldUseBrightMaterial;
-(id)initWithFrame:(CGRect)arg1 proxyTarget:(id)arg2 ;
-(void)setProxyTarget:(id<SBApplicationSceneBackgroundView>)arg1 ;
-(id<SBApplicationSceneBackgroundView>)proxyTarget;
@end

