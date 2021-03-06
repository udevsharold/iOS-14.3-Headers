/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSItemProviderReading.h>
#import <libobjc.A.dylib/NSItemProviderWriting.h>
#import <UIKit/UIItemProviderReading.h>
#import <UIKit/UIItemProviderWriting.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, CIColor;

@interface UIColor : NSObject <NSItemProviderReading, NSItemProviderWriting, UIItemProviderReading, UIItemProviderWriting, NSSecureCoding, NSCopying> {

	NSString* _systemColorName;
	NSString* _cachedStyleString;

}

@property (nonatomic,readonly) NSString * accessibilityName; 
@property (nonatomic,readonly) NSString * _accessibilityNameWithLuma; 
@property (getter=_isDynamic,nonatomic,readonly) BOOL dynamic; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (setter=_setSystemColorName:,getter=_systemColorName,nonatomic,retain) NSString * systemColorName; 
@property (nonatomic,readonly) CGColorRef CGColor; 
@property (nonatomic,readonly) CIColor * CIColor; 
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)insertionPointColor;
+(id)colorWithWhite:(double)arg1 alpha:(double)arg2 ;
+(id)_composedColorFromSourceColor:(id)arg1 destinationColor:(id)arg2 tintColor:(id)arg3 alpha:(double)arg4 ;
+(id)tableBackgroundColor;
+(id)_accessibilityButtonShapesNoBlendModeBackgroundColorOnDark;
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)_accessibilityButtonShapesDisabledBackgroundColorOnDark;
+(BOOL)supportsSecureCoding;
+(id)_accessibilityButtonShapesNoBlendModeBackgroundColorOnLight;
+(id)redColor;
+(id)systemDarkBlueColor;
+(id)_accessibilityButtonShapesBackgroundColorOnDark;
+(id)_accessibilityButtonShapesBackgroundColorOnLight;
+(id)systemDarkGreenColor;
+(id)blackColor;
+(id)_accessibilityDarkenedColorForColor:(id)arg1 ;
+(id)grayColor;
+(id)cyanColor;
+(id)linkColor;
+(id)_searchFieldPlaceholderTextClearButtonColor;
+(id)_controlForegroundColor;
+(id)labelColor;
+(id)writableTypeIdentifiersForItemProvider;
+(id)readableTypeIdentifiersForItemProvider;
+(id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 ;
+(id)blueColor;
+(id)yellowColor;
+(id)_convertColorPickerColor:(id)arg1 fromUserInterfaceStyle:(long long)arg2 to:(long long)arg3 ;
+(id)_fillColor;
+(id)_vibrantLightDividerDarkeningColor;
+(id)secondarySystemBackgroundColor;
+(id)tertiarySystemBackgroundColor;
+(id)systemGroupedBackgroundColor;
+(id)tertiarySystemGroupedBackgroundColor;
+(id)__halfTransparentBlackColor;
+(id)__halfTransparentWhiteColor;
+(id)greenColor;
+(id)__darkSystemColorForColor:(id)arg1 ;
+(double)_luminanceWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 ;
+(id)colorNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3 ;
+(id)pinStripeColor;
+(id)_splitViewBorderColor;
+(id)systemBlackColor;
+(id)colorWithCIColor:(id)arg1 ;
+(id)_systemColorForColor:(id)arg1 withName:(id)arg2 ;
+(id)colorWithPatternImage:(id)arg1 ;
+(id)_disambiguated_due_to_CIImage_colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)_disambiguated_due_to_CIImage_colorWithCGColor:(CGColorRef)arg1 ;
+(id)_alertControllerDimmingViewColor;
+(id)_systemColorWithName:(id)arg1 ;
+(id)_systemColorWithUnvalidatedName:(id)arg1 ;
+(id)_accessibilityLightenedColorForColor:(id)arg1 ;
+(id)sectionListBorderColor;
+(id)_dynamicCatalogColorForNibEncodingWithName:(id)arg1 genericColor:(id)arg2 ;
+(id)tableCellGroupedBackgroundColorLegacyWhite;
+(id)tableCellBackgroundColor;
+(id)tableCellbackgroundColorCarPlay;
+(id)tableSelectionGradientStartColor;
+(id)tableCellValue1BlueColor;
+(id)tableSelectionGradientEndColor;
+(id)sectionHeaderBackgroundColor;
+(id)sectionHeaderOpaqueBackgroundColor;
+(id)sectionHeaderBorderColor;
+(id)tableCellValue2BlueColor;
+(id)tableCellGrayTextColor;
+(id)textFieldAtomPurpleColor;
+(id)infoTextOverPinStripeTextColor;
+(id)textFieldAtomBlueColor;
+(id)selectionGrabberColor;
+(id)lightTextColor;
+(id)colorWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)_appKeyColorOrDefaultTint;
+(id)tableGroupedSeparatorLightColor;
+(id)tableCellBlueTextColor;
+(id)viewFlipsideBackgroundColor;
+(id)underPageBackgroundColor;
+(id)scrollViewTexturedBackgroundColor;
+(id)systemMidGrayColor;
+(id)systemExtraLightGrayColor;
+(id)systemLightGrayColor;
+(id)systemLightMidGrayColor;
+(id)systemDarkRedColor;
+(id)systemDarkOrangeColor;
+(id)systemDarkTealColor;
+(id)systemDarkYellowColor;
+(id)systemDarkPinkColor;
+(id)systemDarkPurpleColor;
+(id)systemDarkExtraLightGrayColor;
+(id)brownColor;
+(id)systemFillColor;
+(id)systemDarkLightGrayColor;
+(id)systemDarkLightMidGrayColor;
+(id)systemDarkMidGrayColor;
+(id)externalSystemGreenColor;
+(id)systemExtraLightGrayTintColor;
+(id)systemLightGrayTintColor;
+(id)systemLightMidGrayTintColor;
+(id)systemMidGrayTintColor;
+(id)systemGrayTintColor;
+(id)systemDarkExtraLightGrayTintColor;
+(id)systemDarkLightGrayTintColor;
+(id)systemDarkLightMidGrayTintColor;
+(id)systemDarkMidGrayTintColor;
+(id)systemDarkGrayTintColor;
+(id)_systemInteractionTintColor;
+(id)_systemDestructiveTintColor;
+(id)_systemMidGrayTintColor;
+(id)_externalSystemMidGrayColor;
+(id)_externalSystemGrayColor;
+(id)_externalSystemExtraDarkGrayColor;
+(id)secondarySystemGroupedBackgroundColor;
+(id)_externalSystemSuperDarkGrayColor;
+(id)_webContentBackgroundColor;
+(id)noContentLightGradientBackgroundColor;
+(id)_grayColorForFontSize:(double)arg1 ;
+(id)noContentDarkGradientBackgroundColor;
+(id)_systemSelectedColor;
+(id)_translucentPaperTextureColor;
+(id)_swipedSidebarCellBackgroundColor;
+(id)_vibrantLightSectionDelimiterDividerBurnColor;
+(id)_apiColorNames;
+(id)_carSystemQuaternaryColor;
+(id)_vibrantLightSectionDelimiterDividerDarkeningColor;
+(id)_searchFieldDisabledBackgroundColor;
+(id)_textFieldBackgroundColor;
+(id)_dynamicColorWithColorsByTraitCollection:(id)arg1 ;
+(id)systemYellowColor;
+(id)systemPinkColor;
+(id)systemPurpleColor;
+(id)systemGray2Color;
+(id)systemGray3Color;
+(id)systemGray4Color;
+(id)systemGray5Color;
+(id)systemGray6Color;
+(id)systemBrownColor;
+(id)systemTealColor;
+(id)systemIndigoColor;
+(id)quaternaryLabelColor;
+(id)opaqueSeparatorColor;
+(id)_secondaryFillColor;
+(id)_dynamicTestColor;
+(id)tableCellPlainSelectedBackgroundColor;
+(id)_tertiaryFillColor;
+(id)_carSystemFocusPrimaryColor;
+(id)_pageControlIndicatorColor;
+(id)_switchOffColor;
+(id)_pageControlPlatterIndicatorColor;
+(id)_systemGray2Color;
+(id)_controlVibrantTopBackgroundColor;
+(id)_systemGray3Color;
+(id)_controlVibrantBottomBackgroundColor;
+(id)_quaternaryFillColor;
+(id)_systemGray4Color;
+(id)_systemGray5Color;
+(id)_systemGray6Color;
+(id)_secondaryLabelColor;
+(id)_tertiaryLabelColor;
+(id)_quaternaryLabelColor;
+(id)_placeholderTextColor;
+(id)_opaqueSeparatorColor;
+(id)_systemBackgroundColor;
+(id)_secondarySystemBackgroundColor;
+(id)_systemGroupBackgroundColor;
+(id)lightGrayColor;
+(id)systemGreenColor;
+(id)_switchOffImageColor;
+(id)_linkColor;
+(id)_tertiarySystemBackgroundColor;
+(id)_systemGroupedBackgroundColor;
+(id)classFallbacksForKeyedArchiver;
+(id)_secondarySystemGroupedBackgroundColor;
+(id)_textFieldBorderColor;
+(id)_tertiarySystemGroupedBackgroundColor;
+(id)_windowBackgroundColor;
+(id)_systemBackgroundSectionColor;
+(id)_textFieldDisabledBorderColor;
+(id)_barStyleBlackHairlineShadowColor;
+(id)placeholderTextColor;
+(id)_systemBackgroundSectionCellColor;
+(id)_markedTextBackgroundColor;
+(id)_systemGroupBackgroundCellColor;
+(id)_vibrantLightDividerBurnColor;
+(id)externalSystemTealColor;
+(id)_textFieldDisabledBackgroundColor;
+(id)tableSeparatorLightColor;
+(id)tableCellPlainBackgroundColor;
+(id)groupTableViewBackgroundColor;
+(id)tableCellDefaultSelectionTintColor;
+(id)_unfocusedCarSystemColor:(id)arg1 ;
+(id)tableCellGroupedSelectedBackgroundColor;
+(id)orangeColor;
+(id)tableCellHighlightedBackgroundColor;
+(id)_carSystemTertiaryColor;
+(id)systemBlueColor;
+(id)tableCellFocusedBackgroundColor;
+(id)tableCellDisabledBackgroundColor;
+(id)_tvLabelOpacityBColor;
+(id)tablePlainHeaderFooterBackgroundColor;
+(id)_tvLabelOpacityAColor;
+(id)purpleColor;
+(id)tablePlainHeaderFooterFloatingBackgroundColor;
+(id)_plainTableHeaderFooterTextColor;
+(id)_tvLabelOpacityCColor;
+(id)_groupTableHeaderFooterTextColor;
+(id)_alternateSystemInteractionTintColor;
+(id)_focusedCarSystemColor:(id)arg1 ;
+(id)_tvInterfaceStyleLightContentColor;
+(id)systemOrangeColor;
+(id)_tvInterfaceStyleDarkContentColor;
+(id)tableSeparatorColor;
+(id)darkGrayColor;
+(id)separatorColor;
+(id)_dimmingViewColor;
+(id)systemRedColor;
+(id)whiteColor;
+(id)systemBackgroundColor;
+(id)_separatorColor;
+(id)colorWithDynamicProvider:(/*^block*/id)arg1 ;
+(id)systemGrayColor;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)_carSystemSecondaryColor;
+(id)_carSystemPrimaryColor;
+(id)_externalSystemDarkGrayColor;
+(id)_systemBlueColor2;
+(id)colorNamed:(id)arg1 ;
+(id)_vibrantLightFillDarkeningColor;
+(id)_labelColor;
+(id)clearColor;
+(id)externalSystemRedColor;
+(id)magentaColor;
+(id)systemDarkGrayColor;
+(id)_appKeyColor;
+(id)_monochromeCellImageTintColor;
+(id)_vibrantDarkFillDodgeColor;
+(id)_externalSystemWhiteColor;
+(id)_vibrantLightFillBurnColor;
+(id)quaternarySystemFillColor;
+(id)secondarySystemFillColor;
+(id)_searchBarBackgroundColor;
+(id)_barHairlineShadowColor;
+(id)_carSystemFocusSecondaryColor;
+(id)_carSystemFocusLabelColor;
+(id)secondaryLabelColor;
+(id)tertiarySystemFillColor;
+(id)tableSelectionColor;
+(id)tableShadowColor;
+(id)tertiaryLabelColor;
+(id)tableGroupedTopShadowColor;
+(id)tableSeparatorDarkColor;
+(id)darkTextColor;
+(id)_contentBackgroundColor;
+(id)_controlShadowColor;
+(id)_disabledColorForColor:(id)arg1 ;
+(id)_controlHighlightColor;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)systemWhiteColor;
+(id)_carSystemFocusColor;
+(id)selectionHighlightColor;
+(id)tableCellGroupedBackgroundColor;
+(id)keyboardFocusIndicatorColor;
+(id)_sidebarBackgroundColor;
+(id)_externalBarBackgroundColor;
+(id)_systemChromeShadowColor;
-(id)colorSpaceName;
-(void)setFill;
-(BOOL)getHue:(double*)arg1 saturation:(double*)arg2 brightness:(double*)arg3 alpha:(double*)arg4 ;
-(CGColorRef)cgColor;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(void)setStroke;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(double)alphaComponent;
-(void)set;
-(BOOL)getWhite:(double*)arg1 alpha:(double*)arg2 ;
-(CGColorRef)CGColor;
-(CIColor *)CIColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 ;
-(id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)resolvedColorWithTraitCollection:(id)arg1 ;
-(id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 ;
-(id)_backgroundColorIgnoringHighContrast;
-(NSArray *)writableTypeIdentifiersForItemProvider;
-(void)_setDebugName:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)_isOpaque;
-(id)initWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(id)initWithCIColor:(id)arg1 ;
-(void)_setSystemColorName:(id)arg1 ;
-(id)_systemColorName;
-(id)_colorBlendedWithColor:(id)arg1 compositingFilter:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_colorBlendedWithColor:(id)arg1 ;
-(id)_debugName;
-(double)_colorDifferenceFromColor:(id)arg1 ;
-(BOOL)_isSimilarToColor:(id)arg1 withinPercentage:(double)arg2 ;
-(id)_colorBlendedWithColors:(id)arg1 ;
-(double)_luminanceDifferenceFromColor:(id)arg1 ;
-(id)initWithDynamicProvider:(/*^block*/id)arg1 ;
-(double)_luminance;
-(BOOL)_getWhite:(double*)arg1 alpha:(double*)arg2 ;
-(NSString *)_accessibilityNameWithLuma;
-(BOOL)isEqual:(id)arg1 ;
-(void)_setDebugCatalogBundleIdentifier:(id)arg1 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(NSString *)accessibilityName;
-(id)styleString;
-(BOOL)isPatternColor;
-(BOOL)_isDeepColor;
-(id)_debugCatalogBundleIdentifier;
-(id)initWithWhite:(double)arg1 alpha:(double)arg2 ;
-(Class)classForCoder;
-(BOOL)_isDynamic;
-(id)initWithPatternImage:(id)arg1 ;
-(BOOL)_getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

