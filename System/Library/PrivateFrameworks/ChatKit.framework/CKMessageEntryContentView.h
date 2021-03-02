/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/CKMessageEntryRichTextViewDelegate.h>
#import <UIKit/UITextDragDelegate.h>
#import <libobjc.A.dylib/CKMessageEntryViewStyleProtocol.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CKPluginEntryViewController;
@class CKComposition, CKMessageEntryTextView, CKMessageEntryRichTextView, UIViewController, CKConversation, IMPluginPayload, UIView, UIButton, NSString, NSDictionary;

@interface CKMessageEntryContentView : UIScrollView <UITextViewDelegate, CKMessageEntryRichTextViewDelegate, UITextDragDelegate, CKMessageEntryViewStyleProtocol, UIGestureRecognizerDelegate> {

	BOOL _shouldShowSubject;
	BOOL _needsTextLayout;
	BOOL _needsEnsureSelectionVisible;
	BOOL _needsEnsureTextViewVisible;
	BOOL _ignoreEndEditing;
	BOOL _isCompositionExpirable;
	BOOL _pendingShelfPayloadWillAnimateIn;
	CKComposition* _composition;
	long long _style;
	CKMessageEntryTextView* _subjectView;
	CKMessageEntryRichTextView* _textView;
	double _placeHolderWidth;
	double _maxContentWidthWhenExpanded;
	double _maxPreviewContentWidthWhenExpanded;
	double _containerViewLineWidth;
	double _sendButtonTextInsetWidth;
	UIViewController*<CKPluginEntryViewController> _pluginEntryViewController;
	CKConversation* _conversation;
	CKMessageEntryTextView* _activeView;
	IMPluginPayload* _shelfPluginPayload;
	UIView* _textAndSubjectDividerLine;
	UIView* _pluginDividerLine;
	UIButton* _clearPluginButton;
	NSString* _requestedPlaceholderText;
	NSString* _overridePlaceholderText;
	NSDictionary* _bizIntent;

}

