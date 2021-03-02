/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUI/IMFullScreenEffectPlayerDelegate.h>

@protocol IMFullScreenEffectManagerDelegate;
@class IMFullScreenEffectPlayer, NSMutableArray, IMScheduledUpdater, IMFullScreenEffect, NSString;

@interface IMFullScreenEffectManager : NSObject <IMFullScreenEffectPlayerDelegate> {

	id<IMFullScreenEffectManagerDelegate> _delegate;
	IMFullScreenEffectPlayer* _currentEffectPlayer;
	NSMutableArray* _effectQueue;
	IMScheduledUpdater* _triggerUpdater;

}

@property (nonatomic,retain) IMFullScreenEffectPlayer * currentEffectPlayer;                     //@synthesize currentEffectPlayer=_currentEffectPlayer - In the implementation block
@property (nonatomic,retain) NSMutableArray * effectQueue;                                       //@synthesize effectQueue=_effectQueue - In the implementation block
@property (nonatomic,retain) IMScheduledUpdater * triggerUpdater;                                //@synthesize triggerUpdater=_triggerUpdater - In the implementation block
@property (assign,nonatomic,__weak) id<IMFullScreenEffectManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IMFullScreenEffect * currentEffect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(IMFullScreenEffect *)currentEffect;
-(void)beginHoldingUpdatesForKey:(id)arg1 ;
-(void)endHoldingUpdatesForKey:(id)arg1 ;
-(void)setDelegate:(id<IMFullScreenEffectManagerDelegate>)arg1 ;
-(NSMutableArray *)effectQueue;
-(void)setEffectQueue:(NSMutableArray *)arg1 ;
-(void)triggerNextEffect;
-(IMScheduledUpdater *)triggerUpdater;
-(void)setTriggerUpdater:(IMScheduledUpdater *)arg1 ;
-(id<IMFullScreenEffectManagerDelegate>)delegate;
-(BOOL)isFullScreenEffectQueued:(id)arg1 ;
-(void)willStartFullScreenEffect:(id)arg1 ;
-(IMFullScreenEffectPlayer *)currentEffectPlayer;
-(void)setCurrentEffectPlayer:(IMFullScreenEffectPlayer *)arg1 ;
-(void)_stopCurrentFullscreenEffect:(BOOL)arg1 ;
-(void)stopCurrentFullscreenEffectPlayer;
-(void)queueFullScreenEffectPlayer:(id)arg1 withRepeating:(BOOL)arg2 ;
-(void)fullScreenEffectPlayerDidPrepare:(id)arg1 ;
-(void)fullScreenEffectPlayerDidStart:(id)arg1 ;
-(void)fullScreenEffectPlayerDidFinish:(id)arg1 ;
-(void)stopAllFullscreenEffectPlayers;
-(double)adjustedEffectDurationForTesting:(id)arg1 ;
@end
