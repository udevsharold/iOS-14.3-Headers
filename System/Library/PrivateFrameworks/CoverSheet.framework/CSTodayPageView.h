/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSPageViewBase.h>

@class UIView, UIScrollView;

@interface CSTodayPageView : CSPageViewBase {

	UIView* _todayView;
	UIScrollView* _widgetMajorScrollView;
	double _navigationBarTopInset;

}

@property (nonatomic,retain) UIView * todayView;                                //@synthesize todayView=_todayView - In the implementation block
@property (nonatomic,retain) UIScrollView * widgetMajorScrollView;              //@synthesize widgetMajorScrollView=_widgetMajorScrollView - In the implementation block
@property (assign,nonatomic) double navigationBarTopInset;                      //@synthesize navigationBarTopInset=_navigationBarTopInset - In the implementation block
-(UIView *)todayView;
-(void)_layoutTodayView;
-(double)navigationBarTopInset;
-(void)setNavigationBarTopInset:(double)arg1 ;
-(void)setTodayView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setWidgetMajorScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)widgetMajorScrollView;
@end
