/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TUIAssistantButtonBarViewDelegate.h>
#import <libobjc.A.dylib/TUISystemInputAssistantPageViewDelegate.h>

@protocol TUISystemInputAssistantViewDelegate;
@class UIKBRenderConfig, UIKBVisualEffectView, TUISystemInputAssistantLayout, UIView, UITextInputAssistantItem, TUIAssistantButtonBarView, TUISystemInputAssistantPageView, TUISystemInputAssistantLayoutStandard, TUIPredictionView, TUICandidateView, NSString;

@interface TUISystemInputAssistantView : UIView <TUIAssistantButtonBarViewDelegate, TUISystemInputAssistantPageViewDelegate> {

	BOOL _buttonBarItemsExpanded;
	BOOL _needsValidation;
	int _needsValidationGuard;
	BOOL _backgroundVisible;
	BOOL _centerViewHidden;
	BOOL _showsExpandableButtonBarItems;
	BOOL _hidesExpandableButton;
	BOOL _showsButtonBarItemsInline;
	UIKBRenderConfig* _renderConfig;
	UIKBVisualEffectView* _backdropView;
	id<TUISystemInputAssistantViewDelegate> _delegate;
	TUISystemInputAssistantLayout* _layout;
	UIView* _centerView;
	double _centerViewWidth;
	UITextInputAssistantItem* _inputAssistantItem;
	UITextInputAssistantItem* _systemInputAssistantItem;
	TUIAssistantButtonBarView* _leftButtonBar;
	TUIAssistantButtonBarView* _rightButtonBar;
	TUIAssistantButtonBarView* _unifiedButtonBar;
	TUISystemInputAssistantPageView* _centerPageView;
	TUISystemInputAssistantLayoutStandard* _defaultLayout;

}

