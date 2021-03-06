/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _SFDialogViewDelegate;
@class SFDialogContentView, _SFKeyboardLayoutAlignmentView, UISwipeGestureRecognizer, UITapGestureRecognizer, NSLayoutConstraint, UIView;

@interface _SFDialogView : UIView {

	SFDialogContentView* _contentView;
	SFDialogContentView* _contentViewConfiguredForMinimumHeight;
	_SFKeyboardLayoutAlignmentView* _keyboardAlignmentView;
	UISwipeGestureRecognizer* _keyboardDismissSwipeGesture;
	UITapGestureRecognizer* _keyboardDismissTapGesture;
	NSLayoutConstraint* _obscuredInsetTopConstraint;
	NSLayoutConstraint* _obscuredInsetLeftConstraint;
	NSLayoutConstraint* _obscuredInsetBottomConstraint;
	NSLayoutConstraint* _obscuredInsetRightConstraint;
	id<_SFDialogViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SFDialogViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                 //@synthesize contentView=_contentView - In the implementation block
-(BOOL)becomeFirstResponder;
-(void)setInputText:(id)arg1 placeholder:(id)arg2 ;
-(void)setPasswordText:(id)arg1 placeholder:(id)arg2 ;
-(void)setTableViewRows:(id)arg1 didSelectRowAction:(/*^block*/id)arg2 ;
-(void)setObscuredInsets:(UIEdgeInsets)arg1 ;
-(void)willDisappear;
-(void)setUsesOpaqueAppearance:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitleText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDialogActions:(id)arg1 ;
-(void)_keyboardDismissGesture:(id)arg1 ;
-(void)setDelegate:(id<_SFDialogViewDelegate>)arg1 ;
-(void)setMessageText:(id)arg1 ;
-(UIView *)contentView;
-(id<_SFDialogViewDelegate>)delegate;
-(void)didAppear;
@end

