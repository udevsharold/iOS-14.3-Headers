/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextField.h>
#import <UIKitCore/_UISearchBarTextFieldOrMailReplacement.h>

@class NSMutableDictionary, NSValue, _UISearchBarSearchFieldBackgroundView, UIImageView, NSHashTable, _UISearchBarTextFieldTokenCounter, UITapGestureRecognizer, UIHoverGestureRecognizer, UIImage, UISearchBar, UIColor, NSArray, UITextRange, NSString;

@interface UISearchTextField : UITextField <_UISearchBarTextFieldOrMailReplacement> {

	NSMutableDictionary* _customClearButtons;
	NSMutableDictionary* _iconOffsets;
	NSValue* _searchTextOffsetValue;
	_UISearchBarSearchFieldBackgroundView* _effectBackgroundTop;
	_UISearchBarSearchFieldBackgroundView* _effectBackgroundBottom;
	UIImageView* _defaultLeftView;
	BOOL _deferringFirstResponder;
	BOOL _animatePlaceholderOnResignFirstResponder;
	struct {
		unsigned searchBarWantsShouldSendContentChangedNotificationsIfOnlyMarkedTextChanged : 1;
		unsigned delegateImplementsItemProviderForCopyingTokens;
		unsigned delegateImplementsUnderscoredItemProviderForCopyingTokens;
		unsigned allowsCopyingTokens : 1;
		unsigned allowsDeletingTokens : 1;
		unsigned alwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory : 1;
	}  _searchBarTextFieldFlags;
	NSHashTable* _knownTokenLayoutViews;
	_UISearchBarTextFieldTokenCounter* _tokenCounter;
	UITapGestureRecognizer* _tokenTapGestureRecognizer;
	UIHoverGestureRecognizer* _hoverGestureRecognizer;
	UIImage* _magnifyingGlassImage;
	BOOL __preventSelectionViewActivation;
	BOOL __alwaysShowsClearButtonWhenEmpty;
	UISearchBar* _searchBar;
	UIColor* _tokenBackgroundColor;

}

