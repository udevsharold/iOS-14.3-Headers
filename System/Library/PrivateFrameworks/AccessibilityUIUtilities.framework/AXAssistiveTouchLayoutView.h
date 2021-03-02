/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray;

@interface AXAssistiveTouchLayoutView : UIView {

	NSArray* _itemConstraints;
	NSMutableArray* _positioningLayoutGuides;

}

@property (nonatomic,retain) NSArray * itemConstraints;                             //@synthesize itemConstraints=_itemConstraints - In the implementation block
@property (nonatomic,retain) NSMutableArray * positioningLayoutGuides;              //@synthesize positioningLayoutGuides=_positioningLayoutGuides - In the implementation block
+(id)fontMetrics;
+(id)labelFont;
+(id)labelMinimumContentSizeCategory;
+(id)labelMaximumContentSizeCategory;
+(id)_preferredContentSizeCategoryCappedByMinimumContentSizeCategory:(id)arg1 maximumContentSizeCategory:(id)arg2 ;
+(double)_layoutViewSideLengthScaledFromDefaultLength:(double)arg1 labelContentSizeCategory:(id)arg2 ;
+(id)_imageMaximumContentSizeCategoryIndependentOfLabel;
+(double)minimumOuterPadding;
+(double)defaultSideLength;
+(id)_traitCollectionForMinimumContentSizeCategory:(id)arg1 maximumContentSizeCategory:(id)arg2 ;
+(id)imageMinimumContentSizeCategory;
+(id)imageMaximumContentSizeCategory;
+(id)traitCollectionForLabelPreferredContentSizeCategory;
+(double)layoutViewSideLengthScaledFromDefaultLength:(double)arg1 ;
+(id)traitCollectionForImagePreferredContentSizeCategory;
-(void)_enableAutoLayoutForAllItems:(id)arg1 ;
-(NSArray *)itemConstraints;
-(void)layoutItemsByLocation:(id)arg1 positions:(id)arg2 rows:(id)arg3 columns:(id)arg4 clockwiseOctagonalLocations:(id)arg5 horizontallyCenteredLocation:(id)arg6 ;
-(void)setItemConstraints:(NSArray *)arg1 ;
-(id)_setUpConstraintsForPreferredPositionsForItems:(id)arg1 positions:(id)arg2 ;
-(id)_setUpConstraintsToAlignItems:(id)arg1 rows:(id)arg2 columns:(id)arg3 ;
-(id)_setUpConstraintsToAvoidCollisions:(id)arg1 rows:(id)arg2 columns:(id)arg3 clockwiseOctagonalLocations:(id)arg4 ;
-(NSMutableArray *)positioningLayoutGuides;
-(void)setPositioningLayoutGuides:(NSMutableArray *)arg1 ;
-(void)_enumerateListsOfLocations:(id)arg1 items:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)centerItems:(id)arg1 withView:(id)arg2 ;
-(void)layoutItemsByLocation:(id)arg1 hasBackButton:(BOOL)arg2 ;
-(void)centerItems:(id)arg1 ;
@end
