/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _WKFrameHandle, NSURLRequest, WKSecurityOrigin, WKWebView;

@interface WKFrameInfo : NSObject <WKObject, NSCopying> {

	ObjectStorage<API::FrameInfo> _frameInfo;

}

@property (nonatomic,copy,readonly) NSString * _sf_titleForJavaScriptDialog; 
@property (nonatomic,copy,readonly) _WKFrameHandle * _handle; 
@property (nonatomic,copy,readonly) _WKFrameHandle * _parentFrameHandle; 
@property (getter=isMainFrame,nonatomic,readonly) BOOL mainFrame; 
@property (nonatomic,copy,readonly) NSURLRequest * request; 
@property (nonatomic,readonly) WKSecurityOrigin * securityOrigin; 
@property (nonatomic,__weak,readonly) WKWebView * webView; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)_sf_titleForJavaScriptDialog;
-(WKWebView *)webView;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURLRequest *)request;
-(_WKFrameHandle *)_handle;
-(void)dealloc;
-(NSString *)description;
-(WKSecurityOrigin *)securityOrigin;
-(_WKFrameHandle *)_parentFrameHandle;
-(BOOL)isMainFrame;
-(Object*)_apiObject;
@end