@property (nonatomic,readonly) TUIPredictionView * predictionView; 
@property (nonatomic,readonly) TUICandidateView * candidateView; 
@property (nonatomic,retain) UIKBVisualEffectView * backdropView;                                  //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) TUIAssistantButtonBarView * leftButtonBar;                            //@synthesize leftButtonBar=_leftButtonBar - In the implementation block
@property (nonatomic,retain) TUIAssistantButtonBarView * rightButtonBar;                           //@synthesize rightButtonBar=_rightButtonBar - In the implementation block
@property (nonatomic,retain) TUIAssistantButtonBarView * unifiedButtonBar;                         //@synthesize unifiedButtonBar=_unifiedButtonBar - In the implementation block
@property (nonatomic,retain) TUISystemInputAssistantPageView * centerPageView;                     //@synthesize centerPageView=_centerPageView - In the implementation block
@property (nonatomic,retain) TUISystemInputAssistantLayoutStandard * defaultLayout;                //@synthesize defaultLayout=_defaultLayout - In the implementation block
@property (nonatomic,retain) UIKBRenderConfig * renderConfig;                                      //@synthesize renderConfig=_renderConfig - In the implementation block
@property (assign,nonatomic,__weak) id<TUISystemInputAssistantViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TUISystemInputAssistantLayout * layout;                               //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) BOOL backgroundVisible;                                               //@synthesize backgroundVisible=_backgroundVisible - In the implementation block
@property (nonatomic,retain) UIView * centerView;                                                  //@synthesize centerView=_centerView - In the implementation block
@property (assign,nonatomic) BOOL centerViewHidden;                                                //@synthesize centerViewHidden=_centerViewHidden - In the implementation block
@property (assign,nonatomic) double centerViewWidth;                                               //@synthesize centerViewWidth=_centerViewWidth - In the implementation block
@property (assign,nonatomic) BOOL showsExpandableButtonBarItems;                                   //@synthesize showsExpandableButtonBarItems=_showsExpandableButtonBarItems - In the implementation block
@property (assign,nonatomic) BOOL hidesExpandableButton;                                           //@synthesize hidesExpandableButton=_hidesExpandableButton - In the implementation block
@property (assign,nonatomic) BOOL showsButtonBarItemsInline;                                       //@synthesize showsButtonBarItemsInline=_showsButtonBarItemsInline - In the implementation block
@property (nonatomic,retain) UITextInputAssistantItem * inputAssistantItem;                        //@synthesize inputAssistantItem=_inputAssistantItem - In the implementation block
@property (nonatomic,retain) UITextInputAssistantItem * systemInputAssistantItem;                  //@synthesize systemInputAssistantItem=_systemInputAssistantItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hidesExpandableButton;
-(UITextInputAssistantItem *)inputAssistantItem;
-(void)setLayout:(TUISystemInputAssistantLayout *)arg1 ;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(BOOL)_shouldHostCenterViewOutsidePageView;
-(void)_updateBarButtonGroups;
-(void)setCenterViewHidden:(BOOL)arg1 ;
-(void)_didTapExpandButton:(id)arg1 ;
-(BOOL)_swiftPlaygroundsWorkaroundEnabled;
-(void)setHidesExpandableButton:(BOOL)arg1 ;
-(UIKBRenderConfig *)renderConfig;
-(double)centerViewWidth;
-(BOOL)showsButtonBarItemsInline;
-(TUISystemInputAssistantLayoutStandard *)defaultLayout;
-(void)setCenterView:(UIView *)arg1 ;
-(TUIAssistantButtonBarView *)rightButtonBar;
-(BOOL)shouldSkipValidation;
-(void)setBackgroundVisible:(BOOL)arg1 ;
-(UITextInputAssistantItem *)systemInputAssistantItem;
-(TUISystemInputAssistantPageView *)centerPageView;
-(id)_currentLayoutViewSet;
-(void)_updateVisualProvider;
-(void)setButtonBarItemsExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)layoutSubviews;
-(void)setCenterViewWidth:(double)arg1 ;
-(void)setLeftButtonBar:(TUIAssistantButtonBarView *)arg1 ;
-(BOOL)backgroundVisible;
-(void)setRightButtonBar:(TUIAssistantButtonBarView *)arg1 ;
-(void)setBackdropView:(UIKBVisualEffectView *)arg1 ;
-(void)assistantButtonBarView:(id)arg1 wantsToShowCollapsedItemGroup:(id)arg2 fromButton:(id)arg3 ;
-(TUISystemInputAssistantLayout *)layout;
-(TUIAssistantButtonBarView *)leftButtonBar;
-(UIView *)centerView;
-(void)setInputAssistantItem:(UITextInputAssistantItem *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsValidation;
-(void)setUnifiedButtonBar:(TUIAssistantButtonBarView *)arg1 ;
-(void)validateIfNeeded;
-(BOOL)showsExpandableButtonBarItems;
-(BOOL)centerViewHidden;
-(void)setDelegate:(id<TUISystemInputAssistantViewDelegate>)arg1 ;
-(void)setShowsButtonBarItemsInline:(BOOL)arg1 ;
-(void)assistantPageView:(id)arg1 didSwitchToSecondaryViewVisible:(BOOL)arg2 ;
-(UIKBVisualEffectView *)backdropView;
-(void)_exchangeCenterViewIfNecessaryForCompatibility;
-(void)setSystemInputAssistantItem:(UITextInputAssistantItem *)arg1 ;
-(TUIPredictionView *)predictionView;
-(void)_setButtonBarItemsExpanded:(BOOL)arg1 animationType:(unsigned long long)arg2 ;
-(id)_hostedCenterView;
-(void)_setRenderConfig:(id)arg1 ;
-(TUIAssistantButtonBarView *)unifiedButtonBar;
-(void)_updateExpandableButtonBarItems;
-(void)setShowsExpandableButtonBarItems:(BOOL)arg1 ;
-(BOOL)_areButtonBarItemsVisible;
-(void)setDefaultLayout:(TUISystemInputAssistantLayoutStandard *)arg1 ;
-(void)setCenterPageView:(TUISystemInputAssistantPageView *)arg1 ;
-(id)_createUnifiedButtonBarIfNecessary;
-(id<TUISystemInputAssistantViewDelegate>)delegate;
-(TUICandidateView *)candidateView;
@end
