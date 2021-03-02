/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol VTUIEnrollmentDelegate;
@class SUICOrbView, UIView, UILabel, UITextView, UIScrollView, _UIBackdropView, NSLayoutConstraint, NSString;

@interface VTUIEnrollmentBaseView : UIView <UITextViewDelegate> {

	SUICOrbView* _orbView;
	UIView* _scrollContainerView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _instructionLabel;
	UITextView* _privacyTextView;
	UIScrollView* _scrollView;
	_UIBackdropView* _backdropView;
	NSLayoutConstraint* _readableLeftAnchorConstraint;
	NSLayoutConstraint* _readableRightAnchorConstraint;
	id<VTUIEnrollmentDelegate> _enrollmentDelegate;

}

@property (assign,nonatomic,__weak) id<VTUIEnrollmentDelegate> enrollmentDelegate;              //@synthesize enrollmentDelegate=_enrollmentDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)footerView;
-(void)updateConstraints;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)setSubtitle:(id)arg1 ;
-(void)layoutSubviews;
-(long long)_backdropStyle;
-(void)safeAreaInsetsDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)_setupUI;
-(void)setEnrollmentDelegate:(id<VTUIEnrollmentDelegate>)arg1 ;
-(void)fadeInSubviews;
-(void)setInstructionText:(id)arg1 ;
-(BOOL)showPrivacyTextView;
-(id<VTUIEnrollmentDelegate>)enrollmentDelegate;
-(id)_createPrivacyTextView;
@end
