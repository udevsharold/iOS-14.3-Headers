/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VideosExtrasMainMenuSectionMetricsDataSource;
#import <VideosUI/VideosUI-Structs.h>
@class UIFontDescriptor;

@interface VideosExtrasMainMenuSectionMetrics : NSObject {

	double _fittingWidth;
	BOOL _needsUpdate;
	long long _itemCount;
	CGSize* _calculatedSizes;
	id<VideosExtrasMainMenuSectionMetricsDataSource> _dataSource;
	UIFontDescriptor* _desiredFontDescriptor;
	UIFontDescriptor* _minimumFontDescriptor;
	double _desiredCellSpacing;
	double _minimumCellSpacing;
	double _desiredWidth;
	UIFontDescriptor* _fittingFontDescriptor;
	double _fittingCellSpacing;
	CGSize _totalFittingSize;

}

@property (assign,nonatomic,__weak) id<VideosExtrasMainMenuSectionMetricsDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UIFontDescriptor * desiredFontDescriptor;                                        //@synthesize desiredFontDescriptor=_desiredFontDescriptor - In the implementation block
@property (nonatomic,retain) UIFontDescriptor * minimumFontDescriptor;                                        //@synthesize minimumFontDescriptor=_minimumFontDescriptor - In the implementation block
@property (assign,nonatomic) double desiredCellSpacing;                                                       //@synthesize desiredCellSpacing=_desiredCellSpacing - In the implementation block
@property (assign,nonatomic) double minimumCellSpacing;                                                       //@synthesize minimumCellSpacing=_minimumCellSpacing - In the implementation block
@property (assign,nonatomic) double desiredWidth;                                                             //@synthesize desiredWidth=_desiredWidth - In the implementation block
@property (nonatomic,readonly) UIFontDescriptor * fittingFontDescriptor;                                      //@synthesize fittingFontDescriptor=_fittingFontDescriptor - In the implementation block
@property (nonatomic,readonly) double fittingCellSpacing;                                                     //@synthesize fittingCellSpacing=_fittingCellSpacing - In the implementation block
@property (nonatomic,readonly) CGSize totalFittingSize;                                                       //@synthesize totalFittingSize=_totalFittingSize - In the implementation block
-(void)_setNeedsUpdate;
-(void)setDataSource:(id<VideosExtrasMainMenuSectionMetricsDataSource>)arg1 ;
-(void)dealloc;
-(double)desiredWidth;
-(void)setDesiredWidth:(double)arg1 ;
-(id<VideosExtrasMainMenuSectionMetricsDataSource>)dataSource;
-(void)_updateAllMetrics;
-(void)_recalculateSizes;
-(double)desiredCellSpacing;
-(UIFontDescriptor *)desiredFontDescriptor;
-(CGSize)_horizontalFittingSizeForFontDescriptor:(id)arg1 gutterSize:(double)arg2 itemCount:(long long)arg3 itemSizes:(out CGSize*)arg4 ;
-(void)setDesiredFontDescriptor:(UIFontDescriptor *)arg1 ;
-(void)setMinimumFontDescriptor:(UIFontDescriptor *)arg1 ;
-(void)setDesiredCellSpacing:(double)arg1 ;
-(void)setMinimumCellSpacing:(double)arg1 ;
-(void)setFittingWidth:(double)arg1 ;
-(CGSize)sizeForCellAtIndex:(long long)arg1 ;
-(void)updateSizes;
-(UIFontDescriptor *)minimumFontDescriptor;
-(double)minimumCellSpacing;
-(UIFontDescriptor *)fittingFontDescriptor;
-(double)fittingCellSpacing;
-(CGSize)totalFittingSize;
@end
