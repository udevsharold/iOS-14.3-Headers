/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol OS_dispatch_queue, AVRoutePickerViewDelegate;
@class NSObject, UIColor, UIButton, UIViewPropertyAnimator, AVObservationController, AVOutputContext, AVMicaPackage, MPMediaControls, NSString;

@interface AVRoutePickerView : UIView {

	NSObject*<OS_dispatch_queue> _getAirPlayStatusQueue;
	UIColor* _activeTintColor;
	UIButton* _routePickerButton;
	UIButton* _customButton;
	CGSize _oldSize;
	UIViewPropertyAnimator* _buttonHighlightAnimator;
	AVObservationController* _observationController;
	AVOutputContext* _outputContext;
	BOOL _airPlayActive;
	BOOL _prioritizesVideoDevices;
	AVMicaPackage* _routePickerButtonMicaPackage;
	MPMediaControls* _routePickingControls;
	id<AVRoutePickerViewDelegate> _delegate;
	long long _routePickerButtonStyle;
	NSString* _overrideRoutingContextUID;

}

@property (nonatomic,copy) NSString * overrideRoutingContextUID;                         //@synthesize overrideRoutingContextUID=_overrideRoutingContextUID - In the implementation block
@property (assign,nonatomic,__weak) id<AVRoutePickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * activeTintColor; 
@property (assign,nonatomic) long long routePickerButtonStyle;                           //@synthesize routePickerButtonStyle=_routePickerButtonStyle - In the implementation block
@property (assign,nonatomic) BOOL prioritizesVideoDevices; 
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(NSString *)overrideRoutingContextUID;
-(void)setOverrideRoutingContextUID:(NSString *)arg1 ;
-(void)dealloc;
-(void)_registerNotifications;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(UIColor *)activeTintColor;
-(void)setActiveTintColor:(UIColor *)arg1 ;
-(void)setCustomButton:(id)arg1 ;
-(BOOL)prioritizesVideoDevices;
-(void)_createOrUpdateRoutePickerButton;
-(void)_routePickerButtonTapped:(id)arg1 ;
-(void)_routePickerButtonTouchDown:(id)arg1 ;
-(void)_routePickerButtonTouchDragEnter:(id)arg1 ;
-(void)_routePickerButtonTouchUp:(id)arg1 ;
-(void)_setRoutePickerButtonAlpha:(double)arg1 animated:(BOOL)arg2 ;
-(void)_updateAirPlayActive;
-(void)_setupOutputContext;
-(BOOL)_isAirPlayActive;
-(id)_defaultActiveTintColor;
-(CGRect)_normalizedRectInWindow;
-(long long)routePickerButtonStyle;
-(void)setRoutePickerButtonStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)setDelegate:(id<AVRoutePickerViewDelegate>)arg1 ;
-(void)setAirPlayActive:(BOOL)arg1 ;
-(id)customButton;
-(void)setPrioritizesVideoDevices:(BOOL)arg1 ;
-(void)updateButtonAppearance;
-(BOOL)isAirPlayActive;
-(id<AVRoutePickerViewDelegate>)delegate;
@end

