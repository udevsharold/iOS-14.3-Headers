/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, MPAVController;

@interface MPVideoPlaybackBackgroundView : UIView {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIEdgeInsets _edgeInsets;
	MPAVController* _player;

}

@property (nonatomic,retain) MPAVController * player;              //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setPlayer:(MPAVController *)arg1 ;
-(void)dealloc;
-(MPAVController *)player;
-(void)_updateDisplay;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_isExternalPlaybackActiveDidChange:(id)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)_activeAudioRouteDidChange:(id)arg1 ;
-(void)_videoViewDidMoveToWindow:(id)arg1 ;
-(id)_imageNamed:(id)arg1 ;
@end
