/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardSplitTransitionView.h>

@class CALayer, UIKBCacheToken, NSMutableDictionary;

@interface UIKeyboardFlipTransitionView : UIKeyboardSplitTransitionView {

	CALayer* _container;
	CALayer* _frontFace;
	CALayer* _backFace;
	CALayer* _frontDarkening;
	CALayer* _backDarkening;
	CALayer* _backDarkeningLeft;
	CALayer* _backDarkeningRight;
	BOOL _showingFrontFace;
	UIKBCacheToken* _startKeyplaneToken;
	UIKBCacheToken* _endKeyplaneToken;
	NSMutableDictionary* _controlKeys;
	SCD_Struct_UI62 _rebuildFlags;

}

@property (assign,getter=isShowingFrontFace,nonatomic) BOOL showingFrontFace;              //@synthesize showingFrontFace=_showingFrontFace - In the implementation block
-(void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 startToken:(id)arg3 endToken:(id)arg4 keyboardType:(long long)arg5 orientation:(long long)arg6 ;
-(void)dealloc;
-(void)rebuildTransitionForSplitStyleChange:(id)arg1 ;
-(BOOL)transitionIsVisible;
-(CGImageRef)defaultKeyboardImage;
-(CGImageRef)splitKeyboardImage;
-(void)rebuildTransition;
-(void)rebuildShiftSlices;
-(void)rebuildMoreIntlKeys;
-(void)_flipToFront:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)rebuildControlSlicesForKeyName:(id)arg1 ;
-(void)updateMoreIntlKey:(id)arg1 asStart:(BOOL)arg2 withRect:(CGRect)arg3 showIntl:(BOOL)arg4 showDictKey:(BOOL)arg5 ;
-(void)rebuildReturnSlices;
-(void)updateTransition;
-(void)setShowingFrontFace:(BOOL)arg1 ;
-(void)rebuildBackgroundTransition;
-(void)_delayedUpdateTransition;
-(BOOL)isShowingFrontFace;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)rebuildControlKeys:(unsigned long long)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
@end
