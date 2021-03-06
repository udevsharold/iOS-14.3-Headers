/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class WKWebView, NSString;

@interface _WKInspector : NSObject <WKObject> {

	ObjectStorage<WebKit::WebInspectorProxy> _inspector;

}

@property (nonatomic,readonly) WKWebView * webView; 
@property (nonatomic,readonly) BOOL isConnected; 
@property (nonatomic,readonly) BOOL isVisible; 
@property (nonatomic,readonly) BOOL isFront; 
@property (nonatomic,readonly) BOOL isProfilingPage; 
@property (nonatomic,readonly) BOOL isElementSelectionActive; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)show;
-(void)connect;
-(void)detach;
-(WKWebView *)webView;
-(void)togglePageProfiling;
-(id)inspectorWebView;
-(void)showMainResourceForFrame:(id)arg1 ;
-(void)attach;
-(BOOL)isVisible;
-(BOOL)isFront;
-(BOOL)isElementSelectionActive;
-(void)showResources;
-(BOOL)isConnected;
-(void)showConsole;
-(void)toggleElementSelection;
-(void)hide;
-(void)close;
-(void)_browserExtensionsEnabled:(id)arg1 ;
-(BOOL)isProfilingPage;
-(Object*)_apiObject;
-(void)_browserExtensionsDisabled:(id)arg1 ;
-(void)_setDiagnosticLoggingDelegate:(id)arg1 ;
-(void)printErrorToConsole:(id)arg1 ;
@end

