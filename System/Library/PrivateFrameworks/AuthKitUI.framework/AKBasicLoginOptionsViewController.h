/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class AKAppleIDAuthenticationInAppContext, UIStackView, UIButton, UIView, OBPrivacyLinkController;

@interface AKBasicLoginOptionsViewController : UIViewController {

	BOOL _isCreateAppleIDAllowed;
	/*^block*/id _createIDAction;
	/*^block*/id _forgotAction;
	AKAppleIDAuthenticationInAppContext* _context;
	UIStackView* _optionsStack;
	UIButton* _forgotButton;
	UIButton* _createButton;
	UIView* _privacyView;
	OBPrivacyLinkController* _privacyController;

}

@property (assign,nonatomic,__weak) AKAppleIDAuthenticationInAppContext * context;              //@synthesize context=_context - In the implementation block
@property (retain) UIStackView * optionsStack;                                                  //@synthesize optionsStack=_optionsStack - In the implementation block
@property (retain) UIButton * forgotButton;                                                     //@synthesize forgotButton=_forgotButton - In the implementation block
@property (retain) UIButton * createButton;                                                     //@synthesize createButton=_createButton - In the implementation block
@property (retain) UIView * privacyView;                                                        //@synthesize privacyView=_privacyView - In the implementation block
@property (retain) OBPrivacyLinkController * privacyController;                                 //@synthesize privacyController=_privacyController - In the implementation block
@property (assign) BOOL isCreateAppleIDAllowed;                                                 //@synthesize isCreateAppleIDAllowed=_isCreateAppleIDAllowed - In the implementation block
@property (nonatomic,copy) id createIDAction;                                                   //@synthesize createIDAction=_createIDAction - In the implementation block
@property (nonatomic,copy) id forgotAction;                                                     //@synthesize forgotAction=_forgotAction - In the implementation block
-(id)init;
-(id)initWithContext:(id)arg1 ;
-(void)setContext:(AKAppleIDAuthenticationInAppContext *)arg1 ;
-(AKAppleIDAuthenticationInAppContext *)context;
-(void)viewDidLoad;
-(UIView *)privacyView;
-(void)setPrivacyView:(UIView *)arg1 ;
-(void)setIsCreateAppleIDAllowed:(BOOL)arg1 ;
-(void)_refreshCreateAppleIDButton;
-(UIButton *)forgotButton;
-(void)_configureButtonForFontAdjustment:(id)arg1 ;
-(UIButton *)createButton;
-(void)_configureOptionsStack;
-(void)setPrivacyController:(OBPrivacyLinkController *)arg1 ;
-(OBPrivacyLinkController *)privacyController;
-(void)_addPrivacyView:(id)arg1 ;
-(id)forgotAction;
-(id)createIDAction;
-(UIStackView *)optionsStack;
-(BOOL)_shouldHideCreateButton;
-(BOOL)isCreateAppleIDAllowed;
-(void)forgotPressed:(id)arg1 ;
-(void)createPressed:(id)arg1 ;
-(void)setCreateIDAction:(id)arg1 ;
-(void)setForgotAction:(id)arg1 ;
-(void)setOptionsStack:(UIStackView *)arg1 ;
-(void)setForgotButton:(UIButton *)arg1 ;
-(void)setCreateButton:(UIButton *)arg1 ;
@end

