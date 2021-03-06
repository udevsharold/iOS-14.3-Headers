/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIAlertControllerDescriptor, UIInterfaceActionVisualStyle, UITraitCollection;

@interface UIAlertControllerVisualStyle : NSObject {

	UIAlertControllerDescriptor* _descriptor;
	long long _forcedInterfaceIdiom;
	UIInterfaceActionVisualStyle* _interfaceActionVisualStyle;
	UITraitCollection* _traitCollection;

}

@property (assign,nonatomic) long long forcedInterfaceIdiom;                                           //@synthesize forcedInterfaceIdiom=_forcedInterfaceIdiom - In the implementation block
@property (nonatomic,readonly) UIInterfaceActionVisualStyle * interfaceActionVisualStyle;              //@synthesize interfaceActionVisualStyle=_interfaceActionVisualStyle - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;                                      //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,retain) UIAlertControllerDescriptor * descriptor;                                 //@synthesize descriptor=_descriptor - In the implementation block
+(void)positionContentsOfAlertController:(id)arg1 alertContentView:(id)arg2 availableSpaceView:(id)arg3 visualStyle:(id)arg4 updatableConstraints:(id)arg5 ;
+(long long)interfaceActionPresentationStyle;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(double)minimumWidth;
-(BOOL)placementAvoidsKeyboard;
-(void)animateRevealOfAlertControllerView:(id)arg1 alertController:(id)arg2 inContainerView:(id)arg3 duration:(double)arg4 completionBlock:(/*^block*/id)arg5 ;
-(double)marginAboveTitleLabelFirstBaseline;
-(double)transitionDurationForPresentation:(BOOL)arg1 ofAlertController:(id)arg2 ;
-(double)_scaledMarginAboveTitleLabelFirstBaselineInAlertControllerView:(id)arg1 titleText:(id)arg2 ;
-(double)marginBelowLastLabelLastBaseline;
-(id)preferredActionForActions:(id)arg1 suggestedPreferredAction:(id)arg2 ;
-(id)dimmingViewForAlertController:(id)arg1 ;
-(double)maximumWidth;
-(double)_scaledSafeBaselineHeightForLabelFont:(id)arg1 inAlertControllerView:(id)arg2 ;
-(Class)interfaceActionVisualStyleClassForManagingConcreteVisualStyle;
-(id)interactionProgressForTransitionOfType:(long long)arg1 forAlertController:(id)arg2 ;
-(double)_scaledTitleLabelSafeBaselineHeightInAlertControllerView:(id)arg1 ;
-(BOOL)transitionOfType:(long long)arg1 shouldBeInteractiveForAlertController:(id)arg2 ;
-(id)init;
-(double)maximumWidthForTitleAndMessageContentView;
-(double)_scaledMessageSafeBaselineHeightInAlertControllerView:(id)arg1 ;
-(void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3 ;
-(id)_detailMessageFont;
-(long long)permittedActionLayoutDirection;
-(double)_marginAroundActionGroup;
-(double)_scaledMarginAboveDetailMessageFirstBaseline;
-(void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3 ;
-(double)_scaledMarginAboveMessageLabelFirstBaseline;
-(double)_scaledMarginBelowMessageLabelLastBaseline;
-(double)_scaledMarginBelowTitleLabelLastBaseline;
-(CGSize)minimumActionContentSize;
-(double)_marginAboveDetailMessageFirstBaseline;
-(UIEdgeInsets)textFieldContentInset;
-(double)_scaledMarginBelowLastLabelLastBaseline;
-(UIEdgeInsets)contentInsetsForContainerView:(id)arg1 ;
-(double)maximumHeightForDisplayOnScreen:(id)arg1 ;
-(BOOL)shouldPreserveRespondersAcrossWindows;
-(double)_spacingBetweenDismissButtonAndContent;
-(void)_reloadInterfaceActionVisualStyle;
-(id)vibrancyEffectForTitleAndMessageLabel;
-(double)marginBelowMessageLabelLastBaseline;
-(id)messageLabelColor;
-(long long)maximumNumberOfLinesInTitleLabel;
-(id)messageLabelFont;
-(id)titleLabelColor;
-(UITraitCollection *)traitCollection;
-(void)setDescriptor:(UIAlertControllerDescriptor *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)actionWidthForMinimumActionWidth:(double)arg1 ;
-(BOOL)shouldOccludeDuringPresentation;
-(UIEdgeInsets)actionSequenceEdgeInsets;
-(id)_keyCommandInputForCancelAction;
-(UIInterfaceActionVisualStyle *)interfaceActionVisualStyle;
-(long long)maximumNumberOfLinesInMessageLabel;
-(UIEdgeInsets)actionImageMarginForAction;
-(id)titleLabelFont;
-(BOOL)_shouldReverseActions;
-(id)tintColorForAlertController:(id)arg1 ;
-(void)setForcedInterfaceIdiom:(long long)arg1 ;
-(double)contentVerticalMargin;
-(CGSize)collectionViewOutsetSize;
-(id)regularActionFont;
-(id)defaultActionFont;
-(UIAlertControllerDescriptor *)descriptor;
-(void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(BOOL)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(/*^block*/id)arg7 ;
-(long long)forcedInterfaceIdiom;
-(BOOL)hideCancelAction:(id)arg1 inAlertController:(id)arg2 ;
-(double)marginBelowTitleLabelLastBaseline;
-(id)textFieldContainingViewWithTextField:(id)arg1 position:(long long)arg2 ;
-(double)contentHorizontalMargin;
-(double)marginAboveMessageLabelFirstBaseline;
-(double)textFieldHorizontalMargin;
-(id)preferredActionFont;
@end

