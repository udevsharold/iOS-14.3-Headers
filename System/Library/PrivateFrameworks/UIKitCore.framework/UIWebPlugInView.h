/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <WebCore/WAKView.h>

@class UIWebDocumentView, CALayer, UIView;

@interface UIWebPlugInView : WAKView {

	UIWebDocumentView* _webView;
	CALayer* _hostingLayer;
	UIView* _uiView;
	CFRunLoopObserverRef _mainRunLoopDrawObserver;
	BOOL _isFullScreen;
	BOOL _parentedInLayer;
	BOOL _isQuickTimePlugIn;
	BOOL _isMapViewPlugIn;
	BOOL _isiAdPlugIn;

}

@property (assign,getter=isParentedInLayer,nonatomic) BOOL parentedInLayer;              //@synthesize parentedInLayer=_parentedInLayer - In the implementation block
@property (assign,nonatomic) BOOL isQuickTimePlugIn;                                     //@synthesize isQuickTimePlugIn=_isQuickTimePlugIn - In the implementation block
@property (assign,nonatomic) BOOL isMapViewPlugIn;                                       //@synthesize isMapViewPlugIn=_isMapViewPlugIn - In the implementation block
@property (assign,nonatomic) BOOL isiAdPlugIn;                                           //@synthesize isiAdPlugIn=_isiAdPlugIn - In the implementation block
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)reshape;
-(void)dealloc;
-(BOOL)isParented;
-(void)viewDidMoveToWindow;
-(void)_viewDidMoveToWindowOnMainThread;
-(void)invalidateGState;
-(void)_reshapeOnMainThread;
-(void)webPlugInInitialize;
-(void)webPlugInStart;
-(void)webPlugInStop;
-(void)webPlugInDestroy;
-(id)objectForWebScript;
-(BOOL)isParentedInLayer;
-(void)setParentedInLayer:(BOOL)arg1 ;
-(void)_connectPluginLayers;
-(void)_disconnectPluginLayers;
-(void)_attachPluginLayerOnMainThread;
-(void)_detachPluginLayerOnMainThread;
-(BOOL)isMapViewPlugIn;
-(void)attachPluginLayer;
-(void)detachPluginLayer;
-(BOOL)isQuickTimePlugIn;
-(void)mouseUp:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)setWebView:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)plugInView;
-(void)layout;
-(void)setFrameSize:(CGSize)arg1 ;
-(BOOL)willProvidePluginLayer;
-(void)setIsMapViewPlugIn:(BOOL)arg1 ;
-(id)initWithWebView:(id)arg1 plugInView:(id)arg2 ;
-(void)setIsQuickTimePlugIn:(BOOL)arg1 ;
-(void)setIsiAdPlugIn:(BOOL)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)pluginLayer;
-(BOOL)isiAdPlugIn;
@end

