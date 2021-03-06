/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaFoundation.framework/MediaFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFPlaybackStackController.h>
#import <libobjc.A.dylib/MFQueueManagement.h>

@class NSNumber, NSArray, AVPlayerViewController, NSDictionary;

@interface MFPlaybackStackControllerImplementation : NSObject <MFPlaybackStackController, MFQueueManagement> {

	 delegate;
	 internalStack;

}

@property (assign,nonatomic) long long maximumPlayerQueueLength; 
@property (assign,__weak,nonatomic) id<MFPlaybackStackControllerDelegate> delegate; 
@property (readonly,nonatomic) long long currentState; 
@property (readonly,nonatomic) long long interruptedState; 
@property (readonly,nonatomic) long long currentItemTransition; 
@property (readonly,nonatomic) double currentTime; 
@property (readonly,nonatomic) float rate; 
@property (readonly,nonatomic) float effectiveRate; 
@property (readonly,nonatomic) float targetRate; 
@property (readonly,nonatomic) NSNumber * targetTime; 
@property (readonly,nonatomic) id<MFQueuePlayerItem> currentItem; 
@property (readonly,nonatomic) NSArray * nextItems; 
@property (readonly,nonatomic) id<MFQueuePlayerItem> currentQueueItem; 
@property (readonly,nonatomic) AVPlayerViewController * videoViewController; 
@property (readonly,nonatomic) NSDictionary * stateDictionary; 
+(id)errorDomain;
-(id<MFQueuePlayerItem>)currentItem;
-(float)rate;
-(id)init;
-(double)currentTime;
-(void)reset;
-(long long)currentState;
-(void)reloadItemsKeepingCurrentItem:(BOOL)arg1 ;
-(void)setDelegate:(id<MFPlaybackStackControllerDelegate>)arg1 ;
-(NSDictionary *)stateDictionary;
-(NSNumber *)targetTime;
-(NSArray *)nextItems;
-(id<MFPlaybackStackControllerDelegate>)delegate;
-(AVPlayerViewController *)videoViewController;
-(id<MFQueuePlayerItem>)currentQueueItem;
-(void)restoreQueue:(/*^block*/id)arg1 ;
-(void)setQueueWithInitialItem:(id)arg1 andPlay:(BOOL)arg2 identifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)setAudioSessionActive:(BOOL)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)skipWithDirection:(long long)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)jumpTo:(double)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)pauseWithFadeOut:(double)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)interruptedState;
-(void)playWithRate:(float)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)pauseWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)shouldSkipJumpToItemStart:(long long)arg1 ;
-(void)beginScanningWithDirection:(long long)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)endScanningWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setRate:(float)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithQueueController:(id)arg1 assetLoader:(id)arg2 errorController:(id)arg3 externalPlaybackController:(id)arg4 leaseController:(id)arg5 queue:(id)arg6 ;
-(void)setMaximumPlayerQueueLength:(long long)arg1 ;
-(float)targetRate;
-(void)updateAudioSessionWithConfiguration:(id)arg1 ;
-(long long)currentItemTransition;
-(float)effectiveRate;
-(void)clearPlaybackQueue;
-(long long)maximumPlayerQueueLength;
-(void)beginSeekingWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)seekTo:(double)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)endSeekingWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

