/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSString, UILabel;

@interface HRBulletedIndentedLabel : UIView {

	NSString* _text;
	UILabel* _label;

}

@property (nonatomic,retain) UILabel * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * text;                //@synthesize text=_text - In the implementation block
+(id)_bodyFont;
+(id)_bodyFontTextStyle;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_setUpConstraints;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)lastBaselineAnchor;
-(id)initWithText:(id)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(void)_setUpUI;
-(id)firstBaselineAnchor;
-(UILabel *)label;
-(void)_updateLeadingDetailAttributedTextSize;
@end

