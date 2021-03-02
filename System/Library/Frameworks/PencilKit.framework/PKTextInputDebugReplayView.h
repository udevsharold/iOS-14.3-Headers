/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKTextInputDebugReplayViewDelegate;
@class NSArray, NSMutableArray;

@interface PKTextInputDebugReplayView : UIView {

	CGContextRef _bitmapContext;
	double _drawScale;
	BOOL _hasReplayedLoggedEntries;
	id<PKTextInputDebugReplayViewDelegate> _delegate;
	long long _replayState;
	NSArray* _currentLogEntries;
	NSMutableArray* _playbackStrokes;
	unsigned long long _playbackLogIndex;
	CGRect _playbackBounds;

}

@property (assign,nonatomic) long long replayState;                                               //@synthesize replayState=_replayState - In the implementation block
@property (nonatomic,retain) NSMutableArray * playbackStrokes;                                    //@synthesize playbackStrokes=_playbackStrokes - In the implementation block
@property (assign,nonatomic) CGRect playbackBounds;                                               //@synthesize playbackBounds=_playbackBounds - In the implementation block
@property (nonatomic,readonly) CGRect _bitmapBounds; 
@property (assign,nonatomic) unsigned long long playbackLogIndex;                                 //@synthesize playbackLogIndex=_playbackLogIndex - In the implementation block
@property (assign,nonatomic,__weak) id<PKTextInputDebugReplayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * currentLogEntries;                                         //@synthesize currentLogEntries=_currentLogEntries - In the implementation block
@property (nonatomic,readonly) BOOL hasReplayedLoggedEntries;                                     //@synthesize hasReplayedLoggedEntries=_hasReplayedLoggedEntries - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<PKTextInputDebugReplayViewDelegate>)arg1 ;
-(void)_advanceReplay;
-(id<PKTextInputDebugReplayViewDelegate>)delegate;
-(NSArray *)currentLogEntries;
-(void)_teardownContextIfNecessary;
-(void)_restartReplayState;
-(double)_timestampDeltaBeforeNextLogAfterIndex:(unsigned long long)arg1 ;
-(CGRect)_bitmapBounds;
-(void)drawStroke:(id)arg1 ;
-(void)_scheduleTimerForReplay;
-(void)_createReplayContextIfNecessary;
-(void)setCurrentLogEntries:(NSArray *)arg1 ;
-(void)_togglePlayPauseReplayingLoggedEntries;
-(long long)replayState;
-(void)setReplayState:(long long)arg1 ;
-(BOOL)hasReplayedLoggedEntries;
-(NSMutableArray *)playbackStrokes;
-(void)setPlaybackStrokes:(NSMutableArray *)arg1 ;
-(CGRect)playbackBounds;
-(void)setPlaybackBounds:(CGRect)arg1 ;
-(unsigned long long)playbackLogIndex;
-(void)setPlaybackLogIndex:(unsigned long long)arg1 ;
@end
