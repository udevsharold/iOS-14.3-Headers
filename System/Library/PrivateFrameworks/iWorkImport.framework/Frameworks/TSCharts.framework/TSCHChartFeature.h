/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHUnretainedParent.h>

@class TSCHChartType, NSArray;

@interface TSCHChartFeature : NSObject <TSCHUnretainedParent> {

	TSCHChartType* mChartType;
	NSArray* mValueAxisIDs;
	NSArray* mCategoryAxisIDs;

}

@property (nonatomic,retain,readonly) NSArray * valueAxisIDs; 
@property (nonatomic,retain,readonly) NSArray * categoryAxisIDs; 
-(void)dealloc;
-(BOOL)supportsEditing;
-(BOOL)isHorizontal;
-(BOOL)requiresStagesBuildingInReverse;
-(BOOL)suppliesFinalTextures;
-(BOOL)supportsSharedAndSeparateX;
-(NSArray *)valueAxisIDs;
-(BOOL)supportsMultipleValuesPerSeries;
-(unsigned long long)maxCellsToCheckForGridValueType;
-(void)clearParent;
-(id)valueLabelPositioner;
-(id)categoryLabelPositioner;
-(BOOL)supportsSeriesLabels;
-(BOOL)supportsReferenceLines;
-(double)maxDepthRatio;
-(double)sageMaxDepthRatio;
-(double)spiceMaxDepthRatio;
-(Class)stageClass;
-(BOOL)drawValueLabelsForZero;
-(id)supportedAxisScales;
-(BOOL)editableFormatForValueStrings;
-(unsigned long long)styleIndexForAxisID:(id)arg1 ;
-(Class)valueAxisClassForID:(id)arg1 scale:(long long)arg2 ;
-(NSArray *)categoryAxisIDs;
-(BOOL)supportsMultipleSeriesTypes;
-(BOOL)requiresYAxisOrdinal;
-(id)defaultDataFileName;
-(BOOL)supportsLabelExplosion;
-(BOOL)supportsCalloutLines;
-(id)genericToSpecificPropertyMap;
-(BOOL)supportsValueLabels;
-(int)stackingSignRule;
-(id)initWithChartType:(id)arg1 ;
-(Class)presetImagerClass;
-(id)supportedSeriesTypes;
-(BOOL)supportsBorderFrame;
-(BOOL)supportsEditingForAxisID:(id)arg1 ;
-(BOOL)reverseSingleColumnLegendOrder;
-(BOOL)supportsGroupedShadows;
-(BOOL)supportsBackgroundFill;
-(BOOL)supportsTrendLines;
-(BOOL)supportsErrorBars;
-(BOOL)supportsElementSeriesNames;
-(BOOL)supportsPercentNumberFormatting;
-(BOOL)supportsSymbolOverhang;
-(BOOL)supportsElementChunking;
-(BOOL)supportsCategoryAxisMinorTickmarks;
-(BOOL)supportsCategoryAxisSeriesNames;
-(BOOL)supportsConnectingLines;
-(BOOL)hasFixedFrameRatio;
-(BOOL)rendersBackgroundAxis;
-(BOOL)hasExplodableSeriesElements;
-(BOOL)rendersUsingRadialGeometry;
-(BOOL)supportsCategoryLabelsInChartRangeEditor;
-(BOOL)supportsBubbleOptions;
-(unsigned long long)gridOffsetToSeriesForScatterFormat:(int)arg1 ;
-(int)representativeGridValueAxisType;
-(BOOL)supportsValueLabelSpacing;
-(void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2 ;
-(BOOL)supportsShowLabelsInFrontOption;
-(id)filteredStyleOwnersFromStyleOwners:(id)arg1 ;
-(float)defaultLabelExplosionPercentage;
-(BOOL)supportsPlaceTitleAtCenter;
-(double)minInnerRadiusPercentage;
-(double)maxInnerRadiusPercentage;
-(id)userInterfaceNameForPlaceTitleAtCenter:(BOOL)arg1 ;
-(BOOL)supportsIndividualShadowRendering;
-(int)labelOrientation;
-(BOOL)supportsColumnShape;
-(id)columnShapeUIName;
-(BOOL)supportsStartAngleRotation;
-(id)initialSceneWithChartInfo:(id)arg1 layoutSettings:(SCD_Struct_TS50)arg2 ;
-(BOOL)supportsInterSetDepthGap;
-(int)deprecated3DBevelEdgesSpecificProperty;
-(int)deprecated3DShadowSpecificProperty;
-(void)p_initializeAxisIDs;
-(Class)p_selectAxisClassForScale:(long long)arg1 linearClass:(Class)arg2 logClass:(Class)arg3 percentClass:(Class)arg4 ;
@end

