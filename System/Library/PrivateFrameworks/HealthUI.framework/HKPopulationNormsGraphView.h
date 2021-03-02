/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIFont, UIColor, UILabel, NSMutableArray, HKPopulationNormsChartGridView, NSNumber, UIView;

@interface HKPopulationNormsGraphView : UIView {

	double _maxChartYValue;
	double _minChartYValue;
	NSString* _ySeriesTitle;
	NSString* _xSeriesTitle;
	UIFont* _seriesTitleFont;
	UIColor* _highlightedSegmentColor;
	UILabel* _ySeriesTitleLabel;
	UILabel* _xSeriesTitleLabel;
	NSMutableArray* _ageBucketBarViews;
	HKPopulationNormsChartGridView* _gridView;
	NSNumber* _currentViewWidth;
	unsigned long long _sexSegmentIndex;
	unsigned long long _classificationIndex;
	UIView* _latestSampleHighlightView;
	NSNumber* _ageBucketIndex;
	NSNumber* _latestSampleValue;

}

@property (assign,nonatomic) double maxChartYValue;                                  //@synthesize maxChartYValue=_maxChartYValue - In the implementation block
@property (assign,nonatomic) double minChartYValue;                                  //@synthesize minChartYValue=_minChartYValue - In the implementation block
@property (nonatomic,copy) NSString * ySeriesTitle;                                  //@synthesize ySeriesTitle=_ySeriesTitle - In the implementation block
@property (nonatomic,copy) NSString * xSeriesTitle;                                  //@synthesize xSeriesTitle=_xSeriesTitle - In the implementation block
@property (nonatomic,readonly) UIFont * seriesTitleFont;                             //@synthesize seriesTitleFont=_seriesTitleFont - In the implementation block
@property (nonatomic,readonly) UIColor * highlightedSegmentColor;                    //@synthesize highlightedSegmentColor=_highlightedSegmentColor - In the implementation block
@property (nonatomic,retain) UILabel * ySeriesTitleLabel;                            //@synthesize ySeriesTitleLabel=_ySeriesTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * xSeriesTitleLabel;                            //@synthesize xSeriesTitleLabel=_xSeriesTitleLabel - In the implementation block
@property (nonatomic,retain) NSMutableArray * ageBucketBarViews;                     //@synthesize ageBucketBarViews=_ageBucketBarViews - In the implementation block
@property (nonatomic,retain) HKPopulationNormsChartGridView * gridView;              //@synthesize gridView=_gridView - In the implementation block
@property (nonatomic,retain) NSNumber * currentViewWidth;                            //@synthesize currentViewWidth=_currentViewWidth - In the implementation block
@property (assign,nonatomic) unsigned long long sexSegmentIndex;                     //@synthesize sexSegmentIndex=_sexSegmentIndex - In the implementation block
@property (assign,nonatomic) unsigned long long classificationIndex;                 //@synthesize classificationIndex=_classificationIndex - In the implementation block
@property (nonatomic,retain) UIView * latestSampleHighlightView;                     //@synthesize latestSampleHighlightView=_latestSampleHighlightView - In the implementation block
@property (nonatomic,retain) NSNumber * ageBucketIndex;                              //@synthesize ageBucketIndex=_ageBucketIndex - In the implementation block
@property (nonatomic,retain) NSNumber * latestSampleValue;                           //@synthesize latestSampleValue=_latestSampleValue - In the implementation block
-(HKPopulationNormsChartGridView *)gridView;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)setGridView:(HKPopulationNormsChartGridView *)arg1 ;
-(void)setClassificationIndex:(unsigned long long)arg1 ;
-(unsigned long long)_highlightIndexForClassificationIndex:(unsigned long long)arg1 numberOfSegments:(unsigned long long)arg2 ;
-(id)initWithMaxYValue:(double)arg1 minYValue:(double)arg2 YSeriesTitle:(id)arg3 XSeriesTitle:(id)arg4 highlightedSegmentColor:(id)arg5 ;
-(void)updateWithFlattenedLevelsByAgeBucket:(id)arg1 currentClassificationIndex:(unsigned long long)arg2 ;
-(void)_updateUserValueChartPointIfNecessary;
-(void)updateWithUserAgeBucketIndex:(id)arg1 userLatestSampleValue:(id)arg2 ;
-(double)maxChartYValue;
-(void)setMaxChartYValue:(double)arg1 ;
-(double)minChartYValue;
-(void)setMinChartYValue:(double)arg1 ;
-(NSString *)ySeriesTitle;
-(void)setYSeriesTitle:(NSString *)arg1 ;
-(NSString *)xSeriesTitle;
-(void)setXSeriesTitle:(NSString *)arg1 ;
-(UIFont *)seriesTitleFont;
-(UIColor *)highlightedSegmentColor;
-(UILabel *)ySeriesTitleLabel;
-(void)setYSeriesTitleLabel:(UILabel *)arg1 ;
-(UILabel *)xSeriesTitleLabel;
-(void)setXSeriesTitleLabel:(UILabel *)arg1 ;
-(NSMutableArray *)ageBucketBarViews;
-(void)setAgeBucketBarViews:(NSMutableArray *)arg1 ;
-(NSNumber *)currentViewWidth;
-(void)setCurrentViewWidth:(NSNumber *)arg1 ;
-(unsigned long long)sexSegmentIndex;
-(void)setSexSegmentIndex:(unsigned long long)arg1 ;
-(unsigned long long)classificationIndex;
-(UIView *)latestSampleHighlightView;
-(void)setLatestSampleHighlightView:(UIView *)arg1 ;
-(NSNumber *)ageBucketIndex;
-(void)setAgeBucketIndex:(NSNumber *)arg1 ;
-(NSNumber *)latestSampleValue;
-(void)setLatestSampleValue:(NSNumber *)arg1 ;
@end
