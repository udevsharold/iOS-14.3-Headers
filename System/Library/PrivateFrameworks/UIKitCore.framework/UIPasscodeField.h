/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSMutableString, NSMutableArray, UIButton, NSString;

@interface UIPasscodeField : UIView <UITextFieldDelegate> {

	NSMutableString* _value;
	NSMutableArray* _entryFields;
	NSMutableArray* _entryBackgrounds;
	UIButton* _okButton;
	BOOL _opaqueBackground;
	BOOL _centerHorizontally;
	long long _keyboardType;
	long long _keyboardAppearance;
	int _emptyContentReturnKeyType;
	id _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultHeight;
+(Class)textFieldClass;
-(void)setKeyboardType:(long long)arg1 ;
-(BOOL)becomeFirstResponder;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setStringValue:(id)arg1 ;
-(void)dealloc;
-(id)stringValue;
-(void)appendString:(id)arg1 ;
-(void)textFieldDidResignFirstResponder:(id)arg1 ;
-(BOOL)isFirstResponder;
-(BOOL)textFieldShouldStartEditing:(id)arg1 ;
-(void)setTextCentersHorizontally:(BOOL)arg1 ;
-(void)okButtonClicked:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)_updateFields;
-(void)setShowsOKButton:(BOOL)arg1 ;
-(void)setKeyboardType:(long long)arg1 appearance:(long long)arg2 ;
-(void)setNumberOfEntryFields:(int)arg1 opaqueBackground:(BOOL)arg2 ;
-(void)setKeyboardType:(long long)arg1 appearance:(long long)arg2 emptyContentReturnKeyType:(int)arg3 ;
-(void)deleteLastCharacter;
-(BOOL)showsOKButton;
-(BOOL)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(NSRange)arg3 ;
-(void)_textDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(int)numberOfEntryFields;
-(void)setNumberOfEntryFields:(int)arg1 ;
@end

