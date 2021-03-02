/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBUIActiveOrientationObserver.h>

@protocol SSActiveInterfaceOrientationObserverDelegate;
@class NSString;

@interface SSActiveInterfaceOrientationObserver : NSObject <SBUIActiveOrientationObserver> {

	id<SSActiveInterfaceOrientationObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SSActiveInterfaceOrientationObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_sbUIUserAgent;
-(void)stopObserving;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(void)_unregisterForActiveInterfaceOrientationChanges;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(void)_registerForActiveInterfaceOrientationChanges;
-(void)beginObserving;
-(void)_observeActiveInterfaceOrientationChangeToOrientation:(long long)arg1 withDuration:(double)arg2 ;
-(void)setDelegate:(id<SSActiveInterfaceOrientationObserverDelegate>)arg1 ;
-(id<SSActiveInterfaceOrientationObserverDelegate>)delegate;
@end
