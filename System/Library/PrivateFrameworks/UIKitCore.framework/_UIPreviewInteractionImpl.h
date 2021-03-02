/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView, UIPreviewInteraction;


@protocol _UIPreviewInteractionImpl <NSObject>
@property (assign,nonatomic,__weak) id<UIPreviewInteractionDelegate> delegate; 
@property (nonatomic,__weak,readonly) UIView * view; 
@property (nonatomic,retain) id<_UIPreviewInteractionTouchForceProviding> touchForceProvider; 
@property (assign,nonatomic,__weak) UIPreviewInteraction * previewInteraction; 
@required
-(void)cancelInteraction;
-(CGPoint*)locationInCoordinateSpace:(id)arg1;
-(UIView *)view;
-(void)setDelegate:(id)arg1;
-(UIPreviewInteraction *)previewInteraction;
-(id<_UIPreviewInteractionTouchForceProviding>)touchForceProvider;
-(id)initWithView:(id)arg1 previewInteraction:(id)arg2;
-(void)setTouchForceProvider:(id)arg1;
-(void)_startPreviewAtLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2;
-(void)setPreviewInteraction:(id)arg1;
-(id<UIPreviewInteractionDelegate>)delegate;

@end
