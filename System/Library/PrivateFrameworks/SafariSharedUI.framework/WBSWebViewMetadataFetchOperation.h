/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <SafariSharedUI/WBSSiteMetadataFetchOperation.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol WBSWebViewMetadataFetchOperationDelegate;
@class WKWebView, WKWebViewConfiguration, NSString;

@interface WBSWebViewMetadataFetchOperation : WBSSiteMetadataFetchOperation <WKNavigationDelegate> {

	id<WBSWebViewMetadataFetchOperationDelegate> _delegate;
	WKWebView* _webView;

}

@property (assign,nonatomic,__weak) id<WBSWebViewMetadataFetchOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WKWebView * webView;                                                     //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) WKWebViewConfiguration * webViewConfiguration; 
@property (nonatomic,readonly) CGSize webViewSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKWebView *)webView;
-(WKWebViewConfiguration *)webViewConfiguration;
-(void)dealloc;
-(void)didCreateWebView;
-(NSString *)description;
-(void)cancel;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)start;
-(void)_webViewWebProcessDidCrash:(id)arg1 ;
-(void)setDelegate:(id<WBSWebViewMetadataFetchOperationDelegate>)arg1 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(id<WBSWebViewMetadataFetchOperationDelegate>)delegate;
-(void)clearWebView;
-(void)willClearWebView;
-(void)didFailFetch;
-(CGSize)webViewSize;
-(void)startOffscreenFetching;
-(void)_setUpWebViewAndStartOffscreenFetching;
@end
