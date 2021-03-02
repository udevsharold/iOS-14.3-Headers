/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClipUIServices/ClipUIServices-Structs.h>
#import <UIKitCore/UIVisualEffectView.h>
#import <UIKit/UIContentSizeCategoryAdjusting.h>

@class UILabel, NSString;

@interface CPSVibrantLabel : UIVisualEffectView <UIContentSizeCategoryAdjusting> {

	UILabel* _label;

}

@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)lineBreakMode;
-(BOOL)adjustsFontForContentSizeCategory;
-(long long)textAlignment;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(NSString *)text;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(BOOL)isUserInteractionEnabled;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(BOOL)adjustsFontSizeToFitWidth;
-(long long)numberOfLines;
-(void)setTextAlignment:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithTextStyle:(id)arg1 textVariant:(long long)arg2 vibrancyEffectStyle:(long long)arg3 ;
@end
