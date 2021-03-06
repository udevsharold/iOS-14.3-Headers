/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol SKUIRedeemIdTableViewCellDelegate;
@class UITextField, NSString;

@interface SKUIRedeemIdTableViewCell : UITableViewCell <UITextFieldDelegate> {

	id<SKUIRedeemIdTableViewCellDelegate> _delegate;
	UITextField* _textField;

}

@property (nonatomic,retain) UITextField * textField;                                            //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIRedeemIdTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setKeyboardType:(long long)arg1 ;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setReturnKeyType:(long long)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setTextField:(UITextField *)arg1 ;
-(void)layoutSubviews;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(void)setDelegate:(id<SKUIRedeemIdTableViewCellDelegate>)arg1 ;
-(UITextField *)textField;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setPlaceholderText:(id)arg1 ;
-(id<SKUIRedeemIdTableViewCellDelegate>)delegate;
-(void)_initializeTextField;
-(void)setAutoCapitalizationType:(long long)arg1 ;
@end

