/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHUnretainedParent.h>

@class NSArray, TSCHChartRootLayoutItem, TSCHChartInfo, TSCHChartModel;

@interface TSCHChartLayoutItem : NSObject <TSCHUnretainedParent> {

	TSCHChartLayoutItem* mParent;
	NSArray* mChildren;
	BOOL mTreeBuilt;
	CGPoint mOffset;
	CGSize mLayoutSize;
	BOOL mLayoutSizeSet;
	CGRect mDrawingRectCache;
	BOOL mDrawingRectCacheValid;
	CGSize mMinSizeCache;
	BOOL mMinSizeCacheValid;
	CGRect mOverhangRectCache;
	BOOL mOverhangRectCacheValid;

}

@property (nonatomic,__weak,readonly) TSCHChartLayoutItem * parent; 
@property (nonatomic,readonly) TSCHChartRootLayoutItem * root; 
@property (nonatomic,readonly) TSCHChartInfo * chartInfo; 
@property (nonatomic,readonly) TSCHChartModel * model; 
@property (assign,nonatomic) SCD_Struct_TS50 layoutSettings; 
@property (readonly) CGSize minSize; 
@property (assign,nonatomic) CGPoint layoutOffset; 
@property (assign,nonatomic) CGSize layoutSize; 
@property (assign,nonatomic) CGRect layoutRect; 
@property (nonatomic,readonly) CGRect rootedLayoutRect; 
@property (nonatomic,readonly) CGPoint drawingOffset; 
@property (nonatomic,readonly) CGSize drawingSize; 
@property (nonatomic,readonly) CGRect drawingRect; 
@property (nonatomic,readonly) CGRect rootedDrawingRect; 
@property (nonatomic,readonly) CGRect overhangRect; 
@property (nonatomic,readonly) BOOL isInResize; 
@property (nonatomic,readonly) CGSize startingSize; 
@property (nonatomic,readonly) unsigned long long dataSetIndex; 
+(id)chartLayoutWithChartInfo:(id)arg1 ;
-(TSCHChartRootLayoutItem *)root;
-(CGPoint)drawingOffset;
-(TSCHChartModel *)model;
-(void)dealloc;
-(CGSize)minSize;
-(CGSize)layoutSize;
-(TSCHChartLayoutItem *)parent;
-(void)clearAll;
-(id)description;
-(CGPoint)layoutOffset;
-(void)setLayoutSize:(CGSize)arg1 ;
-(id)initWithParent:(id)arg1 ;
-(void)setLayoutSettings:(SCD_Struct_TS50)arg1 ;
-(SCD_Struct_TS50)layoutSettings;
-(CGSize)drawingSize;
-(TSCHChartInfo *)chartInfo;
-(void)clearParent;
-(CGRect)rootedLayoutRect;
-(id)subselectionKnobPositionsForSelection:(id)arg1 ;
-(CGSize)calcMinSize;
-(CGRect)calcDrawingRect;
-(void)protected_iterateHitChartElements:(CGPoint)arg1 withBlock:(/*^block*/id)arg2 ;
-(CGRect)layoutRect;
-(BOOL)isInResize;
-(CGSize)startingSize;
-(void)p_layoutInward;
-(void)p_layoutOutward;
-(void)setLayoutOffset:(CGPoint)arg1 ;
-(CGRect)rootedDrawingRect;
-(id)renderersWithRep:(id)arg1 ;
-(unsigned long long)dataSetIndex;
-(CGRect)drawingRect;
-(void)layoutUsingMethod:(int)arg1 ;
-(id)hitChartElements:(CGPoint)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)subselectionHaloPositionsForSelections:(id)arg1 ;
-(CGPathRef)newDragAndDropHighlightPathForSelection:(id)arg1 ;
-(CGRect)calcOverhangRect;
-(id)p_description;
-(void)buildSubTree;
-(void)clearLayoutSize;
-(void)clearDrawingRect;
-(void)clearOverhangRect;
-(CGRect)overhangRect;
-(BOOL)stopIteratingItemsContainingPoint:(CGPoint)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)p_iterateChildrenWithBlock:(/*^block*/id)arg1 ;
-(void)clearMinSize;
-(void)setLayoutRect:(CGRect)arg1 ;
-(CGPoint)overhangOffset;
-(CGSize)overhangSize;
-(double)overhangMagnitudeForEdge:(unsigned)arg1 ;
@end

