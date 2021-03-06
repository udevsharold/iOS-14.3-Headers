/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKUIMediaPlayerItemStatus, MPAVController, MPAVItem;

@interface SKUIMediaPlayer : NSObject {

	BOOL _playing;
	float _rate;
	SKUIMediaPlayerItemStatus* _playerItem;
	MPAVController* _player;
	MPAVItem* _currentItem;
	id _periodicTimeObserver;

}

@property (nonatomic,retain) SKUIMediaPlayerItemStatus * playerItem;              //@synthesize playerItem=_playerItem - In the implementation block
@property (assign,nonatomic,__weak) MPAVController * player;                      //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) MPAVItem * currentItem;                       //@synthesize currentItem=_currentItem - In the implementation block
@property (assign,nonatomic) float rate;                                          //@synthesize rate=_rate - In the implementation block
@property (nonatomic,retain) id periodicTimeObserver;                             //@synthesize periodicTimeObserver=_periodicTimeObserver - In the implementation block
@property (assign,nonatomic) BOOL playing;                                        //@synthesize playing=_playing - In the implementation block
-(BOOL)playing;
-(MPAVItem *)currentItem;
-(float)rate;
-(void)setPlayer:(MPAVController *)arg1 ;
-(SKUIMediaPlayerItemStatus *)playerItem;
-(void)setPlaying:(BOOL)arg1 ;
-(void)setRate:(float)arg1 ;
-(id)periodicTimeObserver;
-(void)setPeriodicTimeObserver:(id)arg1 ;
-(MPAVController *)player;
-(void)setCurrentItem:(MPAVItem *)arg1 ;
-(void)setPlayerItem:(SKUIMediaPlayerItemStatus *)arg1 ;
@end

