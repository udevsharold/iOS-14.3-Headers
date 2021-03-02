/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol OS_dispatch_source, PKAccessoryDeviceViewDelegate;
@class PKGlyphView, UIView, UILabel, PKAccessoryDevice, PKPass, UIColor, NSObject;

@interface PKAccessoryDeviceView : UIView {

	PKGlyphView* _glyph;
	UIView* _imageBackgroundView;
	UILabel* _label;
	PKAccessoryDevice* _accessory;
	PKPass* _pass;
	UIView* _parentView;
	UIColor* _strokeColor;
	UIColor* _backgroundColor;
	double _animationDelay;
	long long _state;
	NSObject*<OS_dispatch_source> _timeOutBlockTimer;
	id<PKAccessoryDeviceViewDelegate> _delegate;
	CGRect _cutoutFrame;

}

@property (assign,nonatomic) CGRect cutoutFrame;                                             //@synthesize cutoutFrame=_cutoutFrame - In the implementation block
@property (assign,nonatomic,__weak) id<PKAccessoryDeviceViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)layoutSubviews;
-(void)changeToState:(long long)arg1 ;
-(void)_setColors;
-(void)presentOnParentView;
-(void)_layoutProcessingState;
-(void)_layoutSuccessState;
-(void)_layoutSuccessWithUserInterventionState;
-(void)_layoutFailureState;
-(void)_layoutTryAgainState;
-(void)_showWalletWithMessage:(id)arg1 ;
-(CGRect)_springBoardCutoutRect;
-(void)dismissViewWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithPass:(id)arg1 accessory:(id)arg2 cutoutFrame:(CGRect)arg3 parentView:(id)arg4 ;
-(id)initWithState:(long long)arg1 accessory:(id)arg2 cutoutFrame:(CGRect)arg3 parentView:(id)arg4 ;
-(void)setCutoutFrame:(CGRect)arg1 ;
-(void)dismissViewImmediatelyWithCompletion:(/*^block*/id)arg1 ;
-(CGRect)cutoutFrame;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<PKAccessoryDeviceViewDelegate>)arg1 ;
-(id<PKAccessoryDeviceViewDelegate>)delegate;
@end
