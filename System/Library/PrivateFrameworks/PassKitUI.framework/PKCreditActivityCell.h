/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UILabel, NSString, PKDashboardCreditAccountItem, PKSpendingSummaryChartView, UIFont;

@interface PKCreditActivityCell : PKDashboardCollectionViewCell {

	UILabel* _labelTitle;
	NSString* _title;
	BOOL _isCompactUI;
	BOOL _useAccssibilityLayout;
	PKDashboardCreditAccountItem* _item;
	PKSpendingSummaryChartView* _chartView;
	UIFont* _titleFont;

}

@property (nonatomic,retain) PKDashboardCreditAccountItem * item;                   //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) PKSpendingSummaryChartView * chartView;              //@synthesize chartView=_chartView - In the implementation block
@property (assign,nonatomic) BOOL useAccssibilityLayout;                            //@synthesize useAccssibilityLayout=_useAccssibilityLayout - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                                    //@synthesize titleFont=_titleFont - In the implementation block
-(PKDashboardCreditAccountItem *)item;
-(void)setItem:(PKDashboardCreditAccountItem *)arg1 ;
-(UIFont *)titleFont;
-(void)setTitleFont:(UIFont *)arg1 ;
-(void)_createSubviews;
-(void)layoutSubviews;
-(PKSpendingSummaryChartView *)chartView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)useAccssibilityLayout;
-(void)setUseAccssibilityLayout:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
@end

