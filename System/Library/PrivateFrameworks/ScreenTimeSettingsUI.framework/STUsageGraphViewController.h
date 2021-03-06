/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeSettingsUI/ScreenTimeSettingsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class STUsageReportGraphDataSet, STBarView, UIView, STPaddleView, NSLayoutConstraint, NSArray, UILayoutGuide, UIImageView, UILabel, STDashedVerticalDivider, UIImage, NSString;

@interface STUsageGraphViewController : UIViewController <UIGestureRecognizerDelegate> {

	BOOL _includePaddle;
	BOOL _useVibrancy;
	STUsageReportGraphDataSet* _dataSet;
	long long _selectedWeekday;
	STBarView* _selectedBarView;
	unsigned long long _week;
	unsigned long long _day;
	UIView* _titleView;
	STPaddleView* _paddleView;
	UIView* _paddleConnectorView;
	NSLayoutConstraint* _paddleViewCenterXConstraint;
	NSLayoutConstraint* _paddleViewConnectorCenterXConstraint;
	NSArray* _verticalDividers;
	NSArray* _horizontalDividers;
	NSArray* _barViews;
	NSArray* _barIndicators;
	NSArray* _barViewHeightConstraints;
	NSArray* _verticalLayoutGuides;
	UILayoutGuide* _graphLayoutGuide;
	UILayoutGuide* _xAxisLabelSectionLayoutGuide;
	UILayoutGuide* _yAxisLabelSectionLayoutGuide;
	UILayoutGuide* _barSectionLayoutGuide;
	NSLayoutConstraint* _yAxisLabelSectionWidthConstraint;
	UIImageView* _weeklyAverageLine;
	UILabel* _weeklyAverageLabel;
	UILayoutGuide* _weeklyAverageLayoutGuide;
	NSLayoutConstraint* _weeklyAverageHeightConstraint;
	NSLayoutConstraint* _weeklyAverageTrailingConstraint;
	UIView* _vibrancyEffectContentView;
	STDashedVerticalDivider* _selectedVerticalDivider;
	STBarView* _pressedBarView;
	double _graphHeight;

}

