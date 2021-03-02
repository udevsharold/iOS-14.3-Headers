/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngineUI/RelevanceEngineUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, NSAttributedString, UIColor;

@interface REUpNextHeaderView : UICollectionReusableView {

	UILabel* _label;
	NSAttributedString* _attributedText;

}

@property (nonatomic,copy) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,retain) UIColor * textColor; 
+(void)initialize;
-(long long)textAlignment;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(void)setTextAlignment:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end
