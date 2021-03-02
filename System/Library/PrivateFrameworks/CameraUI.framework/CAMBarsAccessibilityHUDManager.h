/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CAMBarsAccessibilityHUDManagerGestureProviderCAMAccessibilityHUDItemProvider, CAMBarsAccessibilityHUDManagerDelegate;
@class UIView, UILongPressGestureRecognizer, NSString;

@interface CAMBarsAccessibilityHUDManager : NSObject <UIGestureRecognizerDelegate> {

	UIView*<CAMBarsAccessibilityHUDManagerGestureProvider>*<CAMAccessibilityHUDItemProvider> _view;
	id<CAMBarsAccessibilityHUDManagerDelegate> _delegate;
	UILongPressGestureRecognizer* __accessibilityLongPressGestureRecognizer;

}

@property (assign,nonatomic,__weak) id<CAMBarsAccessibilityHUDManagerDelegate> delegate;                                                                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIView*<CAMBarsAccessibilityHUDManagerGestureProvider>*<CAMAccessibilityHUDItemProvider> view;                                     //@synthesize view=_view - In the implementation block
@property (setter=_setAccessibilityLongPressGestureRecognizer:,nonatomic,retain) UILongPressGestureRecognizer * _accessibilityLongPressGestureRecognizer;              //@synthesize _accessibilityLongPressGestureRecognizer=__accessibilityLongPressGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView*<CAMBarsAccessibilityHUDManagerGestureProvider>*<CAMAccessibilityHUDItemProvider>)view;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(UILongPressGestureRecognizer *)_accessibilityLongPressGestureRecognizer;
-(void)setView:(UIView*<CAMBarsAccessibilityHUDManagerGestureProvider>*<CAMAccessibilityHUDItemProvider>)arg1 ;
-(void)setDelegate:(id<CAMBarsAccessibilityHUDManagerDelegate>)arg1 ;
-(void)_setAccessibilityLongPressGestureRecognizer:(id)arg1 ;
-(id<CAMBarsAccessibilityHUDManagerDelegate>)delegate;
-(CGPoint)locationOfAccessibilityGestureInView:(id)arg1 ;
-(id)initWithView:(id)arg1 delegate:(id)arg2 cancelsTouchesInView:(BOOL)arg3 ;
-(void)_handleAccessibilityLongPressGesture:(id)arg1 ;
-(void)preferredContentSizeChanged;
@end
