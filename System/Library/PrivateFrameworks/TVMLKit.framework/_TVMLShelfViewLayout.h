/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVShelfViewLayout.h>

@interface _TVMLShelfViewLayout : _TVShelfViewLayout {

	double _showcaseFactor;
	double _cachedTallestHeaderHeight;
	TVCellMetrics _cellMetrics;

}

@property (assign,nonatomic) TVCellMetrics cellMetrics;                     //@synthesize cellMetrics=_cellMetrics - In the implementation block
@property (assign,nonatomic) double showcaseFactor;                         //@synthesize showcaseFactor=_showcaseFactor - In the implementation block
@property (assign,nonatomic) double cachedTallestHeaderHeight;              //@synthesize cachedTallestHeaderHeight=_cachedTallestHeaderHeight - In the implementation block
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)init;
-(/*^block*/id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3 ;
-(double)showcaseFactor;
-(TVCellMetrics)cellMetrics;
-(double)cachedTallestHeaderHeight;
-(void)setCachedTallestHeaderHeight:(double)arg1 ;
-(void)setCellMetrics:(TVCellMetrics)arg1 ;
-(void)setShowcaseFactor:(double)arg1 ;
-(double)expectedLineSpacing;
-(double)headerAllowance;
-(id)contentRowMetricsForShowcase:(BOOL)arg1 ;
@end

