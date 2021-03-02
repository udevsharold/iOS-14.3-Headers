/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SFBrowserServiceViewController.h>
#import <libobjc.A.dylib/SFWebAppServiceViewControllerProtocol.h>
#import <libobjc.A.dylib/_SFMediaRecordingDocument.h>

@class NSString, UIWebClip, UIView, WKProcessPool, WKWebsiteDataStore, NSMutableArray, BKSApplicationStateMonitor, _SFApplicationManifestFetcher, _SFInjectedJavaScriptController, _SFWebClipMetadataFetcher;

@interface _SFWebAppServiceViewController : SFBrowserServiceViewController <SFWebAppServiceViewControllerProtocol, _SFMediaRecordingDocument> {

	UIWebClip* _webClip;
	UIView* _statusBarBackgroundView;
	WKProcessPool* _processPool;
	WKWebsiteDataStore* _websiteDataStore;
	NSMutableArray* _fallbackURLs;
	BKSApplicationStateMonitor* _stateMonitor;
	unsigned _hostState;
	unsigned long long _mediaStateIconBeforeSuspension;
	_SFApplicationManifestFetcher* _applicationManifestFetcher;
	_SFInjectedJavaScriptController* _activityJSController;
	_SFWebClipMetadataFetcher* _webClipMetadataFetcher;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canOverrideStatusBar; 
@property (nonatomic,readonly) BOOL audioOnly; 
@property (nonatomic,readonly) NSString * URLString; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(long long)preferredStatusBarStyle;
-(unsigned long long)_persona;
-(BOOL)canOverrideStatusBar;
-(void)muteMediaCapture;
-(void)statusBarIndicatorTappedWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_isURLOutOfLegacyScope:(id)arg1 withLoginURLExempted:(BOOL)arg2 ;
-(void)webViewController:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webViewController:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)_fetchApplicationManifestIfNeeded;
-(void)_updateDisplayMode;
-(void)webViewControllerDidChangeURL:(id)arg1 ;
-(BOOL)_isURLOutOfScope:(id)arg1 withLoginURLExempted:(BOOL)arg2 ;
-(id)_canonicalPageURL;
-(id)websiteDataStoreConfiguration;
-(id)webViewConfiguration;
-(void)setNeedsStatusBarAppearanceUpdate;
-(void)_setCurrentWebViewController:(id)arg1 ;
-(void)_initialLoadFinishedWithSuccess:(BOOL)arg1 ;
-(BOOL)_clientIsWebApp;
-(void)_loadWebClipPageURL:(id)arg1 ;
-(void)_handleHostStateUpdate:(id)arg1 ;
-(BOOL)_usesScrollToTopView;
-(void)dealloc;
-(BOOL)canPrint;
-(void)_hostApplicationDidEnterBackground;
-(NSString *)URLString;
-(id)websiteDataStore;
-(id)processPool;
-(BOOL)audioOnly;
-(void)setMediaStateIcon:(unsigned long long)arg1 ;
-(void)loadWebAppWithIdentifier:(id)arg1 ;
-(void)navigationBarDoneButtonWasTapped:(id)arg1 ;
-(void)webAppDidBecomeActive;
-(void)webAppWillResignActive;
-(void)webViewControllerDidChangeLoadingState:(id)arg1 ;
-(void)webViewControllerDidFirstVisuallyNonEmptyLayout:(id)arg1 ;
-(void)webViewController:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(BOOL)_isURLOutOfManifestScope:(id)arg1 ;
-(void)_loadNextFallbackURL;
-(void)viewDidLoad;
@end
