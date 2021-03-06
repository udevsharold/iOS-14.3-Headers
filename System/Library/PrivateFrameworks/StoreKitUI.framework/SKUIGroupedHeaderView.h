/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIView, NSString;

@interface SKUIGroupedHeaderView : UIView {

	UILabel* _titleLabel;
	UIView* _topBorder;
	UIView* _botBorder;

}

@property (assign,nonatomic) BOOL hasTopBorder; 
@property (assign,nonatomic) BOOL hasBottomBorder; 
@property (nonatomic,copy) NSString * title; 
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(BOOL)hasTopBorder;
-(void)setHasTopBorder:(BOOL)arg1 ;
-(BOOL)hasBottomBorder;
-(void)setHasBottomBorder:(BOOL)arg1 ;
@end