@property (readonly) UIView * titleView;                                                   //@synthesize titleView=_titleView - In the implementation block
@property (retain) STPaddleView * paddleView;                                              //@synthesize paddleView=_paddleView - In the implementation block
@property (retain) UIView * paddleConnectorView;                                           //@synthesize paddleConnectorView=_paddleConnectorView - In the implementation block
@property (retain) NSLayoutConstraint * paddleViewCenterXConstraint;                       //@synthesize paddleViewCenterXConstraint=_paddleViewCenterXConstraint - In the implementation block
@property (retain) NSLayoutConstraint * paddleViewConnectorCenterXConstraint;              //@synthesize paddleViewConnectorCenterXConstraint=_paddleViewConnectorCenterXConstraint - In the implementation block
@property (copy) NSArray * verticalDividers;                                               //@synthesize verticalDividers=_verticalDividers - In the implementation block
@property (copy) NSArray * horizontalDividers;                                             //@synthesize horizontalDividers=_horizontalDividers - In the implementation block
@property (copy) NSArray * barViews;                                                       //@synthesize barViews=_barViews - In the implementation block
@property (copy) NSArray * barIndicators;                                                  //@synthesize barIndicators=_barIndicators - In the implementation block
@property (copy) NSArray * barViewHeightConstraints;                                       //@synthesize barViewHeightConstraints=_barViewHeightConstraints - In the implementation block
@property (copy) NSArray * verticalLayoutGuides;                                           //@synthesize verticalLayoutGuides=_verticalLayoutGuides - In the implementation block
@property (retain) UILayoutGuide * graphLayoutGuide;                                       //@synthesize graphLayoutGuide=_graphLayoutGuide - In the implementation block
@property (retain) UILayoutGuide * xAxisLabelSectionLayoutGuide;                           //@synthesize xAxisLabelSectionLayoutGuide=_xAxisLabelSectionLayoutGuide - In the implementation block
@property (retain) UILayoutGuide * yAxisLabelSectionLayoutGuide;                           //@synthesize yAxisLabelSectionLayoutGuide=_yAxisLabelSectionLayoutGuide - In the implementation block
@property (retain) UILayoutGuide * barSectionLayoutGuide;                                  //@synthesize barSectionLayoutGuide=_barSectionLayoutGuide - In the implementation block
@property (retain) NSLayoutConstraint * yAxisLabelSectionWidthConstraint;                  //@synthesize yAxisLabelSectionWidthConstraint=_yAxisLabelSectionWidthConstraint - In the implementation block
@property (retain) UIImageView * weeklyAverageLine;                                        //@synthesize weeklyAverageLine=_weeklyAverageLine - In the implementation block
@property (retain) UILabel * weeklyAverageLabel;                                           //@synthesize weeklyAverageLabel=_weeklyAverageLabel - In the implementation block
@property (retain) UILayoutGuide * weeklyAverageLayoutGuide;                               //@synthesize weeklyAverageLayoutGuide=_weeklyAverageLayoutGuide - In the implementation block
@property (retain) NSLayoutConstraint * weeklyAverageHeightConstraint;                     //@synthesize weeklyAverageHeightConstraint=_weeklyAverageHeightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * weeklyAverageTrailingConstraint;                   //@synthesize weeklyAverageTrailingConstraint=_weeklyAverageTrailingConstraint - In the implementation block
@property (retain) UIView * vibrancyEffectContentView;                                     //@synthesize vibrancyEffectContentView=_vibrancyEffectContentView - In the implementation block
@property (retain) STBarView * selectedBarView;                                            //@synthesize selectedBarView=_selectedBarView - In the implementation block
@property (retain) STDashedVerticalDivider * selectedVerticalDivider;                      //@synthesize selectedVerticalDivider=_selectedVerticalDivider - In the implementation block
@property (nonatomic,retain) STBarView * pressedBarView;                                   //@synthesize pressedBarView=_pressedBarView - In the implementation block
@property (readonly) UIImage * dashedAverageLineImage; 
@property (readonly) double graphHeight;                                                   //@synthesize graphHeight=_graphHeight - In the implementation block
@property (readonly) BOOL includePaddle;                                                   //@synthesize includePaddle=_includePaddle - In the implementation block
@property (readonly) BOOL useVibrancy;                                                     //@synthesize useVibrancy=_useVibrancy - In the implementation block
@property (nonatomic,retain) STUsageReportGraphDataSet * dataSet;                          //@synthesize dataSet=_dataSet - In the implementation block
@property (assign,nonatomic) long long selectedWeekday;                                    //@synthesize selectedWeekday=_selectedWeekday - In the implementation block
@property (readonly) double maximumYAxisLabelWidth; 
@property (assign) unsigned long long week;                                                //@synthesize week=_week - In the implementation block
@property (assign) unsigned long long day;                                                 //@synthesize day=_day - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)day;
-(void)setVibrancyEffectContentView:(UIView *)arg1 ;
-(void)setDay:(unsigned long long)arg1 ;
-(void)setSelectedWeekday:(long long)arg1 ;
-(void)setPaddleConnectorView:(UIView *)arg1 ;
-(UILayoutGuide *)yAxisLabelSectionLayoutGuide;
-(double)graphHeight;
-(id)createBarViewWithDataPoint:(id)arg1 layoutGuide:(id)arg2 previousView:(id)arg3 previousLayoutGuide:(id)arg4 layoutGuideWidthMultiplier:(double)arg5 ;
-(void)setPressedBarView:(STBarView *)arg1 ;
-(void)setBarSectionLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)setYAxisLabelSectionWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHorizontalDividers:(NSArray *)arg1 ;
-(void)_selectBarView:(id)arg1 ;
-(STPaddleView *)paddleView;
-(void)setYAxisLabelSectionLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)setUpWeeklyAverageLine:(BOOL)arg1 ;
-(STDashedVerticalDivider *)selectedVerticalDivider;
-(void)setSelectedVerticalDivider:(STDashedVerticalDivider *)arg1 ;
-(id)initWithTitleView:(id)arg1 graphHeight:(double)arg2 includePaddle:(BOOL)arg3 useVibrancy:(BOOL)arg4 ;
-(void)setBarViews:(NSArray *)arg1 ;
-(void)setXAxisLabelSectionLayoutGuide:(UILayoutGuide *)arg1 ;
-(NSLayoutConstraint *)weeklyAverageTrailingConstraint;
-(STBarView *)pressedBarView;
-(NSLayoutConstraint *)weeklyAverageHeightConstraint;
-(void)setWeeklyAverageLine:(UIImageView *)arg1 ;
-(void)setPaddleViewConnectorCenterXConstraint:(NSLayoutConstraint *)arg1 ;
-(UILayoutGuide *)xAxisLabelSectionLayoutGuide;
-(UILayoutGuide *)graphLayoutGuide;
-(void)_showPaddleForBarView:(id)arg1 ;
-(void)setBarIndicators:(NSArray *)arg1 ;
-(void)setDataSet:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(NSArray *)barViewHeightConstraints;
-(long long)selectedWeekday;
-(NSArray *)horizontalDividers;
-(UILabel *)weeklyAverageLabel;
-(NSArray *)barIndicators;
-(id)initWithCoder:(id)arg1 ;
-(UIImageView *)weeklyAverageLine;
-(void)viewDidLayoutSubviews;
-(NSArray *)verticalDividers;
-(NSArray *)barViews;
-(void)_updateBarViewsAndIndicators;
-(UIView *)titleView;
-(void)setDataSet:(STUsageReportGraphDataSet *)arg1 ;
-(double)maximumYAxisLabelWidth;
-(UIView *)vibrancyEffectContentView;
-(void)setVerticalLayoutGuides:(NSArray *)arg1 ;
-(STUsageReportGraphDataSet *)dataSet;
-(void)setWeeklyAverageTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setVerticalDividers:(NSArray *)arg1 ;
-(STBarView *)selectedBarView;
-(void)setUpBarViewHeightContraints;
-(void)setWeeklyAverageHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_stUsageGraphViewControllerCommonInit;
-(NSLayoutConstraint *)paddleViewCenterXConstraint;
-(void)setBarViewHeightConstraints:(NSArray *)arg1 ;
-(id)createFirstDivider;
-(NSLayoutConstraint *)yAxisLabelSectionWidthConstraint;
-(unsigned long long)week;
-(void)_handleLongPressGestureForPaddle:(id)arg1 ;
-(BOOL)includePaddle;
-(void)setWeeklyAverageLabel:(UILabel *)arg1 ;
-(void)setSelectedBarView:(STBarView *)arg1 ;
-(void)setWeek:(unsigned long long)arg1 ;
-(UILayoutGuide *)barSectionLayoutGuide;
-(void)setPaddleViewCenterXConstraint:(NSLayoutConstraint *)arg1 ;
-(UILayoutGuide *)weeklyAverageLayoutGuide;
-(UIView *)paddleConnectorView;
-(id)createBarIndicatorWithImageName:(id)arg1 barView:(id)arg2 ;
-(id)createDividerWithView:(id)arg1 layoutGuide:(id)arg2 previousLayoutGuide:(id)arg3 layoutGuideWidthMultiplier:(double)arg4 ;
-(id)createWeeklyAverageLineWithLayoutGuide:(id)arg1 ;
-(UIImage *)dashedAverageLineImage;
-(NSArray *)verticalLayoutGuides;
-(void)loadView;
-(void)setGraphLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)setUpGraphWithLabelFormatter:(id)arg1 ;
-(NSLayoutConstraint *)paddleViewConnectorCenterXConstraint;
-(void)setYAxisLabelSectionWidth:(double)arg1 ;
-(id)_closestBarViewToPoint:(CGPoint)arg1 ;
-(void)_setUpHorizontalDividerLabels;
-(void)_handleLongPressGestureForBarSelection:(id)arg1 ;
-(void)setPaddleView:(STPaddleView *)arg1 ;
-(BOOL)useVibrancy;
-(void)setWeeklyAverageLayoutGuide:(UILayoutGuide *)arg1 ;
@end

