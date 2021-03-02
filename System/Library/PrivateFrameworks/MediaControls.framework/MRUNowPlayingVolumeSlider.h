/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaControls/MediaControls-Structs.h>
#import <MediaControls/MRUVolumeSlider.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MRUNowPlayingVolumeSliderDelegate;
@class UIImpactFeedbackGenerator, UINotificationFeedbackGenerator, UILongPressGestureRecognizer, UIView, NSString;

@interface MRUNowPlayingVolumeSlider : MRUVolumeSlider <UIGestureRecognizerDelegate> {

	BOOL _syncingEnabled;
	id<MRUNowPlayingVolumeSliderDelegate> _delegate;
	long long _syncState;
	UIImpactFeedbackGenerator* _positiveFeedbackGenerator;
	UINotificationFeedbackGenerator* _negativeFeedbackGenerator;
	UILongPressGestureRecognizer* _longPressRecognizer;
	UIView* _growingThumbView;
	double _forcePercent;
	double _initialX;

}

@property (assign,nonatomic) long long syncState;                                                      //@synthesize syncState=_syncState - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * positiveFeedbackGenerator;                    //@synthesize positiveFeedbackGenerator=_positiveFeedbackGenerator - In the implementation block
@property (nonatomic,retain) UINotificationFeedbackGenerator * negativeFeedbackGenerator;              //@synthesize negativeFeedbackGenerator=_negativeFeedbackGenerator - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressRecognizer;                       //@synthesize longPressRecognizer=_longPressRecognizer - In the implementation block
@property (nonatomic,retain) UIView * growingThumbView;                                                //@synthesize growingThumbView=_growingThumbView - In the implementation block
@property (assign,nonatomic) double forcePercent;                                                      //@synthesize forcePercent=_forcePercent - In the implementation block
@property (assign,nonatomic) double initialX;                                                          //@synthesize initialX=_initialX - In the implementation block
@property (assign,getter=isSyncingEnabled,nonatomic) BOOL syncingEnabled;                              //@synthesize syncingEnabled=_syncingEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<MRUNowPlayingVolumeSliderDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isSyncingEnabled;
-(void)setSyncState:(long long)arg1 ;
-(long long)syncState;
-(void)setNegativeFeedbackGenerator:(UINotificationFeedbackGenerator *)arg1 ;
-(void)handleLongPress:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)shrinkThumbAfterDelay:(double)arg1 ;
-(void)layoutSubviews;
-(UINotificationFeedbackGenerator *)negativeFeedbackGenerator;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(double)forcePercent;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)createThumbView;
-(void)setDelegate:(id<MRUNowPlayingVolumeSliderDelegate>)arg1 ;
-(UILongPressGestureRecognizer *)longPressRecognizer;
-(void)setSyncingEnabled:(BOOL)arg1 ;
-(void)setLongPressRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setPositiveFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(id<MRUNowPlayingVolumeSliderDelegate>)delegate;
-(UIImpactFeedbackGenerator *)positiveFeedbackGenerator;
-(void)setForcePercent:(double)arg1 ;
-(UIView *)growingThumbView;
-(void)setGrowingThumbView:(UIView *)arg1 ;
-(double)initialX;
-(void)setInitialX:(double)arg1 ;
@end
