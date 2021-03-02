/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@class NSAttributedString, UITextView, NSString;

@interface HKEmergencyCardSOSDetailsCell : UITableViewCell <UITextViewDelegate> {

	NSAttributedString* _footerAttributedText;
	UITextView* _footerTextView;

}

@property (nonatomic,retain) UITextView * footerTextView;                          //@synthesize footerTextView=_footerTextView - In the implementation block
@property (nonatomic,copy) NSAttributedString * footerAttributedText;              //@synthesize footerAttributedText=_footerAttributedText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)tintColorDidChange;
-(void)_updateText;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_setupViews;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)_setupConstraints;
-(UITextView *)footerTextView;
-(void)setFooterTextView:(UITextView *)arg1 ;
-(void)setFooterAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)footerAttributedText;
@end
