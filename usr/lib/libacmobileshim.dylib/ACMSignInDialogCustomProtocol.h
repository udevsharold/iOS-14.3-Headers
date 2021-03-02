/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIColor, NSString, UIButton, UIBarButtonItem;


@protocol ACMSignInDialogCustomProtocol <ACMSignInDialogProtocol>
@property (nonatomic,retain) Class widgetClass; 
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (assign,nonatomic) BOOL userNameFieldEditable; 
@property (assign,nonatomic) BOOL shouldAuthenticateOnUserInput; 
@property (assign,nonatomic) CGPoint widgetPosition; 
@property (assign,nonatomic) NSString * widgetAccountLabel; 
@property (assign,nonatomic) long long widgetPasswordReturnKeyType; 
@property (nonatomic,retain) UIButton * signInButton; 
@property (nonatomic,retain) UIBarButtonItem * signInBarButton; 
@property (nonatomic,retain) UIButton * cancelButton; 
@property (nonatomic,retain) UIBarButtonItem * cancelBarButton; 
@required
-(UIButton *)cancelButton;
-(void)setCancelButton:(id)arg1;
-(void)setBackgroundColor:(id)arg1;
-(UIColor *)backgroundColor;
-(UIButton *)signInButton;
-(void)setSignInButton:(id)arg1;
-(UIBarButtonItem *)signInBarButton;
-(UIBarButtonItem *)cancelBarButton;
-(void)setWidgetPosition:(CGPoint)arg1;
-(void)setWidgetAccountLabel:(id)arg1;
-(void)setWidgetPasswordReturnKeyType:(long long)arg1;
-(void)setShouldAuthenticateOnUserInput:(BOOL)arg1;
-(void)setUserNameFieldEditable:(BOOL)arg1;
-(BOOL)userNameFieldEditable;
-(Class)widgetClass;
-(void)setWidgetClass:(Class)arg1;
-(CGPoint)widgetPosition;
-(long long)widgetPasswordReturnKeyType;
-(NSString *)widgetAccountLabel;
-(void)setSignInBarButton:(id)arg1;
-(BOOL)shouldAuthenticateOnUserInput;
-(void)setCancelBarButton:(id)arg1;

@end
