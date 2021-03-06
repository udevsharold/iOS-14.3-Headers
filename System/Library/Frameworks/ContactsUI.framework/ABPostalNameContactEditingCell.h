/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, NSString;

@interface ABPostalNameContactEditingCell : CNContactCell <UITextFieldDelegate> {

	UITextField* _editingTextField;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)setCardGroupItem:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)firstResponderItem;
-(void)textFieldDidChange:(id)arg1 ;
-(void)_cnui_applyContactStyle;
@end

