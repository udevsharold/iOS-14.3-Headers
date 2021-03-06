/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardUIServices/SBUINumericPasscodeEntryFieldBase.h>

@class SBUIButton, UILabel, UIView, UIButton;

@interface SBUILongNumericPasscodeEntryField : SBUINumericPasscodeEntryFieldBase {

	SBUIButton* _okButton;
	BOOL _showsOkButton;
	UILabel* _promptLabel;
	BOOL _showsPromptLabel;
	BOOL _firstResponder;
	UIView* _springView;
	UIView* _springViewParent;

}

@property (nonatomic,readonly) UIButton * okButton;                //@synthesize okButton=_okButton - In the implementation block
@property (assign,nonatomic) BOOL showsOkButton;                   //@synthesize showsOkButton=_showsOkButton - In the implementation block
@property (nonatomic,readonly) UILabel * promptLabel;              //@synthesize promptLabel=_promptLabel - In the implementation block
@property (assign,nonatomic) BOOL showsPromptLabel;                //@synthesize showsPromptLabel=_showsPromptLabel - In the implementation block
+(BOOL)_usesTextFieldForFirstResponder;
+(BOOL)_shouldResetAutoAcceptWhenMaxNumbersMetInResignFirstResponder;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)resignFirstResponder;
-(void)_resetForFailedPasscode:(BOOL)arg1 ;
-(void)_autofillForBiometricAuthenticationWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDefaultSizeAndLightStyle:(BOOL)arg1 ;
-(CGSize)_viewSize;
-(BOOL)isFirstResponder;
-(void)_okButtonHit;
-(void)_getPasscodeFieldSize:(CGSize*)arg1 okButtonSize:(CGSize*)arg2 ;
-(void)setShowsOkButton:(BOOL)arg1 ;
-(void)setShowsPromptLabel:(BOOL)arg1 ;
-(BOOL)showsOkButton;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)showsPromptLabel;
-(UIButton *)okButton;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFirstResponder;
-(UILabel *)promptLabel;
@end

