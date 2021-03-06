/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBFloatingApplicationLiveContentOverlayView.h>

@class SBInlineAppExposeContainerViewController, UIView, NSString;

@interface SBFloatingApplicationInlineAppExposeLiveContentOverlayView : NSObject <SBFloatingApplicationLiveContentOverlayView> {

	SBInlineAppExposeContainerViewController* _inlineAppExposeContainerViewController;

}

@property (nonatomic,readonly) SBInlineAppExposeContainerViewController * inlineAppExposeContainerViewController;              //@synthesize inlineAppExposeContainerViewController=_inlineAppExposeContainerViewController - In the implementation block
@property (nonatomic,readonly) UIView * contentOverlayView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHomeGrabberHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)arg1 ;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg1 ;
-(void)setLiveContentRasterizationDisabled:(BOOL)arg1 ;
-(id)contentViewController;
-(void)setStatusBarHidden:(BOOL)arg1 nubViewHidden:(BOOL)arg2 animator:(/*^block*/id)arg3 ;
-(void)disableAsynchronousRenderingForNextCommit;
-(UIView *)contentOverlayView;
-(void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(BOOL)arg2 ;
-(long long)rasterizationStyle;
-(void)invalidate;
-(SBInlineAppExposeContainerViewController *)inlineAppExposeContainerViewController;
-(void)configureWithWorkspaceEntity:(id)arg1 referenceFrame:(CGRect)arg2 interfaceOrientation:(long long)arg3 ;
@end

