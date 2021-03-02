/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UICollectionViewLayoutOrthogonalScrolling <NSObject>
@required
-(id)_extendedAttributesQueryIncludingOrthogonalScrollingRegions:(CGRect)arg1;
-(BOOL)_orthogonalScrollingUsesTargetContentOffsetForSection:(long long)arg1;
-(unsigned long long)_orthogonalScrollingAxis;
-(id)_orthogonalScrollingSections;
-(CGRect*)_orthogonalScrollingLayoutRectForSection:(long long)arg1;
-(CGPoint*)_orthogonalScrollingTargetContentOffsetForOffset:(CGPoint)arg1 section:(long long)arg2;
-(BOOL)_orthogonalScrollingElementShouldAppearAboveForAttributes:(id)arg1;
-(CGPoint*)_offsetForOrthogonalScrollingSection:(long long)arg1;
-(NSDirectionalEdgeInsets*)_orthogonalScrollingContentInsetsForSection:(long long)arg1;
-(CGVector*)_scrollingUnitVectorForOrthogonalScrollingSection:(long long)arg1;
-(BOOL)_shouldOrthogonalScrollingSectionDecorationScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2;
-(void)_setOffset:(CGPoint)arg1 forOrthogonalScrollingSection:(long long)arg2;
-(BOOL)_shouldConfigureForPagingForOrthogonalScrollingSection:(long long)arg1;
-(BOOL)_orthogonalScrollingShouldCenterCustomPagingSizeForSection:(long long)arg1;
-(double)_orthogonalScrollingDecelerationRateForSection:(long long)arg1;
-(CGRect*)_orthogonalFrameWithOffsetElidedForItemWithLayoutAttributes:(id)arg1 frame:(CGRect)arg2;
-(CGRect*)_orthogonalScrollingContentRectForSection:(long long)arg1;
-(double)_orthogonalScrollingPagingDimensionForSection:(long long)arg1;
-(BOOL)_shouldOrthogonalScrollingSectionSupplementaryScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2;
-(BOOL)_hasOrthogonalScrollingSections;
-(id)_orthogonalScrollingStateForSection:(long long)arg1;
-(id)_orthogonalScrollingTrace;

@end
