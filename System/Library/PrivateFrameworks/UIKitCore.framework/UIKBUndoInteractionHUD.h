/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol UIInteractiveUndoHUDActionDelegate;
@class UIKBUndoControl, UIVisualEffectView, UIView, UIKBUndoStyling, UILabel, NSDate;

@interface UIKBUndoInteractionHUD : UIView {

	id<UIInteractiveUndoHUDActionDelegate> _actionDelegate;
	long long _mode;
	UIKBUndoControl* _leftButtonView;
	UIKBUndoControl* _rightButtonView;
	UIKBUndoControl* _aCutButtonView;
	UIKBUndoControl* _aCopyButtonView;
	UIKBUndoControl* _aPasteButtonView;
	UIVisualEffectView* _backgroundEffectView;
	UIVisualEffectView* _shadowView;
	UIView* _containerView;
	UIKBUndoStyling* _style;
	UILabel* _instructionalLabel;
	NSDate* _appearanceDate;

}

@property (nonatomic,retain) UIVisualEffectView * backgroundEffectView;                                 //@synthesize backgroundEffectView=_backgroundEffectView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * shadowView;                                           //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                    //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIKBUndoStyling * style;                                                   //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIKBUndoControl * leftButtonView;                                          //@synthesize leftButtonView=_leftButtonView - In the implementation block
@property (nonatomic,retain) UIKBUndoControl * rightButtonView;                                         //@synthesize rightButtonView=_rightButtonView - In the implementation block
@property (nonatomic,retain) UIKBUndoControl * aCutButtonView;                                          //@synthesize aCutButtonView=_aCutButtonView - In the implementation block
@property (nonatomic,retain) UIKBUndoControl * aCopyButtonView;                                         //@synthesize aCopyButtonView=_aCopyButtonView - In the implementation block
@property (nonatomic,retain) UIKBUndoControl * aPasteButtonView;                                        //@synthesize aPasteButtonView=_aPasteButtonView - In the implementation block
@property (nonatomic,retain) UILabel * instructionalLabel;                                              //@synthesize instructionalLabel=_instructionalLabel - In the implementation block
@property (nonatomic,retain) NSDate * appearanceDate;                                                   //@synthesize appearanceDate=_appearanceDate - In the implementation block
@property (assign,nonatomic) long long mode;                                                            //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic,__weak) id<UIInteractiveUndoHUDActionDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
-(id<UIInteractiveUndoHUDActionDelegate>)actionDelegate;
-(void)setMode:(long long)arg1 ;
-(void)setContainerView:(UIView *)arg1 ;
-(long long)mode;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)containerView;
-(UIKBUndoStyling *)style;
-(void)setActionDelegate:(id<UIInteractiveUndoHUDActionDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setStyle:(UIKBUndoStyling *)arg1 ;
-(UIKBUndoControl *)leftButtonView;
-(void)setShadowView:(UIVisualEffectView *)arg1 ;
-(NSDate *)appearanceDate;
-(UIKBUndoControl *)rightButtonView;
-(void)controlActionDown:(id)arg1 ;
-(void)controlActionUpInside:(id)arg1 ;
-(void)controlActionUpOutside:(id)arg1 ;
-(id)createSeparatorView;
-(BOOL)availableOfControl:(id)arg1 ;
-(UIKBUndoControl *)aCutButtonView;
-(UIKBUndoControl *)aCopyButtonView;
-(UIKBUndoControl *)aPasteButtonView;
-(void)setRightButtonView:(UIKBUndoControl *)arg1 ;
-(void)performDelegateUndoAndUpdateHUDIfNeeded;
-(void)updateHUDControlState;
-(void)performDelegateRedoAndUpdateHUDIfNeeded;
-(void)setLeftButtonView:(UIKBUndoControl *)arg1 ;
-(id)initWithKeyboardAppearance:(long long)arg1 isRTL:(BOOL)arg2 mode:(long long)arg3 sceneBounds:(CGRect)arg4 ;
-(void)updateControlWithDirection:(long long)arg1 travelProgress:(double)arg2 isRTL:(BOOL)arg3 ;
-(void)setACutButtonView:(UIKBUndoControl *)arg1 ;
-(void)setACopyButtonView:(UIKBUndoControl *)arg1 ;
-(void)setAPasteButtonView:(UIKBUndoControl *)arg1 ;
-(UIVisualEffectView *)backgroundEffectView;
-(void)setBackgroundEffectView:(UIVisualEffectView *)arg1 ;
-(UILabel *)instructionalLabel;
-(void)setInstructionalLabel:(UILabel *)arg1 ;
-(UIVisualEffectView *)shadowView;
-(void)setAppearanceDate:(NSDate *)arg1 ;
@end
