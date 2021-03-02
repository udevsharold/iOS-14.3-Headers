/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UITextView, NSAttributedString;

@interface HKMedicalIDEmergencyAccessLearnMoreCell : UITableViewCell {

	UITextView* _bodyTextView;
	NSAttributedString* _body;

}

@property (nonatomic,copy) NSAttributedString * body;              //@synthesize body=_body - In the implementation block
-(NSAttributedString *)body;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setBody:(NSAttributedString *)arg1 ;
-(void)_setUpConstraints;
-(void)_addSubviews;
-(void)_setUpViews;
@end
