/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _SFWebView, _SFReloadOptionsController, NSURL, WBSTranslationContext, SFBrowserDocumentTrackerInfo;


@protocol _SFBrowserDocument <NSObject>
@property (nonatomic,readonly) _SFWebView * webView; 
@property (nonatomic,readonly) _SFWebView * activeWebView; 
@property (nonatomic,readonly) _SFReloadOptionsController * reloadOptionsController; 
@property (nonatomic,readonly) id<SFReaderContext> readerContext; 
@property (nonatomic,readonly) NSURL * URLForPerSitePreferences; 
@property (nonatomic,readonly) BOOL wasLoadedWithContentBlockersEnabled; 
@property (nonatomic,readonly) BOOL canHideToolbar; 
@property (nonatomic,readonly) WBSTranslationContext * translationContext; 
@property (nonatomic,readonly) SFBrowserDocumentTrackerInfo * trackerInfo; 
@optional
-(SFBrowserDocumentTrackerInfo *)trackerInfo;

@required
-(_SFWebView *)webView;
-(_SFReloadOptionsController *)reloadOptionsController;
-(WBSTranslationContext *)translationContext;
-(_SFWebView *)activeWebView;
-(BOOL)canHideToolbar;
-(BOOL)wasLoadedWithContentBlockersEnabled;
-(void)reloadEnablingContentBlockers:(BOOL)arg1;
-(void)perSiteSettingsUIPresentSettings;
-(id<SFReaderContext>)readerContext;
-(NSURL *)URLForPerSitePreferences;

@end

