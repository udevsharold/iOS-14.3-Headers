/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class _UIAlertControllerGradientView;

@interface _UIAlertControllerShadowedScrollView : UIScrollView {

	_UIAlertControllerGradientView* _shadowView;
	BOOL _shouldPinToBottomOnResize;

}

@property (assign,nonatomic) BOOL shouldPinToBottomOnResize;              //@synthesize shouldPinToBottomOnResize=_shouldPinToBottomOnResize - In the implementation block
-(void)setContentSize:(CGSize)arg1 ;
-(CGRect)_boundsForPinningToBottomWithNewBounds:(CGRect)arg1 ;
-(void)_updateScrollabilityAndShadow;
-(void)setShouldPinToBottomOnResize:(BOOL)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)shouldPinToBottomOnResize;
@end

