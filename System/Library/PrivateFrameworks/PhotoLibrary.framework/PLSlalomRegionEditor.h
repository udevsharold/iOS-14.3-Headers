/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIControl.h>

@protocol PLSlalomRegionEditorDelegate;
@class UIImageView;

@interface PLSlalomRegionEditor : UIControl {

	UIImageView* _startHandleView;
	UIImageView* _endHandleView;
	UIImageView* _trackImageView;
	UIImageView* _trackSnapshotView;
	BOOL _draggingStart;
	BOOL _draggingEnd;
	double _touchOffset;
	BOOL _zoomed;
	BOOL _trackingZoom;
	CGPoint _touchLocationWhenTrackingZoomBegan;
	BOOL _forceLayout;
	double _zoomMinValue;
	double _zoomMaxValue;
	BOOL _zoomAnimating;
	id<PLSlalomRegionEditorDelegate> _delegate;
	double _trimHandleWidth;
	unsigned long long _regionEditorStyle;
	double _minValue;
	double _maxValue;
	double _startValue;
	double _endValue;
	double _zoomDelay;
	UIEdgeInsets _trackInsets;

}

@property (assign,nonatomic) id<PLSlalomRegionEditorDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets trackInsets;                                                        //@synthesize trackInsets=_trackInsets - In the implementation block
@property (assign,nonatomic) double trimHandleWidth;                                                          //@synthesize trimHandleWidth=_trimHandleWidth - In the implementation block
@property (assign,nonatomic) unsigned long long regionEditorStyle;                                            //@synthesize regionEditorStyle=_regionEditorStyle - In the implementation block
@property (assign,nonatomic) double minValue;                                                                 //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) double maxValue;                                                                 //@synthesize maxValue=_maxValue - In the implementation block
@property (assign,nonatomic) double startValue;                                                               //@synthesize startValue=_startValue - In the implementation block
@property (assign,nonatomic) double endValue;                                                                 //@synthesize endValue=_endValue - In the implementation block
@property (assign,nonatomic) double zoomDelay;                                                                //@synthesize zoomDelay=_zoomDelay - In the implementation block
@property (assign,setter=setZoomAnimating:,getter=isZoomAnimating,nonatomic) BOOL zoomAnimating;              //@synthesize zoomAnimating=_zoomAnimating - In the implementation block
@property (nonatomic,readonly) CGRect startHandleFrame; 
@property (nonatomic,readonly) CGRect endHandleFrame; 
-(double)zoomDelay;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setStartValue:(double)arg1 ;
-(double)minValue;
-(double)endValue;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)isZoomAnimating;
-(void)setMaxValue:(double)arg1 ;
-(CGRect)_trackFrame;
-(double)maxValue;
-(void)layoutSubviews;
-(double)startValue;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<PLSlalomRegionEditorDelegate>)arg1 ;
-(double)_trackScale;
-(void)_cancelZoom;
-(void)setZoomDelay:(double)arg1 ;
-(id)_trackColor;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setEndValue:(double)arg1 ;
-(UIEdgeInsets)trackInsets;
-(void)setEnabled:(BOOL)arg1 ;
-(double)_zoomMinValue;
-(double)_zoomMaxValue;
-(double)_trimHandleWidth;
-(void)setTrackInsets:(UIEdgeInsets)arg1 ;
-(void)setStartValue:(double)arg1 notify:(BOOL)arg2 ;
-(void)setEndValue:(double)arg1 notify:(BOOL)arg2 ;
-(void)setZoomAnimating:(BOOL)arg1 ;
-(double)_valueFromStartHandleFrame:(CGRect)arg1 ;
-(double)_valueFromEndHandleFrame:(CGRect)arg1 ;
-(CGRect)_trackFrameNoZoom;
-(CGRect)_handleFrameForValue:(double)arg1 isStart:(BOOL)arg2 ;
-(double)_valueFromHandleFrame:(CGRect)arg1 isStart:(BOOL)arg2 ;
-(void)_cancelTrackingZoom;
-(id)_tickColor;
-(void)_zoomPressWasHeld;
-(void)_updateTrack;
-(id)_trackImageForZoom:(BOOL)arg1 ;
-(id)_handleTintColor;
-(void)_drawCurveWithFlatEndsFromX:(double)arg1 fromY:(double)arg2 toX:(double)arg3 toY:(double)arg4 ;
-(double)trimHandleWidth;
-(unsigned long long)regionEditorStyle;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)_isZoomed;
-(id<PLSlalomRegionEditorDelegate>)delegate;
-(CGRect)endHandleFrame;
-(CGRect)startHandleFrame;
-(void)setZoomMinValue:(double)arg1 maxValue:(double)arg2 ;
-(void)setMinValue:(double)arg1 ;
-(void)setTrimHandleWidth:(double)arg1 ;
-(void)setRegionEditorStyle:(unsigned long long)arg1 ;
-(BOOL)_isTouch:(id)arg1 inHandleIsStart:(BOOL)arg2 outTouchOffset:(double*)arg3 ;
-(void)_stopTrackingAndSendControlEvents:(unsigned long long)arg1 ;
-(void)_updateSlidersWithTouch:(id)arg1 ;
-(void)_beginTrackingZoomWithTouch:(id)arg1 ;
-(void)_cancelZoomTrackingIfNeccessaryWithTouch:(id)arg1 ;
-(id)_handleImage;
@end
