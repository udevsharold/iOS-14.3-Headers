/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UINavigationPalette.h>

@class _UIBarBackground, _UIBarBackgroundLayoutLegacy, UINavigationController, UIViewController, NSArray, UIView, NSString;

@interface _UINavigationControllerPalette : UIView <_UINavigationPalette> {

	_UIBarBackground* _backgroundView;
	_UIBarBackgroundLayoutLegacy* _backgroundViewLayout;
	double _backgroundUnderlapHeight;
	struct {
		unsigned isAttached : 1;
		unsigned attachmentIsChanging : 1;
		unsigned restartPaletteTransitionIfNecessary : 1;
		unsigned pinned : 1;
		unsigned pinningBarShadowIsHidden : 1;
		unsigned paletteShadowIsHidden : 1;
		unsigned pinningBarShadowWasHidden : 1;
	}  _paletteFlags;
	BOOL __paletteOverridesPinningBar;
	BOOL _visibleWhenPinningBarIsHidden;
	BOOL __palettePinningBarHidden;
	unsigned long long _boundaryEdge;
	UINavigationController* _navController;
	UIViewController* __unpinnedController;
	id __pinningBar;
	NSArray* __constraints;
	NSArray* __backgroundConstraints;
	CGSize __size;
	UIEdgeInsets _preferredContentInsets;

}

@property (assign,nonatomic) UIViewController * _unpinnedController;                                                                           //@synthesize _unpinnedController=__unpinnedController - In the implementation block
@property (assign,setter=_setPinningBar:,nonatomic) id _pinningBar;                                                                            //@synthesize _pinningBar=__pinningBar - In the implementation block
@property (getter=_attachmentIsChanging,nonatomic,readonly) BOOL _attachmentIsChanging; 
@property (assign,setter=_setRestartPaletteTransitionIfNecessary:,nonatomic) BOOL _restartPaletteTransitionIfNecessary; 
@property (setter=_setConstraints:,nonatomic,retain) NSArray * _constraints;                                                                   //@synthesize _constraints=__constraints - In the implementation block
@property (assign,setter=_setSize:,nonatomic) CGSize _size;                                                                                    //@synthesize _size=__size - In the implementation block
@property (setter=_setBackgroundConstraints:,nonatomic,retain) NSArray * _backgroundConstraints;                                               //@synthesize _backgroundConstraints=__backgroundConstraints - In the implementation block
@property (assign,setter=_setPalettePinningBarHidden:,getter=_isPalettePinningBarHidden,nonatomic) BOOL _palettePinningBarHidden;              //@synthesize _palettePinningBarHidden=__palettePinningBarHidden - In the implementation block
@property (setter=_setBackgroundView:,nonatomic,retain) UIView * _backgroundView; 
@property (assign,setter=_setPaletteOverridesPinningBar:,nonatomic) BOOL _paletteOverridesPinningBar;                                          //@synthesize _paletteOverridesPinningBar=__paletteOverridesPinningBar - In the implementation block
@property (nonatomic,readonly) UINavigationController * navController;                                                                         //@synthesize navController=_navController - In the implementation block
@property (nonatomic,readonly) unsigned long long boundaryEdge;                                                                                //@synthesize boundaryEdge=_boundaryEdge - In the implementation block
@property (assign,getter=isPinned,nonatomic) BOOL pinned; 
@property (assign,nonatomic) BOOL pinningBarShadowWasHidden; 
@property (assign,nonatomic) BOOL pinningBarShadowIsHidden; 
@property (assign,nonatomic) BOOL paletteShadowIsHidden; 
@property (assign,getter=isVisibleWhenPinningBarIsHidden,nonatomic) BOOL visibleWhenPinningBarIsHidden;                                        //@synthesize visibleWhenPinningBarIsHidden=_visibleWhenPinningBarIsHidden - In the implementation block
@property (assign,nonatomic) UIEdgeInsets preferredContentInsets;                                                                              //@synthesize preferredContentInsets=_preferredContentInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateBackgroundView;
-(void)_disableConstraints;
-(NSArray *)_backgroundConstraints;
-(BOOL)isAttached;
-(void)_enableConstraints;
-(id)_backgroundViewLayout;
-(void)setVisibleWhenPinningBarIsHidden:(BOOL)arg1 ;
-(void)_setupBackgroundViewIfNecessary;
-(void)_configureConstraintsForBackground:(id)arg1 ;
-(BOOL)paletteShadowIsHidden;
-(NSArray *)_constraints;
-(BOOL)isVisibleWhenPinningBarIsHidden;
-(void)_resetHeightConstraintConstant;
-(void)_setAttachmentIsChanging:(BOOL)arg1 ;
-(void)_setVisualAltitude:(double)arg1 ;
-(void)_setBackgroundView:(id)arg1 ;
-(unsigned long long)boundaryEdge;
-(BOOL)pinningBarShadowWasHidden;
-(BOOL)_isPalettePinningBarHidden;
-(UIView *)_backgroundView;
-(void)_setLeftConstraintConstant:(double)arg1 ;
-(UIViewController *)_unpinnedController;
-(void)_configurePaletteConstraintsForBoundary;
-(void)_setVisualAltitudeBias:(CGSize)arg1 ;
-(void)_setConstraints:(id)arg1 ;
-(BOOL)paletteIsHidden;
-(id)_attachedPinningTopBar;
-(void)_setAttached:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(UIEdgeInsets)preferredContentInsets;
-(void)set_unpinnedController:(UIViewController *)arg1 ;
-(void)_resetConstraintConstants:(double)arg1 ;
-(void)_updateBackgroundConstraintsIfNecessary;
-(BOOL)_restartPaletteTransitionIfNecessary;
-(void)setPreferredContentInsets:(UIEdgeInsets)arg1 ;
-(BOOL)pinningBarShadowIsHidden;
-(void)_setSize:(CGSize)arg1 ;
-(void)setPinningBarShadowWasHidden:(BOOL)arg1 ;
-(void)_setPaletteOverridesPinningBar:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 isAnimating:(BOOL)arg2 ;
-(void)setPinningBarShadowIsHidden:(BOOL)arg1 ;
-(void)setPinned:(BOOL)arg1 ;
-(BOOL)_paletteOverridesPinningBar;
-(BOOL)_shouldUpdateBackground;
-(void)dealloc;
-(void)setPaletteShadowIsHidden:(BOOL)arg1 ;
-(UINavigationController *)navController;
-(void)_setTopConstraintConstant:(double)arg1 ;
-(CGSize)_size;
-(void)_setPinningBar:(id)arg1 ;
-(BOOL)_supportsSpecialSearchBarTransitions;
-(id)_pinningBar;
-(BOOL)isPinned;
-(void)_updateLayoutForCurrentConfiguration;
-(id)_initWithNavigationController:(id)arg1 forEdge:(unsigned long long)arg2 ;
-(void)_propagateBackgroundToContents;
-(BOOL)_attachmentIsChanging;
-(void)_setBackgroundConstraints:(id)arg1 ;
-(void)_setPalettePinningBarHidden:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)didMoveToSuperview;
-(void)_setRestartPaletteTransitionIfNecessary:(BOOL)arg1 ;
@end

