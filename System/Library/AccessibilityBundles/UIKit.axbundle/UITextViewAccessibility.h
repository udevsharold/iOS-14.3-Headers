/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UITextViewAccessibility_super.h>

@interface UITextViewAccessibility : __UITextViewAccessibility_super
+(Class)safeCategoryBaseClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(id)safeCategoryTargetClassName;
-(void)setContentOffset:(CGPoint)arg1 ;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(CGRect)accessibilityFrame;
-(BOOL)resignFirstResponder;
-(void)setAttributedText:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(id)_accessibilitySupplementaryHeaderViews;
-(void)setSelectedRange:(NSRange)arg1 ;
-(BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)dealloc;
-(id)_accessibilityInternalTextLinks;
-(id)accessibilityDragSourceDescriptors;
-(BOOL)_accessibilityOverridesPotentiallyAttributedAPISelector:(SEL)arg1 ;
-(id)_accessibilityAttributedValueForRange:(NSRange*)arg1 ;
-(CGRect)_accessibilityBoundsForRange:(NSRange)arg1 ;
-(id)accessibilityDropPointDescriptors;
-(unsigned long long)accessibilityTraits;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(double)_accessibilityFontSize;
-(BOOL)_allowCustomActionHintSpeakOverride;
-(id)accessibilityElements;
-(id)accessibilityAttributedValue;
-(BOOL)accessibilityActivate;
-(void)_accessibilityLoadAccessibilityInformation;
-(BOOL)_accessibilityTextViewShouldBreakUpParagraphs;
-(id)accessibilityLabel;
-(void)setAttributedPlaceholder:(id)arg1 ;
-(long long)accessibilityContainerType;
-(id)_accessibilityAttributedTextRetrieval;
-(id)accessibilityPlaceholderValue;
-(id)accessibilityCustomRotors;
-(CGPoint)accessibilityActivationPoint;
-(void)_accessibilitySetValue:(id)arg1 ;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(id)accessibilityValue;
-(BOOL)isAccessibilityElement;
-(unsigned long long)_accessibilityAutomationType;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityTextSelectionRectWithLargestVisualRangeFromCandidates:(id)arg1 ;
-(id)_accessibilityGetValue;
-(BOOL)_axDidRegisterForDDNotification;
-(void)_axDidFinishDataDetectorURLification:(id)arg1 ;
-(void)_axSetDidRegisterForDDNotification:(BOOL)arg1 ;
-(void)_axRegisterForDDNotificationIfNeeded;
-(void)_axClearCachedLinkData;
-(id)_accessibilityGetValue:(BOOL)arg1 ;
-(BOOL)_axIsOnlyOneLinkElement;
-(BOOL)_accessibilityActivateLink:(id)arg1 ;
-(id)_accessibilityParagraphElements;
-(id)_accessibilityParagraphLinksCustomRotor;
-(id)_accessibilityParagraphElementsWithLinks;
-(id)_accessibilityLinksForRange:(NSRange)arg1 ;
@end
