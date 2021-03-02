/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/_WKObservablePageState.h>

@class NSString, NSURL;

@interface WKObservablePageState : NSObject <_WKObservablePageState> {

	RefPtr<WebKit::WebPageProxy, WTF::DumbPtrTraits<WebKit::WebPageProxy> >* _page;
	unique_ptr<WebKit::PageLoadStateObserver, std::__1::default_delete<WebKit::PageLoadStateObserver> >* _observer;

}

@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) double estimatedProgress; 
@property (nonatomic,readonly) BOOL hasOnlySecureContent; 
@property (nonatomic,readonly) BOOL _webProcessIsResponsive; 
@property (nonatomic,readonly) NSURL * unreachableURL; 
@property (nonatomic,readonly) SecTrustRef serverTrust; 
-(SecTrustRef)serverTrust;
-(id)initWithPage:(RefPtr<WebKit::WebPageProxy, WTF::DumbPtrTraits<WebKit::WebPageProxy> >*)arg1 ;
-(void)dealloc;
-(BOOL)isLoading;
-(double)estimatedProgress;
-(BOOL)hasOnlySecureContent;
-(BOOL)_webProcessIsResponsive;
-(NSURL *)unreachableURL;
-(NSURL *)URL;
-(NSString *)title;
@end
