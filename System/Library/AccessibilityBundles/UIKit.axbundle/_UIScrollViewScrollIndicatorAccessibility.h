/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/___UIScrollViewScrollIndicatorAccessibility_super.h>

@interface _UIScrollViewScrollIndicatorAccessibility : ___UIScrollViewScrollIndicatorAccessibility_super

@property (assign,nonatomic,__weak) id<AXScrollIndicatorDelegate> accessibilityScrollIndicatorDelegate; 
@property (assign,nonatomic) long long accessibilityScrollDirection; 
@property (assign,nonatomic) BOOL accessibilityScrollIndicatorIsFocused; 
+(Class)safeCategoryBaseClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(id)safeCategoryTargetClassName;
-(CGRect)accessibilityFrame;
-(id)accessibilityUserInputLabels;
-(void)accessibilityElementDidBecomeFocused;
-(BOOL)_accessibilityOverridesInvisibility;
-(void)accessibilityElementDidLoseFocus;
-(unsigned long long)accessibilityTraits;
-(long long)_accessibilitySortPriority;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)_accessibilityCanAppearInContextMenuPreview;
-(id)accessibilityLabel;
-(CGPoint)accessibilityActivationPoint;
-(id)accessibilityValue;
-(BOOL)isAccessibilityElement;
-(void)setAccessibilityScrollDirection:(long long)arg1 ;
-(void)setAccessibilityScrollIndicatorDelegate:(id<AXScrollIndicatorDelegate>)arg1 ;
-(BOOL)accessibilityScrollIndicatorIsFocused;
-(long long)accessibilityScrollDirection;
-(BOOL)_accessibilityUseAccessibilityFrameForHittest;
-(id<AXScrollIndicatorDelegate>)accessibilityScrollIndicatorDelegate;
-(id)_axBasicDescription;
-(void)setAccessibilityScrollIndicatorIsFocused:(BOOL)arg1 ;
@end

