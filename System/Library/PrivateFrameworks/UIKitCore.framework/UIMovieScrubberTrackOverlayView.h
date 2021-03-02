/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface UIMovieScrubberTrackOverlayView : UIView {

	double _value;
	double _minimumValue;
	double _maximumValue;
	double _startValue;
	double _endValue;
	UIImageView* _leftFillView;
	UIImageView* _rightFillView;
	unsigned _editingHandle;
	unsigned _editing : 1;
	unsigned _zoomed : 1;

}
-(void)setEditing:(BOOL)arg1 ;
-(void)setStartValue:(double)arg1 ;
-(void)setValue:(double)arg1 ;
-(void)setMaximumValue:(double)arg1 ;
-(void)layoutSubviews;
-(void)animateFillFramesAway;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMinimumValue:(double)arg1 ;
-(void)setIsZoomed:(BOOL)arg1 ;
-(void)setEditingHandle:(int)arg1 ;
-(void)_clampValueAndLayout;
-(void)_updateRightFill;
-(void)setEndValue:(double)arg1 ;
-(void)_updateLeftFill;
@end
