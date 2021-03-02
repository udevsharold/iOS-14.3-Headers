/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarSignalView.h>

@class _UIStatusBarCycleAnimation;

@interface _UIStatusBarCellularSignalView : _UIStatusBarSignalView {

	BOOL _needsLargerScale;
	BOOL _needsCycleAnimationUpdate;
	_UIStatusBarCycleAnimation* _cycleAnimation;

}

@property (assign,nonatomic) BOOL needsLargerScale;                                    //@synthesize needsLargerScale=_needsLargerScale - In the implementation block
@property (assign,nonatomic) BOOL needsCycleAnimationUpdate;                           //@synthesize needsCycleAnimationUpdate=_needsCycleAnimationUpdate - In the implementation block
@property (nonatomic,retain) _UIStatusBarCycleAnimation * cycleAnimation;              //@synthesize cycleAnimation=_cycleAnimation - In the implementation block
+(CGSize)_intrinsicContentSizeForNumberOfBars:(long long)arg1 iconSize:(long long)arg2 ;
+(double)_interspaceForIconSize:(long long)arg1 ;
+(double)_barWidthForIconSize:(long long)arg1 ;
+(double)_barCornerRadiusForIconSize:(long long)arg1 ;
+(double)_heightForNormalBarAtIndex:(long long)arg1 iconSize:(long long)arg2 ;
-(void)_updateFromMode:(long long)arg1 ;
-(void)applyStyleAttributes:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(_UIStatusBarCycleAnimation *)cycleAnimation;
-(void)_setNeedsUpdateCycleAnimation;
-(void)_iconSizeDidChange;
-(BOOL)needsCycleAnimationUpdate;
-(void)_updateActiveBars;
-(void)setCycleAnimation:(_UIStatusBarCycleAnimation *)arg1 ;
-(BOOL)needsLargerScale;
-(void)layoutSubviews;
-(void)setNeedsLargerScale:(BOOL)arg1 ;
-(double)_heightForBarAtIndex:(long long)arg1 mode:(long long)arg2 ;
-(void)didMoveToWindow;
-(void)_updateBars;
-(void)_updateCycleAnimationNow;
-(double)_heightForBarAtIndex:(long long)arg1 ;
-(void)setNeedsCycleAnimationUpdate:(BOOL)arg1 ;
-(id)accessibilityHUDRepresentation;
-(void)_colorsDidChange;
-(void)_updateCycleAnimationIfNeeded;
@end
