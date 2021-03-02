/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/WKUIDelegate.h>
#import <libobjc.A.dylib/MKInfoCardThemeListener.h>
#import <libobjc.A.dylib/MKWebBridgeDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol MKWebContentViewControllerDelegate;
@class NSLayoutConstraint, MKWebViewFactoryItem, WKWebView, MKWebBridge, UIActivityIndicatorView, NSURL, WKNavigation, NSString;

@interface MKWebContentViewController : MKPlaceSectionViewController <WKNavigationDelegate, WKUIDelegate, MKInfoCardThemeListener, MKWebBridgeDelegate, MKModuleViewControllerProtocol> {

	NSLayoutConstraint* _heightConstraint;
	MKWebViewFactoryItem* _webViewFactoryItem;
	WKWebView* _webView;
	MKWebBridge* _bridge;
	UIActivityIndicatorView* _activityIndicatorView;
	NSURL* _resolvedURL;
	WKNavigation* _currentWebNavigation;
	BOOL _loading;
	id<MKWebContentViewControllerDelegate> _delegate;
	NSURL* _url;

}

@property (assign,nonatomic,__weak) id<MKWebContentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                                       //@synthesize url=_url - In the implementation block
@property (getter=isLoading,nonatomic,readonly) BOOL loading;                                     //@synthesize loading=_loading - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resolvedURLForRelativeURL:(id)arg1 ;
-(void)dealloc;
-(BOOL)isLoading;
-(id)initWithURL:(id)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didCommitNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)infoCardThemeChanged;
-(void)_startLoading;
-(void)_resetBridge;
-(void)_addLoadingSpinner;
-(void)_removeLoadingSpinner;
-(void)_setHeight:(id)arg1 callbackHandler:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<MKWebContentViewControllerDelegate>)arg1 ;
-(void)_getAnalyticsShortSessionSnapshotWithCallbackHandler:(/*^block*/id)arg1 ;
-(void)_removeModuleWithCallbackHandler:(/*^block*/id)arg1 ;
-(void)_cancel;
-(void)_finishLoading;
-(void)_setHeight:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)webBridgeDidConnect:(id)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(BOOL)_canShowWhileLocked;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(id<MKWebContentViewControllerDelegate>)delegate;
-(NSURL *)url;
-(void)viewDidLoad;
@end
