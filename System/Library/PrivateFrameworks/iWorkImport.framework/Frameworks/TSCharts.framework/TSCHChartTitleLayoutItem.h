/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHChartLayoutItem.h>

@class NSString;

@interface TSCHChartTitleLayoutItem : TSCHChartLayoutItem {

	double mChartBodyWidth;
	NSString* mEditedString;
	double mMinHitSize;

}

@property (assign,nonatomic) double chartBodyWidth; 
@property (nonatomic,copy) NSString * editedString; 
@property (assign,nonatomic) double minHitSize; 
-(id)titleText;
-(id)initWithParent:(id)arg1 ;
-(id)subselectionKnobPositionsForSelection:(id)arg1 ;
-(CGSize)calcMinSize;
-(CGRect)calcDrawingRect;
-(void)protected_iterateHitChartElements:(CGPoint)arg1 withBlock:(/*^block*/id)arg2 ;
-(CGAffineTransform)transformForRenderingOutElementSize:(CGSize*)arg1 outClipRect:(CGRect*)arg2 ;
-(CGAffineTransform)transformForRenderingRange:(NSRange)arg1 outElementSize:(CGSize*)arg2 outClipRect:(CGRect*)arg3 ;
-(void)setEditedString:(NSString *)arg1 ;
-(BOOL)shouldPlaceTitleAtCenter;
-(CGAffineTransform)searchSelectionTransformForRenderingRange:(NSRange)arg1 outElementSize:(CGSize*)arg2 outClipRect:(CGRect*)arg3 ;
-(id)renderersWithRep:(id)arg1 ;
-(id)subselectionHaloPositionsForSelections:(id)arg1 ;
-(CGPathRef)newDragAndDropHighlightPathForSelection:(id)arg1 ;
-(CGRect)calcOverhangRect;
-(void)setChartBodyWidth:(double)arg1 ;
-(CGSize)calcMinSizeForModel:(id)arg1 ;
-(id)p_titleParagraphStyle;
-(double)chartBodyWidth;
-(CGAffineTransform)p_transformForRenderingRangePtr:(NSRange*)arg1 outElementSize:(CGSize*)arg2 outClipRect:(CGRect*)arg3 forSubselection:(BOOL)arg4 forSearchSelection:(BOOL)arg5 ;
-(double)minHitSize;
-(BOOL)pointHitsTitleRect:(CGPoint)arg1 ;
-(CGAffineTransform)transformForRenderingOutElementSize:(CGSize*)arg1 outClipRect:(CGRect*)arg2 forSubselection:(BOOL)arg3 ;
-(NSString *)editedString;
-(void)setMinHitSize:(double)arg1 ;
@end
