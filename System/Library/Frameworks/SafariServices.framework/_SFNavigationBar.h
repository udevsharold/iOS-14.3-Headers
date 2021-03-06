/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/_SFFluidProgressViewDelegate.h>
#import <libobjc.A.dylib/_SFNavigationBarURLButtonDelegate.h>
#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>
#import <UIKit/UIDragInteractionDelegate_Private.h>
#import <UIKit/UIDropInteractionDelegate_Private.h>
#import <libobjc.A.dylib/_UIClickInteractionDelegate.h>
#import <libobjc.A.dylib/_SFBarCommon.h>

@protocol _SFNavigationBarDelegate;
@class UIButton, UIView, _SFNavigationBarLabelsContainer, UILabel, UIVisualEffectView, UIImageView, _SFToolbar, SFToolbarContainer, SFNavigationBarMetrics, NSArray, _SFNavigationBarURLButton, _SFFluidProgressView, NSAttributedString, SFNavigationBarAccessoryButtonArrangement, SFNavigationBarToggleButton, _SFDimmingButton, _UIClickInteraction, NSTimer, SFDismissButton, _SFNavigationBarItem, _SFBarTheme, _SFNavigationBarTheme, UITextField, NSString, UIBlurEffect;

@interface _SFNavigationBar : UIView <UIGestureRecognizerDelegate, _SFFluidProgressViewDelegate, _SFNavigationBarURLButtonDelegate, _UIBasicAnimationFactory, UIDragInteractionDelegate_Private, UIDropInteractionDelegate_Private, _UIClickInteractionDelegate, _SFBarCommon> {

	UIButton* _compressedBarButton;
	UIView* _controlsContainer;
	_SFNavigationBarLabelsContainer* _labelsContainer;
	UIView* _labelScalingContainer;
	UILabel* _URLLabel;
	UILabel* _expandedURLLabel;
	UILabel* _privateBrowsingLabel;
	UIVisualEffectView* _URLLabelEffectView;
	UIVisualEffectView* _lockEffectView;
	UIVisualEffectView* _squishedLockEffectView;
	UILabel* _availabilityLabel;
	UILabel* _notSecureAnnotationLabel;
	double _URLWidth;
	double _URLHeight;
	double _expandedURLWidth;
	double _expandedURLHeight;
	double _offsetOfURLInExpandedURL;
	UIView* _URLContainer;
	UIView* _URLContainerClipView;
	UIImageView* _URLFadeOut;
	UIView* _fakeTextFieldSelectionView;
	double _fakeSelectionStartOffset;
	double _fakeSelectionEndOffset;
	UIButton* _fakeClearButton;
	BOOL _usesLiftedAppearance;
	_SFToolbar* _leadingToolbar;
	_SFToolbar* _trailingToolbar;
	SFToolbarContainer* _leadingToolbarContainer;
	SFToolbarContainer* _trailingToolbarContainer;
	CGSize _cachedNotSecureAnnotationLabelFittingSize;
	UIView* _notSecureAnnotationContainer;
	BOOL _shouldAnimateURLMovement;
	SFNavigationBarMetrics* _barMetrics;
	UIImageView* _searchIndicator;
	UIImageView* _lockView;
	UIImageView* _squishedSearchIndicator;
	UIImageView* _squishedLockView;
	UIView* _squishedURLAccessoryItemsContainer;
	NSArray* _URLAccessoryItems;
	_SFNavigationBarURLButton* _URLOutline;
	_SFFluidProgressView* _progressView;
	UIVisualEffectView* _backdrop;
	UIView* _separator;
	BOOL _lockViewNeedsUpdate;
	NSAttributedString* _attributedTextWhenExpanded;
	SFNavigationBarAccessoryButtonArrangement* _accessoryButtonArrangement;
	SFNavigationBarToggleButton* _formatToggleButton;
	_SFDimmingButton* _stopButton;
	_SFDimmingButton* _reloadButton;
	_UIClickInteraction* _formatClickInteraction;
	UIButton* _mediaStateMuteButton;
	long long _visibleTrailingButtonType;
	long long _formatButtonTapAction;
	UIButton* _cancelButton;
	double _cancelButtonIntrinsicWidth;
	NSTimer* _availabilityLabelHideTimer;
	/*^block*/id _readerAvailabilityAnimationBlock;
	SFDismissButton* _dismissButton;
	unsigned long long _inputMode;
	BOOL _shouldHidePlaceholderURLItemsForPencilInput;
	/*^block*/id _availabilityButtonDeferredAction;
	BOOL _showingButtonWithAvailabilityLabel;
	BOOL _usesNarrowLayout;
	BOOL _unifiedFieldShowsProgressView;
	BOOL _controlsHidden;
	BOOL _expanded;
	BOOL _backdropGroupDisabled;
	BOOL _suppressesBlur;
	BOOL _usesFaintSeparator;
	BOOL _sendingBarMetricsChangeNotification;
	_SFNavigationBarItem* _item;
	_SFBarTheme* _theme;
	_SFNavigationBarTheme* _effectiveTheme;
	UITextField* _textField;
	NSString* _backdropGroupName;
	id<_SFNavigationBarDelegate> _delegate;
	double _contentUnderStatusBarHeight;
	double _maximumHeight;
	double _minimumBackdropHeight;
	UIView* _inputAccessoryView;
	UIBlurEffect* _backdropEffect;

}

