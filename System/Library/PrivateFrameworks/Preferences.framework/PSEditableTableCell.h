/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSTableCell.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class UIColor, PSListController, NSString;

@interface PSEditableTableCell : PSTableCell <UITextViewDelegate, UITextFieldDelegate> {

	UIColor* _textColor;
	id _delegate;
	BOOL _forceFirstResponder;
	BOOL _delaySpecifierRelease;
	SEL _targetSetter;
	id _realTarget;
	BOOL _valueChanged;
	BOOL _returnKeyTapped;
	PSListController* _controllerDelegate;

}

@property (nonatomic,readonly) BOOL returnKeyTapped;                                    //@synthesize returnKeyTapped=_returnKeyTapped - In the implementation block
@property (assign,nonatomic,__weak) PSListController * controllerDelegate;              //@synthesize controllerDelegate=_controllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)cellStyle;
-(BOOL)becomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)resignFirstResponder;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)canReload;
-(id)value;
-(void)cellRemovedFromView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setCellEnabled:(BOOL)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)dealloc;
-(void)setValue:(id)arg1 ;
-(void)setControllerDelegate:(PSListController *)arg1 ;
-(BOOL)isEditing;
-(void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3 ;
-(BOOL)isFirstResponder;
-(PSListController *)controllerDelegate;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(BOOL)canBecomeFirstResponder;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)_defaultTextColor;
-(id)textField;
-(void)controlChanged:(id)arg1 ;
-(void)setPlaceholderText:(id)arg1 ;
-(BOOL)isTextFieldEditing;
-(void)_setValueChanged;
-(void)_saveForExit;
-(void)endEditingAndSave;
-(BOOL)_cellIsEditing;
-(BOOL)returnKeyTapped;
@end

