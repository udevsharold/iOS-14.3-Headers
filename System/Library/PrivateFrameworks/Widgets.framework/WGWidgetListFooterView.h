/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/MTMaterialGrouping.h>

@protocol WGWidgetListFooterViewDelegate;
@class NSMutableDictionary, UIFont, MTMaterialView, UIView, _UILegibilitySettings, WGShortLookStyleButton, UIButton, WGNewWidgetsButton, NSString;

@interface WGWidgetListFooterView : UIView <UITextViewDelegate, MTMaterialGrouping> {

	NSMutableDictionary* _widgetIDsToAttributionViews;
	UIFont* _referenceFont;
	MTMaterialView* _customizeButtonBackground;
	BOOL _shouldSizeContent;
	UIView* _contentView;
	long long _layoutMode;
	_UILegibilitySettings* _legibilitySettings;
	WGShortLookStyleButton* _editButton;
	UIButton* _customizeButton;
	id<WGWidgetListFooterViewDelegate> _delegate;
	WGNewWidgetsButton* _widgetAvailableButton;

}

@property (nonatomic,readonly) UIView * contentView;                                          //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) long long layoutMode;                                            //@synthesize layoutMode=_layoutMode - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                      //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) BOOL shouldBlurContent; 
@property (assign,nonatomic) BOOL shouldSizeContent;                                          //@synthesize shouldSizeContent=_shouldSizeContent - In the implementation block
@property (nonatomic,retain) WGShortLookStyleButton * editButton;                             //@synthesize editButton=_editButton - In the implementation block
@property (nonatomic,retain) UIButton * customizeButton;                                      //@synthesize customizeButton=_customizeButton - In the implementation block
@property (assign,nonatomic,__weak) id<WGWidgetListFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WGNewWidgetsButton * widgetAvailableButton;                      //@synthesize widgetAvailableButton=_widgetAvailableButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * materialGroupNameBase; 
-(void)setEditButton:(WGShortLookStyleButton *)arg1 ;
-(void)setShouldSizeContent:(BOOL)arg1 ;
-(void)_addCustomizeButton;
-(void)setVisibleWidgetsIDs:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)layoutMode;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setMaterialGroupNameBase:(NSString *)arg1 ;
-(WGNewWidgetsButton *)widgetAvailableButton;
-(void)setWidgetAvailableButton:(WGNewWidgetsButton *)arg1 ;
-(WGShortLookStyleButton *)editButton;
-(void)_updateForContentCategorySizeDidChange;
-(void)setShouldBlurContent:(BOOL)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(BOOL)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)_setAttributedString:(id)arg1 forWidgetIdentifier:(id)arg2 ;
-(void)layoutSubviews;
-(void)setCustomizeButton:(UIButton *)arg1 ;
-(BOOL)shouldBlurContent;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)customizeButton;
-(id)_referenceFont;
-(void)setDelegate:(id<WGWidgetListFooterViewDelegate>)arg1 ;
-(UIView *)contentView;
-(void)_availableWidgetsUpdated:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)invalidateSubviewGeometery;
-(void)setLayoutMode:(long long)arg1 ;
-(BOOL)shouldSizeContent;
-(id<WGWidgetListFooterViewDelegate>)delegate;
-(NSString *)materialGroupNameBase;
@end