@property (nonatomic,retain) _SFNavigationBarItem * item;                                                                          //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) BOOL usesNarrowLayout;                                                                                //@synthesize usesNarrowLayout=_usesNarrowLayout - In the implementation block
@property (assign,nonatomic) BOOL unifiedFieldShowsProgressView;                                                                   //@synthesize unifiedFieldShowsProgressView=_unifiedFieldShowsProgressView - In the implementation block
@property (nonatomic,retain) _SFBarTheme * theme;                                                                                  //@synthesize theme=_theme - In the implementation block
@property (nonatomic,readonly) _SFNavigationBarTheme * effectiveTheme;                                                             //@synthesize effectiveTheme=_effectiveTheme - In the implementation block
@property (assign,nonatomic) BOOL hasToolbar; 
@property (assign,getter=areControlsHidden,nonatomic) BOOL controlsHidden;                                                         //@synthesize controlsHidden=_controlsHidden - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                                                      //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,readonly) UITextField * textField;                                                                            //@synthesize textField=_textField - In the implementation block
@property (nonatomic,readonly) CGRect URLOutlineFrameInNavigationBarSpace; 
@property (assign,getter=isBackdropGroupDisabled,nonatomic) BOOL backdropGroupDisabled;                                            //@synthesize backdropGroupDisabled=_backdropGroupDisabled - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName;                                                                           //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (assign,nonatomic,__weak) id<_SFNavigationBarDelegate> delegate;                                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double defaultHeight; 
@property (nonatomic,readonly) double minimumHeight; 
@property (getter=_controlsAlpha,nonatomic,readonly) double controlsAlpha; 
@property (assign,nonatomic) double contentUnderStatusBarHeight;                                                                   //@synthesize contentUnderStatusBarHeight=_contentUnderStatusBarHeight - In the implementation block
@property (assign,nonatomic) BOOL suppressesBlur;                                                                                  //@synthesize suppressesBlur=_suppressesBlur - In the implementation block
@property (assign,nonatomic) BOOL usesFaintSeparator;                                                                              //@synthesize usesFaintSeparator=_usesFaintSeparator - In the implementation block
@property (nonatomic,readonly) double visualHeight; 
@property (assign,nonatomic) double maximumHeight;                                                                                 //@synthesize maximumHeight=_maximumHeight - In the implementation block
@property (assign,nonatomic) double minimumBackdropHeight;                                                                         //@synthesize minimumBackdropHeight=_minimumBackdropHeight - In the implementation block
@property (nonatomic,retain) UIView * inputAccessoryView;                                                                          //@synthesize inputAccessoryView=_inputAccessoryView - In the implementation block
@property (nonatomic,readonly) CGSize dismissButtonSize; 
@property (nonatomic,readonly) double dismissButtonPadding; 
@property (getter=isSendingBarMetricsChangeNotification,nonatomic,readonly) BOOL sendingBarMetricsChangeNotification;              //@synthesize sendingBarMetricsChangeNotification=_sendingBarMetricsChangeNotification - In the implementation block
@property (nonatomic,readonly) UIBlurEffect * backdropEffect;                                                                      //@synthesize backdropEffect=_backdropEffect - In the implementation block
@property (nonatomic,readonly) id<_SFPopoverSourceInfo> formatMenuButtonPopoverSourceInfo; 
@property (nonatomic,readonly) id<_SFPopoverSourceInfo> reloadButtonPopoverSourceInfo; 
@property (nonatomic,readonly) id<_SFPopoverSourceInfo> URLOutlinePopoverSourceInfo; 
@property (nonatomic,copy,readonly) NSArray * popoverPassthroughViews; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(double)separatorHeight;
+(long long)_metricsCategory;
+(double)estimatedDefaultHeightForStatusBarHeight:(double)arg1 ;
+(double)estimatedMinimumHeightForStatusBarHeight:(double)arg1 ;
-(_SFNavigationBarItem *)item;
-(void)setItem:(_SFNavigationBarItem *)arg1 ;
-(UIView *)inputAccessoryView;
-(double)defaultHeight;
-(_SFBarTheme *)theme;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(void)setExpanded:(BOOL)arg1 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(double)minimumHeight;
-(double)maximumHeight;
-(void)tintColorDidChange;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)_updateText;
-(BOOL)isExpanded;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setContentUnderStatusBarHeight:(double)arg1 ;
-(void)setDismissButtonStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(NSString *)backdropGroupName;
-(BOOL)isSendingBarMetricsChangeNotification;
-(UIBlurEffect *)backdropEffect;
-(void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(void)dealloc;
-(void)animateLinkImage:(CGImageRef)arg1 fromRect:(CGRect)arg2 inView:(id)arg3 toBarItem:(long long)arg4 afterImageDisappearsBlock:(/*^block*/id)arg5 afterDestinationLayerBouncesBlock:(/*^block*/id)arg6 ;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(void)setTheme:(_SFBarTheme *)arg1 ;
-(void)fluidProgressViewDidShowProgress:(id)arg1 ;
-(void)fluidProgressViewWillShowProgress:(id)arg1 ;
-(void)_cancelButtonTapped:(id)arg1 ;
-(void)setMaximumHeight:(double)arg1 ;
-(id)popoverSourceInfoForBarItem:(long long)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)newTextField;
-(BOOL)containsBarItem:(long long)arg1 ;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)navigationBarURLButtonDidReceiveCopyCommand:(id)arg1 ;
-(void)navigationBarURLButtonDidReceivePasteCommand:(id)arg1 ;
-(BOOL)navigationBarURLButton:(id)arg1 shouldShowMenuForGestureWithRecognizer:(id)arg2 ;
-(BOOL)navigationBarURLButtonShouldCopy:(id)arg1 ;
-(BOOL)navigationBarURLButtonShouldPaste:(id)arg1 ;
-(BOOL)navigationBarURLButtonIsUsingNarrowLayout:(id)arg1 ;
-(void)navigationBarURLButtonBeginSuppressingPlaceholder:(id)arg1 ;
-(void)navigationBarURLButtonEndSuppressingPlaceholder:(id)arg1 ;
-(BOOL)navigationBarURLButton:(id)arg1 canWriteAtLocation:(CGPoint)arg2 ;
-(BOOL)textFieldIsEditableForNavigationBarURLButton:(id)arg1 ;
-(id)textFieldForNavigationBarURLButton:(id)arg1 ;
-(void)navigationBarURLButtonDidRequestFocusForPencilInput:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)navigationBarURLButton:(id)arg1 shouldAllowLongPressAtPoint:(CGPoint)arg2 ;
-(void)animateSafariIconLinkFromPoint:(CGPoint)arg1 inView:(id)arg2 ;
-(id)textForNavigationBarURLButton:(id)arg1 ;
-(void)clearEphemeralUI;
-(void)_updateShowsLockIcon;
-(void)_updateAvailabilityButtonVisibilityForType:(long long)arg1 animated:(BOOL)arg2 showAvailabilityText:(BOOL)arg3 adjustURLLabels:(BOOL)arg4 ;
-(void)_updateNotSecureWarningsVisibility;
-(BOOL)hasToolbar;
-(void)_URLTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_timingFunctionForAnimation;
-(void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3 ;
-(void)setDelegate:(id<_SFNavigationBarDelegate>)arg1 ;
-(id)_placeholderText;
-(void)_mediaStateMuteButtonTapped:(id)arg1 ;
-(void)_reloadButtonPressed;
-(void)_stopButtonPressed;
-(void)_compressedBarTapped;
-(void)_dismissButtonTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 inputMode:(unsigned long long)arg2 ;
-(double)_controlsAlpha;
-(double)visualHeight;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(UITextField *)textField;
-(void)clickInteractionDidClickUp:(id)arg1 ;
-(BOOL)clickInteractionShouldBegin:(id)arg1 ;
-(void)clickInteractionDidClickDown:(id)arg1 ;
-(id)_dragInteraction:(id)arg1 viewToSnapshotItem:(id)arg2 ;
-(void)_formatToggleButtonTapped:(id)arg1 ;
-(double)placeholderHorizontalInset;
-(void)setExpanded:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setExpanded:(BOOL)arg1 textFieldSelectionRange:(NSRange)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_hideAvailabilityLabelNow;
-(void)setTextFieldPlaceHolderColor:(id)arg1 ;
-(id<_SFNavigationBarDelegate>)delegate;
-(void)setUsesNarrowLayout:(BOOL)arg1 ;
-(void)setUnifiedFieldShowsProgressView:(BOOL)arg1 ;
-(void)setDismissButtonHidden:(BOOL)arg1 ;
-(CGSize)dismissButtonSize;
-(double)dismissButtonPadding;
-(void)setHasToolbar:(BOOL)arg1 ;
-(void)setExpanded:(BOOL)arg1 textFieldSelectionRange:(NSRange)arg2 ;
-(void)setControlsHidden:(BOOL)arg1 ;
-(void)setMinimumBackdropHeight:(double)arg1 ;
-(CGRect)URLOutlineFrameInNavigationBarSpace;
-(void)setSuppressesBlur:(BOOL)arg1 ;
-(void)setUsesFaintSeparator:(BOOL)arg1 ;
-(void)setBackdropGroupDisabled:(BOOL)arg1 ;
-(id<_SFPopoverSourceInfo>)formatMenuButtonPopoverSourceInfo;
-(id<_SFPopoverSourceInfo>)reloadButtonPopoverSourceInfo;
-(id<_SFPopoverSourceInfo>)URLOutlinePopoverSourceInfo;
-(NSArray *)popoverPassthroughViews;
-(BOOL)usesNarrowLayout;
-(BOOL)unifiedFieldShowsProgressView;
-(_SFNavigationBarTheme *)effectiveTheme;
-(BOOL)areControlsHidden;
-(BOOL)isBackdropGroupDisabled;
-(double)contentUnderStatusBarHeight;
-(BOOL)suppressesBlur;
-(BOOL)usesFaintSeparator;
-(double)minimumBackdropHeight;
@end

