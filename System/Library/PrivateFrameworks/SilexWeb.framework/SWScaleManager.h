/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SWScaleManager.h>

@protocol SWScaleManager <NSObject>
@property (assign,nonatomic) double scale; 
@required
-(double)scale;
-(void)setScale:(double)arg1;

@end


@class WKWebView, NSString;

@interface SWScaleManager : NSObject <SWScaleManager> {

	double _scale;
	WKWebView* _webView;

}

@property (nonatomic,readonly) WKWebView * webView;                 //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic) double scale;                          //@synthesize scale=_scale - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKWebView *)webView;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(id)initWithWebView:(id)arg1 scale:(double)arg2 ;
@end

