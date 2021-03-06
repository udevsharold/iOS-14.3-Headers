/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UITextInputPasswordRules;


@protocol UITextInputTraits <NSObject>
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
@optional
-(void)setKeyboardType:(long long)arg1;
-(void)setSecureTextEntry:(BOOL)arg1;
-(long long)smartQuotesType;
-(void)setSmartInsertDeleteType:(long long)arg1;
-(long long)spellCheckingType;
-(long long)autocapitalizationType;
-(long long)smartDashesType;
-(void)setSmartDashesType:(long long)arg1;
-(NSString *)textContentType;
-(long long)autocorrectionType;
-(long long)smartInsertDeleteType;
-(void)setSmartQuotesType:(long long)arg1;
-(long long)keyboardAppearance;
-(void)setAutocapitalizationType:(long long)arg1;
-(BOOL)enablesReturnKeyAutomatically;
-(void)setEnablesReturnKeyAutomatically:(BOOL)arg1;
-(void)setTextContentType:(id)arg1;
-(long long)returnKeyType;
-(void)setReturnKeyType:(long long)arg1;
-(long long)keyboardType;
-(void)setKeyboardAppearance:(long long)arg1;
-(UITextInputPasswordRules *)passwordRules;
-(void)setSpellCheckingType:(long long)arg1;
-(BOOL)isSecureTextEntry;
-(void)setAutocorrectionType:(long long)arg1;
-(void)setPasswordRules:(id)arg1;

@end

