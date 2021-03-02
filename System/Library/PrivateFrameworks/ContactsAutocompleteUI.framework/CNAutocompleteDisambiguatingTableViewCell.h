/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsAutocompleteUI/CNComposeTableViewCell.h>

@class UIImageView, UIView;

@interface CNAutocompleteDisambiguatingTableViewCell : CNComposeTableViewCell {

	BOOL _checkmarkVisible;
	UIImageView* _checkmarkImageView;

}

@property (retain) UIImageView * checkmarkImageView;                                       //@synthesize checkmarkImageView=_checkmarkImageView - In the implementation block
@property (assign,getter=isCheckmarkVisible,nonatomic) BOOL checkmarkVisible;              //@synthesize checkmarkVisible=_checkmarkVisible - In the implementation block
@property (readonly) UIView * checkmarkView; 
+(id)createCheckmarkView;
+(id)identifier;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setRecipient:(id)arg1 ;
-(BOOL)canCollapseRecipient;
-(UIView *)checkmarkView;
-(void)setCheckmarkVisible:(BOOL)arg1 ;
-(void)setCheckmarkImageView:(UIImageView *)arg1 ;
-(UIImageView *)checkmarkImageView;
-(BOOL)isCheckmarkVisible;
-(id)titleTextStyle;
@end
