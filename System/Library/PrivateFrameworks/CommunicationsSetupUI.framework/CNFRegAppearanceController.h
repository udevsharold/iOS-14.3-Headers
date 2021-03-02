/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
@class UIColor, UIImage, UIView, UIFont;

@interface CNFRegAppearanceController : NSObject

@property (nonatomic,readonly) long long keyboardAppearance; 
@property (nonatomic,readonly) UIColor * customBackgroundColor; 
@property (nonatomic,readonly) UIColor * userInteractionColor; 
@property (nonatomic,readonly) BOOL styleUsesCustomTableStyle; 
@property (nonatomic,retain,readonly) UIColor * tableBackgroundColor; 
@property (nonatomic,retain,readonly) UIColor * tableSectionBorderColor; 
@property (nonatomic,retain,readonly) UIImage * tableSectionShadowImage; 
@property (nonatomic,retain,readonly) UIColor * tableCellBackgroundColor; 
@property (nonatomic,retain,readonly) UIColor * tableCellTextLabelColor; 
@property (nonatomic,retain,readonly) UIColor * tableCellTextLabelBackgroundColor; 
@property (nonatomic,retain,readonly) UIColor * tableCellDetailLabelColor; 
@property (nonatomic,retain,readonly) UIColor * tableCellDetailLabelBackgroundColor; 
@property (nonatomic,retain,readonly) UIImage * tableCellButtonImage; 
@property (nonatomic,retain,readonly) UIImage * tableCellButtonImageSelected; 
@property (nonatomic,retain,readonly) UIColor * tableCellEditableTextColor; 
@property (nonatomic,retain,readonly) UIColor * tableCellEditableTextPlaceholderColor; 
@property (nonatomic,retain,readonly) UIColor * tableCellEditableInsertionPointColor; 
@property (nonatomic,retain,readonly) UIImage * tableCellEditableTextFieldClearButton; 
@property (nonatomic,retain,readonly) UIImage * tableCellEditableTextFieldClearButtonPressed; 
@property (nonatomic,readonly) BOOL styleUsesCustomAccessoryView; 
@property (nonatomic,retain,readonly) UIView * tableCellCustomAccessoryViewDisclosureIndicator; 
@property (nonatomic,retain,readonly) UIImage * tableCellCheckmarkImage; 
@property (nonatomic,retain,readonly) UIImage * tableCellCheckmarkImageSelected; 
@property (nonatomic,retain,readonly) UIImage * tableCellCheckmarkImageDisabled; 
@property (nonatomic,readonly) BOOL styleUsesCustomSeparatorStyle; 
@property (nonatomic,readonly) long long tableSeparatorStyle; 
@property (nonatomic,readonly) UIColor * tableSeparatorColor; 
@property (nonatomic,readonly) UIColor * tableSeparatorTopShadowColor; 
@property (nonatomic,readonly) UIColor * tableSeparatorBottomShadowColor; 
@property (nonatomic,retain,readonly) UIColor * tableHeaderTextColor; 
@property (nonatomic,retain,readonly) UIColor * tableHeaderTextColorSelected; 
@property (nonatomic,retain,readonly) UIColor * tableHeaderTextShadowColor; 
@property (nonatomic,readonly) CGSize tableHeaderTextShadowOffset; 
@property (nonatomic,retain,readonly) UIFont * tableHeaderFont; 
@property (nonatomic,retain,readonly) UIFont * tableFooterFont; 
@property (nonatomic,retain,readonly) UIColor * tableFooterTextColor; 
@property (nonatomic,readonly) long long tableHeaderTextAlignment; 
@property (nonatomic,readonly) long long tableFooterTextAlignment; 
@property (nonatomic,readonly) BOOL styleUsesCustomSearchResultsStyle; 
@property (nonatomic,readonly) long long searchResultsTableSeparatorStyle; 
@property (nonatomic,readonly) UIColor * searchResultsTableSeparatorColor; 
@property (nonatomic,readonly) UIColor * searchResultsTableSeparatorTopShadowColor; 
@property (nonatomic,readonly) UIColor * searchResultsTableSeparatorBottomShadowColor; 
@property (nonatomic,readonly) long long modalPresentationStyle; 
@property (nonatomic,retain,readonly) UIView * webViewBackgroundView; 
@property (nonatomic,retain,readonly) UIColor * webViewBackgroundColor; 
@property (nonatomic,readonly) BOOL webViewIsOpaque; 
@property (nonatomic,readonly) BOOL webViewDrawsShadows; 
@property (nonatomic,readonly) BOOL splashScreenShowsIcon; 
@property (nonatomic,retain,readonly) UIColor * splashTitleLabelTextColor; 
@property (nonatomic,retain,readonly) UIColor * splashEntryFieldTextColor; 
@property (nonatomic,retain,readonly) UIColor * splashEntryPlaceholderTextColor; 
@property (nonatomic,retain,readonly) UIColor * splashEntryFieldLabelTextColor; 
@property (nonatomic,retain,readonly) UIColor * splashSignInFieldsBorderColor; 
@property (nonatomic,retain,readonly) UIColor * splashSignInFieldsBackgroundColor; 
@property (nonatomic,readonly) long long splashSignInProgressIndicatorColor; 
@property (nonatomic,readonly) long long navigationBarStyle; 
@property (nonatomic,readonly) BOOL navigationBarIsTranslucent; 
@property (nonatomic,readonly) long long navigationBarActivityIndicatorStyle; 
@property (nonatomic,readonly) BOOL firstNavigationBarHidden; 
@property (nonatomic,readonly) BOOL navigationBarHidesTitle; 
@property (nonatomic,readonly) BOOL navigationBarHidesShadow; 
@property (nonatomic,retain,readonly) UIColor * navigationBarTintColor; 
@property (nonatomic,readonly) BOOL navigationBarTranslucent; 
@property (nonatomic,retain,readonly) UIImage * navigationBarBackgroundImage; 
@property (nonatomic,retain,readonly) UIColor * learnMoreTextColor; 
@property (nonatomic,retain,readonly) UIColor * learnMoreTextColorSelected; 
@property (nonatomic,retain,readonly) UIColor * learnMoreShadowColor; 
@property (nonatomic,retain,readonly) UIImage * learnMoreArrowImage; 
@property (nonatomic,retain,readonly) UIImage * learnMoreArrowImagePressed; 
@property (nonatomic,readonly) BOOL learnMoreButtonDrawsUnderline; 
@property (nonatomic,readonly) BOOL actionSheetsUsePopoverStyle; 
+(id)globalAppearanceController;
+(id)appearanceControllerForStyle:(long long)arg1 ;
+(id)stripedAppearanceController;
+(id)gradientAppearanceController;
+(id)modernAppearanceController;
+(id)modernTransparentLightAppearanceController;
+(id)modernTransparentDarkAppearanceController;
+(id)defaultAppearanceController;
-(UIColor *)tableBackgroundColor;
-(long long)keyboardAppearance;
-(long long)modalPresentationStyle;
-(UIColor *)tableCellBackgroundColor;
-(BOOL)navigationBarIsTranslucent;
-(long long)tableSeparatorStyle;
-(UIColor *)tableSeparatorColor;
-(UIColor *)customBackgroundColor;
-(long long)navigationBarStyle;
-(UIColor *)navigationBarTintColor;
-(UIImage *)tableCellCheckmarkImageDisabled;
-(BOOL)styleUsesCustomTableStyle;
-(UIColor *)userInteractionColor;
-(UIImage *)tableCellEditableTextFieldClearButton;
-(UIImage *)tableCellEditableTextFieldClearButtonPressed;
-(UIColor *)tableCellTextLabelBackgroundColor;
-(UIColor *)tableCellTextLabelColor;
-(UIColor *)tableCellDetailLabelColor;
-(UIColor *)tableCellDetailLabelBackgroundColor;
-(UIColor *)tableHeaderTextColor;
-(UIColor *)tableFooterTextColor;
-(BOOL)splashScreenShowsIcon;
-(UIColor *)splashTitleLabelTextColor;
-(UIColor *)splashEntryFieldTextColor;
-(UIColor *)splashEntryPlaceholderTextColor;
-(UIColor *)splashEntryFieldLabelTextColor;
-(UIColor *)splashSignInFieldsBorderColor;
-(UIColor *)splashSignInFieldsBackgroundColor;
-(long long)splashSignInProgressIndicatorColor;
-(long long)navigationBarActivityIndicatorStyle;
-(BOOL)navigationBarTranslucent;
-(UIImage *)navigationBarBackgroundImage;
-(UIColor *)learnMoreTextColor;
-(UIImage *)learnMoreArrowImage;
-(BOOL)styleUsesCustomAccessoryView;
-(BOOL)styleUsesCustomSeparatorStyle;
-(BOOL)styleUsesCustomSearchResultsStyle;
-(UIColor *)tableSeparatorTopShadowColor;
-(UIColor *)tableSeparatorBottomShadowColor;
-(UIImage *)tableCellButtonImage;
-(UIImage *)tableCellButtonImageSelected;
-(UIColor *)tableCellEditableTextColor;
-(UIColor *)tableCellEditableTextPlaceholderColor;
-(UIColor *)tableSectionBorderColor;
-(UIImage *)tableSectionShadowImage;
-(UIColor *)tableCellEditableInsertionPointColor;
-(UIView *)tableCellCustomAccessoryViewDisclosureIndicator;
-(UIImage *)tableCellCheckmarkImage;
-(UIImage *)tableCellCheckmarkImageSelected;
-(UIColor *)tableHeaderTextColorSelected;
-(UIColor *)tableHeaderTextShadowColor;
-(CGSize)tableHeaderTextShadowOffset;
-(UIFont *)tableHeaderFont;
-(UIFont *)tableFooterFont;
-(long long)tableHeaderTextAlignment;
-(long long)tableFooterTextAlignment;
-(long long)searchResultsTableSeparatorStyle;
-(UIColor *)searchResultsTableSeparatorColor;
-(UIColor *)searchResultsTableSeparatorTopShadowColor;
-(UIColor *)searchResultsTableSeparatorBottomShadowColor;
-(UIView *)webViewBackgroundView;
-(UIColor *)webViewBackgroundColor;
-(BOOL)webViewIsOpaque;
-(BOOL)webViewDrawsShadows;
-(BOOL)firstNavigationBarHidden;
-(BOOL)navigationBarHidesTitle;
-(BOOL)navigationBarHidesShadow;
-(UIColor *)learnMoreTextColorSelected;
-(UIColor *)learnMoreShadowColor;
-(UIImage *)learnMoreArrowImagePressed;
-(BOOL)learnMoreButtonDrawsUnderline;
-(BOOL)actionSheetsUsePopoverStyle;
@end
