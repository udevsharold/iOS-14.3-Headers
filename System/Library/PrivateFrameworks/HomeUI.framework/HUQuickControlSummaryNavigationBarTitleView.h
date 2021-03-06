/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/_UINavigationBarTitleView.h>

@class HUQuickControlSummaryView, NSArray;

@interface HUQuickControlSummaryNavigationBarTitleView : _UINavigationBarTitleView {

	HUQuickControlSummaryView* _summaryView;
	NSArray* _contentConstraints;

}

@property (nonatomic,retain) HUQuickControlSummaryView * summaryView;              //@synthesize summaryView=_summaryView - In the implementation block
@property (nonatomic,retain) NSArray * contentConstraints;                         //@synthesize contentConstraints=_contentConstraints - In the implementation block
-(void)transitionCompleted:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(void)setContentConstraints:(NSArray *)arg1 ;
-(void)updateConstraints;
-(void)setSummaryView:(HUQuickControlSummaryView *)arg1 ;
-(NSArray *)contentConstraints;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(HUQuickControlSummaryView *)summaryView;
@end

