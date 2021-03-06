/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UISwitchControl.h>
#import <UIKit/UISwitchVisualElementProvider.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, UIColor, UIImage, UISwitchVisualElement, UIImpactFeedbackGenerator;

@interface UISwitch : UIControl <UISwitchControl, UISwitchVisualElementProvider, NSCoding> {

	BOOL _on;
	BOOL _alwaysShowOnOffLabel;
	NSString* _title;
	UIColor* _onTintColor;
	UIColor* _thumbTintColor;
	UIImage* _onImage;
	UIImage* _offImage;
	long long _style;
	long long _preferredStyle;
	UIColor* _tintColor;
	UISwitchVisualElement* _visualElement;
	long long _switchStyle;

}

@property (nonatomic,retain) UIColor * tintColor;                                                                                                                  //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UISwitchVisualElement * visualElement;                                                                                                //@synthesize visualElement=_visualElement - In the implementation block
@property (assign,setter=_setAlwaysShowsOnOffLabel:,getter=_alwaysShowOnOffLabel,nonatomic) BOOL alwaysShowOnOffLabel;                                             //@synthesize alwaysShowOnOffLabel=_alwaysShowOnOffLabel - In the implementation block
@property (setter=_setImpactFeedbackGenerator:,getter=_impactFeedbackGenerator,nonatomic,retain) UIImpactFeedbackGenerator * impactFeedbackGenerator; 
@property (assign,nonatomic) long long switchStyle;                                                                                                                //@synthesize switchStyle=_switchStyle - In the implementation block
@property (nonatomic,retain) UIColor * onTintColor;                                                                                                                //@synthesize onTintColor=_onTintColor - In the implementation block
@property (nonatomic,retain) UIColor * thumbTintColor;                                                                                                             //@synthesize thumbTintColor=_thumbTintColor - In the implementation block
@property (nonatomic,retain) UIImage * onImage;                                                                                                                    //@synthesize onImage=_onImage - In the implementation block
@property (nonatomic,retain) UIImage * offImage;                                                                                                                   //@synthesize offImage=_offImage - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                                                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long style;                                                                                                                    //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long preferredStyle;                                                                                                             //@synthesize preferredStyle=_preferredStyle - In the implementation block
@property (assign,getter=isOn,nonatomic) BOOL on;                                                                                                                  //@synthesize on=_on - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_allowsUnsupportedMacIdiomBehavior;
+(void)_setAllowsUnsupportedMacIdiomBehavior:(BOOL)arg1 ;
+(id)visualElementForTraitCollection:(id)arg1 ;
+(id)visualElementForTraitCollection:(id)arg1 style:(long long)arg2 ;
+(void)setVisualElementProvider:(id)arg1 ;
-(UIColor *)thumbTintColor;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(UIImage *)onImage;
-(void)setOn:(BOOL)arg1 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(void)setTintColor:(UIColor *)arg1 ;
-(BOOL)isOn;
-(void)tintColorDidChange;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(long long)switchStyle;
-(id)init;
-(void)_setImpactFeedbackGenerator:(id)arg1 ;
-(void)visualElementHadTouchUpInside:(id)arg1 ;
-(long long)preferredStyle;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)pointMostlyInside:(CGPoint)arg1 ;
-(void)_refreshVisualElementForTraitCollection:(id)arg1 populatingAPIProperties:(BOOL)arg2 ;
-(void)setPreferredStyle:(long long)arg1 ;
-(BOOL)isAccessibilityElementByDefault;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(UISwitchVisualElement *)visualElement;
-(void)dealloc;
-(BOOL)_alwaysShowOnOffLabel;
-(long long)style;
-(void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 ;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(id)initWithCoder:(id)arg1 ;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isFixedSize;
-(UIColor *)tintColor;
-(void)setOnImage:(UIImage *)arg1 ;
-(unsigned long long)defaultAccessibilityTraits;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 notifyingVisualElement:(BOOL)arg3 ;
-(void)setThumbTintColor:(UIColor *)arg1 ;
-(void)setSwitchStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImage *)offImage;
-(id)_impactFeedbackGenerator;
-(unsigned long long)_controlEventsForActionTriggered;
-(void)_showingOnOffLabelChanged;
-(void)visualElement:(id)arg1 transitionedToOn:(BOOL)arg2 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)_shouldShowOnOffLabels;
-(void)setOnTintColor:(UIColor *)arg1 ;
-(void)setVisualElement:(UISwitchVisualElement *)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(void)_refreshVisualElement;
-(void)setFrame:(CGRect)arg1 ;
-(UIColor *)onTintColor;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_setStyle:(long long)arg1 ;
-(void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 ;
-(void)setOffImage:(UIImage *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGPoint)accessibilityActivationPoint;
-(NSString *)title;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setAlwaysShowsOnOffLabel:(BOOL)arg1 ;
@end