@property (setter=_setSearchTextOffetValue:,nonatomic,retain) NSValue * _searchTextOffsetValue; 
@property (assign,setter=_setPreventSelectionViewActivation:,nonatomic) BOOL _preventSelectionViewActivation;                                                                            //@synthesize _preventSelectionViewActivation=__preventSelectionViewActivation - In the implementation block
@property (assign,setter=_setIgnoresDynamicType:,nonatomic) BOOL _ignoresDynamicType; 
@property (assign,setter=_setSearchBar:,nonatomic,__weak) UISearchBar * _searchBar;                                                                                                      //@synthesize searchBar=_searchBar - In the implementation block
@property (assign,setter=_setAlwaysShowsClearButtonWhenEmpty:,nonatomic) BOOL _alwaysShowsClearButtonWhenEmpty;                                                                          //@synthesize _alwaysShowsClearButtonWhenEmpty=__alwaysShowsClearButtonWhenEmpty - In the implementation block
@property (assign,setter=_setAlwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory:,nonatomic) BOOL _alwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory; 
@property (nonatomic,copy) NSArray * tokens; 
@property (nonatomic,readonly) UITextRange * textualRange; 
@property (nonatomic,retain) UIColor * tokenBackgroundColor;                                                                                                                             //@synthesize tokenBackgroundColor=_tokenBackgroundColor - In the implementation block
@property (assign,nonatomic) BOOL allowsDeletingTokens; 
@property (assign,nonatomic) BOOL allowsCopyingTokens; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_canvasViewClass;
+(BOOL)_wantsFadedEdges;
+(Class)_fieldEditorClass;
+(Class)_textPasteItemClass;
-(void)_setBottomEffectBackgroundVisible:(BOOL)arg1 ;
-(BOOL)_shouldSuppressSelectionHandles;
-(BOOL)_hasCustomClearButtonImage;
-(void)_setIgnoresDynamicType:(BOOL)arg1 ;
-(BOOL)_textShouldFillFieldEditorHeight;
-(long long)_suffixLabelTextAlignment;
-(id)_customDraggableObjectsForRange:(id)arg1 ;
-(id)_clearButtonImageForState:(unsigned long long)arg1 ;
-(void)__highlightedDidChangeAnimated:(BOOL)arg1 ;
-(CGSize)_clearButtonSize;
-(void)_updateDefaultLeftViewForFont:(id)arg1 ;
-(void)insertText:(id)arg1 ;
-(void)updateForBackdropStyle:(unsigned long long)arg1 ;
-(BOOL)_isEditingOrHasContent;
-(CGRect)_adjustedTextOrEditingRect:(CGRect)arg1 forBounds:(CGRect)arg2 ;
-(void)insertTextSuggestion:(id)arg1 ;
-(void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSRange)_rangeForSetText;
-(CGRect)_searchIconViewRectForBounds:(CGRect)arg1 ;
-(void)_updateAtomViewSelection:(BOOL)arg1 ;
-(void)_tokenTapGestureRecognized;
-(BOOL)_delegateShouldClear;
-(id)selectedTokens;
-(BOOL)_preventSelectionViewActivation;
-(CGRect)leftViewRectForBounds:(CGRect)arg1 ;
-(void)_copySelectionPopulatingActuallyCopiedTokenCharacterIndexes:(id)arg1 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(void)_setAlwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory:(BOOL)arg1 ;
-(BOOL)_alwaysShowsClearButtonWhenEmpty;
-(void)_pasteSessionDidFinish:(id)arg1 ;
-(BOOL)_hasContent;
-(NSRange)insertFilteredText:(id)arg1 ;
-(void)_setBackgroundViewsAlpha:(double)arg1 ;
-(void)_removeEffectsBackgroundViews;
-(void)_updateLeftViewForMagnifyingGlassImage;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(id)textInRange:(id)arg1 ;
-(BOOL)allowsDraggingAttachments;
-(void)_animateForFirstResponderChangeWithAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(NSRange)_rangeForClearButton;
-(id)_placeholderColor;
-(void)_animateForFirstResponderChangeWithAnimations:(/*^block*/id)arg1 ;
-(void)_defaultInsertTextSuggestion:(id)arg1 ;
-(void)_applyHighlightedAnimated:(BOOL)arg1 ;
-(Class)_placeholderLabelClass;
-(CGRect)_adjustmentsForSearchIconViewRectForBounds:(CGRect)arg1 ;
-(void)_setAlwaysShowsClearButtonWhenEmpty:(BOOL)arg1 ;
-(void)_clearBackgroundViews;
-(CGRect)_suffixFrame;
-(double)_maximumAlphaForLeadingView;
-(CGRect)clearButtonRectForBounds:(CGRect)arg1 ;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2 ;
-(void)_setSearchTextOffetValue:(id)arg1 ;
-(void)_setMagnifyingGlassImage:(id)arg1 ;
-(BOOL)_displaysHelpMessageLabel;
-(unsigned long long)_characterIndexForTokenTapGestureRecognizer;
-(id)_rangeOfCustomDraggableObjectsInRange:(id)arg1 ;
-(CGRect)rightViewRectForBounds:(CGRect)arg1 ;
-(void)_setOffsetValue:(id)arg1 forIcon:(long long)arg2 ;
-(void)cut:(id)arg1 ;
-(void)setAttributedMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(Class)_systemBackgroundViewClass;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)allowsCopyingTokens;
-(void)deleteBackward;
-(double)_clearButtonMarginX;
-(CGRect)_bookmarkViewRectForBounds:(CGRect)arg1 ;
-(void)_redirectSelectionToAvoidClobberingTokens;
-(void)_setClearButtonImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setAllowsCopyingTokens:(BOOL)arg1 ;
-(CGRect)_availableTextRectForBounds:(CGRect)arg1 forEditing:(BOOL)arg2 ;
-(void)_updateAlphaForMagnifyingGlass;
-(void)setTokenBackgroundColor:(UIColor *)arg1 ;
-(id)_offsetValueForIcon:(long long)arg1 ;
-(NSValue *)_searchTextOffsetValue;
-(id)textInputTraits;
-(void)_updateHelpMessageOverrideWithMessage:(id)arg1 ;
-(void)insertToken:(id)arg1 atIndex:(long long)arg2 ;
-(BOOL)_shouldOverrideEditingFont;
-(void)_hoverGestureChanged:(id)arg1 ;
-(void)setTokens:(NSArray *)arg1 ;
-(void)_updateBackgroundView:(id)arg1 withStyle:(unsigned long long)arg2 filter:(id)arg3 ;
-(id)tokensInRange:(id)arg1 ;
-(void)_highlightedDidChangeAnimated:(BOOL)arg1 ;
-(void)removeTokenAtIndex:(long long)arg1 ;
-(BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
-(void)fieldEditorDidChangeSelection:(id)arg1 ;
-(BOOL)_shouldCenterPlaceholder;
-(void)insertAttributedText:(id)arg1 ;
-(BOOL)_delegateShouldChangeCharactersInTextStorageRange:(NSRange)arg1 replacementString:(id)arg2 delegateCares:(BOOL*)arg3 ;
-(void)replaceRange:(id)arg1 withAttributedText:(id)arg2 ;
-(UIColor *)tokenBackgroundColor;
-(void)_setPreventSelectionViewActivation:(BOOL)arg1 ;
-(UITextRange *)textualRange;
-(BOOL)_supportsDynamicType;
-(void)_activateSelectionView;
-(void)_willAddTokenLayoutView:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(BOOL)_scalesMagnifyingGlassForDynamicTypeWithFont:(id)arg1 ;
-(void)_didRemoveTokenLayoutView:(id)arg1 ;
-(BOOL)_shouldDetermineInterfaceStyleTextColor;
-(void)_updateBackgroundViewsAnimated:(BOOL)arg1 ;
-(void)_setAnimatesBackgroundCornerRadius:(BOOL)arg1 ;
-(NSRange)_textRangeForTextStorageRange:(NSRange)arg1 ;
-(long long)_blurEffectStyle;
-(id)attributedTextInRange:(id)arg1 ;
-(BOOL)allowsDeletingTokens;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(id)_newAttributedStringWithToken:(id)arg1 ;
-(BOOL)canResignFirstResponder;
-(BOOL)resignFirstResponder;
-(NSArray *)tokens;
-(BOOL)_delegateShouldScrollToVisibleWhenBecomingFirstResponder;
-(id)attributedText;
-(BOOL)canBecomeFocused;
-(void)copy:(id)arg1 ;
-(void)_setSearchBar:(id)arg1 ;
-(UISearchBar *)_searchBar;
-(void)tintColorDidChange;
-(id)positionOfTokenAtIndex:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)_createEffectsBackgroundViewWithStyle:(unsigned long long)arg1 applyFilter:(id)arg2 ;
-(void)setAllowsDeletingTokens:(BOOL)arg1 ;
-(id)text;
-(BOOL)_shouldResignOnEditingDidEndOnExit;
-(void)_becomeFirstResponder;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_ignoresDynamicType;
-(void)_didSetFont:(id)arg1 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFirstResponder;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_delegateShouldEndEditing;
-(void)setDelegate:(id)arg1 ;
-(BOOL)_shouldHideMagnifyingGlassWhenEditingOrHasContent;
-(BOOL)_alwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory;
-(void)replaceTextualPortionOfRange:(id)arg1 withToken:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(BOOL)_delegateShouldBeginEditing;
-(BOOL)_becomeFirstResponderWhenPossible;
-(void)encodeWithCoder:(id)arg1 ;
@end

