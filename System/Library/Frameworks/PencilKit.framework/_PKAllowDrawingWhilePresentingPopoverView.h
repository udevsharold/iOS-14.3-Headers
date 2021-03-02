/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _PKAllowDrawingWhilePresentingPopoverViewDelegate;
@interface _PKAllowDrawingWhilePresentingPopoverView : UIView {

	BOOL _isHitTesting;
	id<_PKAllowDrawingWhilePresentingPopoverViewDelegate> _delegate;

}

@property (assign,nonatomic) BOOL isHitTesting;                                                                  //@synthesize isHitTesting=_isHitTesting - In the implementation block
@property (assign,nonatomic,__weak) id<_PKAllowDrawingWhilePresentingPopoverViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<_PKAllowDrawingWhilePresentingPopoverViewDelegate>)arg1 ;
-(id<_PKAllowDrawingWhilePresentingPopoverViewDelegate>)delegate;
-(BOOL)isHitTesting;
-(void)setIsHitTesting:(BOOL)arg1 ;
-(id)_rootAncestorViewOfDimmmingView:(CGPoint)arg1 withEvent:(id)arg2 ;
@end
