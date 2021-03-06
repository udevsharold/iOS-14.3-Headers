/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIWebScrollView.h>

@class _UIWebViewScrollViewDelegateForwarder, UIWebBrowserView;

@interface _UIWebViewScrollView : UIWebScrollView {

	_UIWebViewScrollViewDelegateForwarder* _forwarder;
	BOOL _bouncesSetExplicitly;
	BOOL _contentInsetAdjustmentBehaviorWasExternallyOverridden;
	UIWebBrowserView* _browserView;

}
-(void)setBouncesHorizontally:(BOOL)arg1 ;
-(void)setBouncesVertically:(BOOL)arg1 ;
-(void)setContentInsetAdjustmentBehavior:(long long)arg1 ;
-(void)dealloc;
-(void)_setWebView:(id)arg1 ;
-(void)_weaklySetBouncesHorizontally:(BOOL)arg1 ;
-(BOOL)_contentInsetAdjustmentBehaviorWasExternallyOverridden;
-(void)setBounces:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)_setContentInsetAdjustmentBehaviorInternal:(long long)arg1 ;
-(id)delegate;
@end

