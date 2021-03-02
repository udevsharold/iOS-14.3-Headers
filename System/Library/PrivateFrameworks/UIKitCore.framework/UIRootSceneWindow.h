/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIRootWindow.h>
#import <UIKit/UIMutableTransformerDelegate.h>

@class FBSDisplayConfiguration, UIView, UIMutableTransformer, NSString;

@interface UIRootSceneWindow : _UIRootWindow <UIMutableTransformerDelegate> {

	FBSDisplayConfiguration* _displayConfiguration;
	UIView* _sceneContainerView;
	UIMutableTransformer* _sceneTransformer;

}

@property (nonatomic,readonly) UIView * _sceneContainerView;                                //@synthesize sceneContainerView=_sceneContainerView - In the implementation block
@property (nonatomic,readonly) FBSDisplayConfiguration * displayConfiguration;              //@synthesize displayConfiguration=_displayConfiguration - In the implementation block
@property (nonatomic,readonly) UIMutableTransformer * sceneTransformer;                     //@synthesize sceneTransformer=_sceneTransformer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isSecure;
-(BOOL)_usesWindowServerHitTesting;
-(BOOL)_canBecomeKeyWindow;
-(id)initWithDisplay:(id)arg1 ;
-(void)transformsDidChange:(id)arg1 ;
-(void)dealloc;
-(id)_focusResponder;
-(UIMutableTransformer *)sceneTransformer;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithScreen:(id)arg1 ;
-(id)initWithDisplayConfiguration:(id)arg1 ;
-(BOOL)_shouldPrepareScreenForWindow;
-(BOOL)_appearsInLoupe;
-(FBSDisplayConfiguration *)displayConfiguration;
-(void)setFrame:(CGRect)arg1 ;
-(void)_updateTransforms;
-(UIView *)_sceneContainerView;
@end
