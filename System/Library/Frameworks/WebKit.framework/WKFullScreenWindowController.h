/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class WKWebView, UIView, NSString;

@interface WKFullScreenWindowController : NSObject <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate> {

	RetainPtr<WKFullScreenPlaceholderView>* _webViewPlaceholder;
	long long _fullScreenState;
	WKWebViewState _viewState;
	RetainPtr<UIWindow>* _window;
	RetainPtr<UIViewController>* _rootViewController;
	RefPtr<WebKit::GenericCallback<>, WTF::DumbPtrTraits<WebKit::GenericCallback<> > >* _repaintCallback;
	RetainPtr<UIViewController>* _viewControllerForPresentation;
	RetainPtr<WKFullScreenViewController>* _fullscreenViewController;
	RetainPtr<UISwipeGestureRecognizer>* _startDismissGestureRecognizer;
	RetainPtr<UIPanGestureRecognizer>* _interactivePanDismissGestureRecognizer;
	RetainPtr<UIPinchGestureRecognizer>* _interactivePinchDismissGestureRecognizer;
	RetainPtr<WKFullScreenInteractiveTransition>* _interactiveDismissTransitionCoordinator;
	WKFullScreenWindowControllerVideoFullscreenModelClient* _videoFullscreenClient;
	BOOL _inPictureInPicture;
	BOOL _returnToFullscreenFromPictureInPicture;
	CGRect _initialFrame;
	CGRect _finalFrame;
	RetainPtr<NSString>* _EVOrganizationName;
	BOOL _EVOrganizationNameIsValid;
	BOOL _inInteractiveDismiss;
	BOOL _exitRequested;
	BOOL _enterRequested;
	BOOL _exitingFullScreen;
	RetainPtr<id>* _notificationListener;
	WKWebView* __webView;

}

@property (assign,nonatomic,__weak) WKWebView * _webView;                       //@synthesize _webView=__webView - In the implementation block
@property (nonatomic,retain,readonly) UIView * webViewPlaceholder; 
@property (nonatomic,readonly) BOOL isFullScreen; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isFullScreen;
-(WebFullScreenManagerProxy*)_manager;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(void)set_webView:(WKWebView *)arg1 ;
-(void)dealloc;
-(void)placeholderWillMoveToSuperview:(id)arg1 ;
-(void)_invalidateEVOrganizationName;
-(void)requestExitFullScreen;
-(void)_updateLocationInfo;
-(void)_startToDismissFullscreenChanged:(id)arg1 ;
-(void)_interactiveDismissChanged:(id)arg1 ;
-(void)_interactivePinchDismissChanged:(id)arg1 ;
-(void)requestEnterFullScreen;
-(void)_exitFullscreenImmediately;
-(void)_dismissFullscreenViewController;
-(void)_completedExitFullScreen;
-(id)_EVOrganizationName;
-(void)willEnterPictureInPicture;
-(void)didEnterPictureInPicture;
-(WKWebView *)_webView;
-(void)failedToEnterPictureInPicture;
-(void)prepareToExitPictureInPicture;
-(void)didExitPictureInPicture;
-(void)videoControlsManagerDidChange;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)webViewDidRemoveFromSuperviewWhileInFullscreen;
-(id)initWithWebView:(id)arg1 ;
-(UIView *)webViewPlaceholder;
-(SecTrustRef)_serverTrust;
-(void)close;
-(void)enterFullScreen;
-(void)exitFullScreen;
-(void)beganEnterFullScreenWithInitialFrame:(CGRect)arg1 finalFrame:(CGRect)arg2 ;
-(void)beganExitFullScreenWithInitialFrame:(CGRect)arg1 finalFrame:(CGRect)arg2 ;
-(BOOL)_isSecure;
@end