@property (assign,nonatomic,__weak) CKMessageEntryTextView * activeView;                                            //@synthesize activeView=_activeView - In the implementation block
@property (assign,nonatomic) BOOL shouldShowSubject;                                                                //@synthesize shouldShowSubject=_shouldShowSubject - In the implementation block
@property (nonatomic,retain) UIViewController*<CKPluginEntryViewController> pluginEntryViewController;              //@synthesize pluginEntryViewController=_pluginEntryViewController - In the implementation block
@property (nonatomic,retain) IMPluginPayload * shelfPluginPayload;                                                  //@synthesize shelfPluginPayload=_shelfPluginPayload - In the implementation block
@property (nonatomic,retain) CKMessageEntryTextView * subjectView;                                                  //@synthesize subjectView=_subjectView - In the implementation block
@property (nonatomic,retain) CKMessageEntryRichTextView * textView;                                                 //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UIView * textAndSubjectDividerLine;                                                    //@synthesize textAndSubjectDividerLine=_textAndSubjectDividerLine - In the implementation block
@property (nonatomic,retain) UIView * pluginDividerLine;                                                            //@synthesize pluginDividerLine=_pluginDividerLine - In the implementation block
@property (assign,nonatomic) BOOL needsTextLayout;                                                                  //@synthesize needsTextLayout=_needsTextLayout - In the implementation block
@property (assign,nonatomic) BOOL needsEnsureSelectionVisible;                                                      //@synthesize needsEnsureSelectionVisible=_needsEnsureSelectionVisible - In the implementation block
@property (assign,nonatomic) BOOL needsEnsureTextViewVisible;                                                       //@synthesize needsEnsureTextViewVisible=_needsEnsureTextViewVisible - In the implementation block
@property (assign,nonatomic) BOOL ignoreEndEditing;                                                                 //@synthesize ignoreEndEditing=_ignoreEndEditing - In the implementation block
@property (assign,nonatomic) BOOL isCompositionExpirable;                                                           //@synthesize isCompositionExpirable=_isCompositionExpirable - In the implementation block
@property (nonatomic,retain) UIButton * clearPluginButton;                                                          //@synthesize clearPluginButton=_clearPluginButton - In the implementation block
@property (nonatomic,retain) NSString * requestedPlaceholderText;                                                   //@synthesize requestedPlaceholderText=_requestedPlaceholderText - In the implementation block
@property (nonatomic,retain) NSString * overridePlaceholderText;                                                    //@synthesize overridePlaceholderText=_overridePlaceholderText - In the implementation block
@property (assign,nonatomic) BOOL pendingShelfPayloadWillAnimateIn;                                                 //@synthesize pendingShelfPayloadWillAnimateIn=_pendingShelfPayloadWillAnimateIn - In the implementation block
@property (nonatomic,copy) NSDictionary * bizIntent;                                                                //@synthesize bizIntent=_bizIntent - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowPlugin; 
@property (nonatomic,retain) CKComposition * composition;                                                           //@synthesize composition=_composition - In the implementation block
@property (nonatomic,copy) NSString * placeholderText; 
@property (nonatomic,readonly) UIView * pluginView; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isSingleLine,nonatomic,readonly) BOOL singleLine; 
@property (getter=isShowingDictationPlaceholder,nonatomic,readonly) BOOL showingDictationPlaceholder; 
@property (nonatomic,readonly) UIEdgeInsets contentTextAlignmentInsets; 
@property (assign,nonatomic) char balloonColor; 
@property (assign,nonatomic) double placeHolderWidth;                                                               //@synthesize placeHolderWidth=_placeHolderWidth - In the implementation block
@property (assign,nonatomic) double maxContentWidthWhenExpanded;                                                    //@synthesize maxContentWidthWhenExpanded=_maxContentWidthWhenExpanded - In the implementation block
@property (assign,nonatomic) double maxPreviewContentWidthWhenExpanded;                                             //@synthesize maxPreviewContentWidthWhenExpanded=_maxPreviewContentWidthWhenExpanded - In the implementation block
@property (assign,nonatomic) double containerViewLineWidth;                                                         //@synthesize containerViewLineWidth=_containerViewLineWidth - In the implementation block
@property (assign,nonatomic) double sendButtonTextInsetWidth;                                                       //@synthesize sendButtonTextInsetWidth=_sendButtonTextInsetWidth - In the implementation block
@property (assign,nonatomic,__weak) CKConversation * conversation;                                                  //@synthesize conversation=_conversation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long style;                                                                       //@synthesize style=_style - In the implementation block
+(id)_createTextView;
+(id)_createSubjectView;
+(void)prewarmTextView;
-(CKMessageEntryRichTextView *)textView;
-(void)setSendButtonTextInsetWidth:(double)arg1 ;
-(void)setMaxPreviewContentWidthWhenExpanded:(double)arg1 ;
-(void)setMaxContentWidthWhenExpanded:(double)arg1 ;
-(BOOL)isSingleLine;
-(void)setPlaceHolderWidth:(double)arg1 ;
-(CKMessageEntryTextView *)subjectView;
-(void)setShouldShowSubject:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 shouldShowSubject:(BOOL)arg2 ;
-(void)setContainerViewLineWidth:(double)arg1 ;
-(CKMessageEntryTextView *)activeView;
-(IMPluginPayload *)shelfPluginPayload;
-(UIView *)pluginView;
-(void)willAnimateBoundsChange;
-(void)collapseTextFieldsIfInPencilMode;
-(void)setBalloonColor:(char)arg1 ;
-(BOOL)isShowingDictationPlaceholder;
-(CKConversation *)conversation;
-(void)dealloc;
-(BOOL)makeActive;
-(void)setTextView:(CKMessageEntryRichTextView *)arg1 ;
-(NSString *)placeholderText;
-(void)acceptAutocorrection;
-(void)setConversation:(CKConversation *)arg1 ;
-(long long)style;
-(double)placeHolderWidth;
-(NSDictionary *)bizIntent;
-(void)_updateUI;
-(char)balloonColor;
-(id)textDraggableView:(id)arg1 itemsForDrag:(id)arg2 ;
-(void)messageEntryRichTextViewDidTapHandwritingKey:(id)arg1 ;
-(double)maxWidthForPreviewImagesInMessageEntryRichTextView:(id)arg1 ;
-(BOOL)messageEntryRichTextView:(id)arg1 shouldRecognizeGesture:(id)arg2 ;
-(void)messageEntryRichTextViewWasTapped:(id)arg1 isLongPress:(BOOL)arg2 ;
-(void)messageEntryRichTextView:(id)arg1 didTapMediaObject:(id)arg2 ;
-(void)messageEntryRichTextViewDidTapMention:(id)arg1 characterIndex:(double)arg2 ;
-(UIViewController*<CKPluginEntryViewController>)pluginEntryViewController;
-(void)setStyle:(long long)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(BOOL)shouldShowPlugin;
-(void)layoutSubviews;
-(double)_calcuateIdealMaxPluginHeight:(BOOL)arg1 ;
-(UIButton *)clearPluginButton;
-(BOOL)shouldShowClearButton;
-(UIView *)pluginDividerLine;
-(void)_layoutDividerLine:(id)arg1 leftInset:(double)arg2 rightInset:(double)arg3 currentYOffset:(double*)arg4 ;
-(BOOL)needsTextLayout;
-(void)setNeedsTextLayout:(BOOL)arg1 ;
-(double)_maxWidthForTextView;
-(void)_layoutTextView:(id)arg1 currentYOffset:(double*)arg2 originX:(double)arg3 maxWidth:(double)arg4 ;
-(UIView *)textAndSubjectDividerLine;
-(void)textViewDidEndEditing:(id)arg1 ;
-(double)sendButtonTextInsetWidth;
-(void)ensureSelectionVisibleIfNeeded;
-(void)ensureTextViewVisibleIfNeeded;
-(double)containerViewLineWidth;
-(void)setSubjectView:(CKMessageEntryTextView *)arg1 ;
-(void)setTextAndSubjectDividerLine:(UIView *)arg1 ;
-(void)clearPluginButtonTapped:(id)arg1 ;
-(void)setClearPluginButton:(UIButton *)arg1 ;
-(void)setPluginDividerLine:(UIView *)arg1 ;
-(void)pluginPayloadWantsResize:(id)arg1 ;
-(void)plugingPayloadDidLoad:(id)arg1 ;
-(void)setActiveView:(CKMessageEntryTextView *)arg1 ;
-(void)setBizIntent:(NSDictionary *)arg1 ;
-(BOOL)isCompositionExpirable;
-(void)invalidateComposition;
-(void)configureShelfForPluginPayload:(id)arg1 ;
-(BOOL)_shouldDeferUpdateUI;
-(void)setIsCompositionExpirable:(BOOL)arg1 ;
-(void)setShelfPluginPayload:(IMPluginPayload *)arg1 ;
-(void)setPluginEntryViewController:(UIViewController*<CKPluginEntryViewController>)arg1 ;
-(BOOL)pendingShelfPayloadWillAnimateIn;
-(void)setPendingShelfPayloadWillAnimateIn:(BOOL)arg1 ;
-(NSString *)requestedPlaceholderText;
-(void)setRequestedPlaceholderText:(NSString *)arg1 ;
-(BOOL)ignoreEndEditing;
-(void)textViewDidChange:(id)arg1 ;
-(void)setIgnoreEndEditing:(BOOL)arg1 ;
-(void)setNeedsEnsureSelectionVisible:(BOOL)arg1 ;
-(double)maxPreviewContentWidthWhenExpanded;
-(double)maxContentWidthWhenExpanded;
-(void)setNeedsEnsureTextViewVisible:(BOOL)arg1 ;
-(BOOL)needsEnsureSelectionVisible;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(BOOL)needsEnsureTextViewVisible;
-(void)setOverridePlaceholderText:(NSString *)arg1 ;
-(NSString *)overridePlaceholderText;
-(UIEdgeInsets)contentTextAlignmentInsets;
-(BOOL)messageEntryRichTextView:(id)arg1 shouldPasteMediaObjects:(id)arg2 ;
-(void)messageEntryRichTextView:(id)arg1 pastedURL:(id)arg2 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)prepareForShelfPayloadAnimation;
-(BOOL)shouldLayoutPluginEdgeToEdge;
-(void)setBounds:(CGRect)arg1 ;
-(void)didFinishAnimatedBoundsChange;
-(BOOL)shouldShowSubject;
-(BOOL)isActive;
-(CKComposition *)composition;
-(void)setFrame:(CGRect)arg1 ;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setComposition:(CKComposition *)arg1 ;
@end
