/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIKeyInput.h>

@class NSMutableString, UITapGestureRecognizer, NSArray, UILabel, NSString, UITextInputPasswordRules;

@interface AKCodeEntryView : UIView <UIKeyInput> {

	NSMutableString* _stringValue;
	UITapGestureRecognizer* _tapGestureRecognizer;
	BOOL _passcodeFieldDisabled;
	NSArray* _generatorFields;
	NSArray* _activeConstraints;

}

@property (nonatomic,retain) NSArray * generatorFields;                                  //@synthesize generatorFields=_generatorFields - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;                                //@synthesize activeConstraints=_activeConstraints - In the implementation block
@property (nonatomic,readonly) UILabel * firstGeneratorField; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,readonly) BOOL hasText; 
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)generatorFieldFont;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(BOOL)becomeFirstResponder;
-(BOOL)hasText;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)updateConstraints;
-(long long)keyboardAppearance;
-(long long)keyboardType;
-(void)setStringValue:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)stringValue;
-(void)passcodeFieldTapped:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(NSArray *)activeConstraints;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isSecureTextEntry;
-(void)_updateFonts:(id)arg1 ;
-(UILabel *)firstGeneratorField;
-(void)_syncStringValueToLabels;
-(void)emitCodeEnteredNotification;
-(void)setPasscodeFieldDisabled:(BOOL)arg1 ;
-(NSArray *)generatorFields;
-(void)setGeneratorFields:(NSArray *)arg1 ;
@end
