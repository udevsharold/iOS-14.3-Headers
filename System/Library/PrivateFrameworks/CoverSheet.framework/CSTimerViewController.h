/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@protocol CSTimerViewControllerDelegate;
@class NSTimer, NSDate, MTTimerManager;

@interface CSTimerViewController : CSCoverSheetViewControllerBase {

	BOOL _enabled;
	NSTimer* _updateTimer;
	NSDate* _endDate;
	MTTimerManager* _timerManager;
	id<CSTimerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSTimerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                  //@synthesize enabled=_enabled - In the implementation block
-(void)_updateTimerFired;
-(BOOL)isEnabled;
-(void)dealloc;
-(BOOL)isTimerActive;
-(void)_updateTimerLabelView;
-(void)_updateNextTimer;
-(void)_startTimer;
-(void)_nextTimerChanged:(id)arg1 ;
-(BOOL)isEndDateValid;
-(id)timerView;
-(void)setDelegate:(id<CSTimerViewControllerDelegate>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_stopTimer;
-(void)setEndDate:(id)arg1 ;
-(void)_stopTimerNotifyingDelegate:(BOOL)arg1 ;
-(id<CSTimerViewControllerDelegate>)delegate;
@end

