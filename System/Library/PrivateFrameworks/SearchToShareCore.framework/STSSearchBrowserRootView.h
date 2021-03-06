/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSMutableArray, STSSearchBrowserHeaderView, UIView;

@interface STSSearchBrowserRootView : UIView {

	NSMutableArray* _constraints;
	STSSearchBrowserHeaderView* _headerView;
	double _headerTopInset;
	UIView* _contentView;

}

@property (nonatomic,retain) STSSearchBrowserHeaderView * headerView;              //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) double headerTopInset;                                //@synthesize headerTopInset=_headerTopInset - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                 //@synthesize contentView=_contentView - In the implementation block
-(id)init;
-(STSSearchBrowserHeaderView *)headerView;
-(void)didAddSubview:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHeaderView:(STSSearchBrowserHeaderView *)arg1 ;
-(void)setHeaderTopInset:(double)arg1 ;
-(double)headerTopInset;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
@end

