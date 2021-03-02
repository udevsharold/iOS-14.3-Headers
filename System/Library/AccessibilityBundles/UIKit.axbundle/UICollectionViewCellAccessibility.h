/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UICollectionViewCellAccessibility_super.h>

@interface UICollectionViewCellAccessibility : __UICollectionViewCellAccessibility_super
+(Class)safeCategoryBaseClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(id)safeCategoryTargetClassName;
-(BOOL)canBecomeFocused;
-(void)willRemoveSubview:(id)arg1 ;
-(id)_accessibilityUserTestingChildren;
-(BOOL)accessibilityScrollToVisible;
-(id)_privateAccessibilityCustomActions;
-(BOOL)shouldGroupAccessibilityChildren;
-(id)accessibilityDragSourceDescriptors;
-(id)accessibilityDropPointDescriptors;
-(unsigned long long)accessibilityTraits;
-(BOOL)_accessibilityIsInCollectionCell;
-(NSRange)_accessibilityIndexPathAsRange;
-(id)_accessibilityParentCollectionView;
-(BOOL)_isEligibleForFocusInteraction;
-(BOOL)_accessibilityImplementsDefaultRowRange;
-(void)prepareForReuse;
-(id)axData;
-(id)_accessibilityIndexPath;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(long long)accessibilityElementCount;
-(void)insertSubview:(id)arg1 belowSubview:(id)arg2 ;
-(void)addSubview:(id)arg1 ;
-(void)insertSubview:(id)arg1 atIndex:(long long)arg2 ;
-(void)insertSubview:(id)arg1 aboveSubview:(id)arg2 ;
-(NSRange)accessibilityRowRange;
-(unsigned long long)_accessibilityAutomationType;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)accessibilityClearInternalData;
-(void)_accessibilityClearInternalCaches;
-(id)_accessibilityCachedChildren;
-(id)_axCustomActionsForActions:(id)arg1 ;
-(id)_accessibilityChildren;
-(id)_accessibilityParentScrollView;
-(BOOL)_axContentViewHasSingleFocusableSubview;
-(void)accessibilityReuseChildren:(id)arg1 forMockParent:(id)arg2 ;
-(BOOL)_accessibilityIsOutsideParentBounds;
@end
