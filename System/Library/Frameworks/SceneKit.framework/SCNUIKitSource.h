/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SCNImageSource.h>

@class CALayer, UIView, UIWindow;

@interface SCNUIKitSource : SCNImageSource {

	id _uiView;
	id _uiWindow;
	CALayer* _uiWindowLayer;
	BOOL _isOpaque;
	BOOL _windowPreparing;

}

@property (nonatomic,retain) UIView * uiView;                  //@synthesize uiView=_uiView - In the implementation block
@property (nonatomic,retain) UIWindow * uiWindow;              //@synthesize uiWindow=_uiWindow - In the implementation block
-(id)init;
-(void)dealloc;
-(UIView *)uiView;
-(BOOL)isOpaque;
-(id)textureSource;
-(BOOL)supportsMetal;
-(void)setUiView:(UIView *)arg1 ;
-(void)setUiWindow:(UIWindow *)arg1 ;
-(id)prepareWindowIfNeeded;
-(UIWindow *)uiWindow;
@end

