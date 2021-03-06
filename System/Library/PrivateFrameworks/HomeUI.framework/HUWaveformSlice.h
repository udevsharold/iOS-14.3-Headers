/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HomeUI/HomeUI-Structs.h>
@class CALayer;

@interface HUWaveformSlice : NSObject {

	BOOL _hidden;
	double _opacity;
	CALayer* _waveformlayer;
	CGRect _layerFrame;

}

@property (assign,getter=isHidden,nonatomic) BOOL hidden;              //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) double opacity;                           //@synthesize opacity=_opacity - In the implementation block
@property (nonatomic,retain) CALayer * waveformlayer;                  //@synthesize waveformlayer=_waveformlayer - In the implementation block
@property (assign,nonatomic) CGRect layerFrame;                        //@synthesize layerFrame=_layerFrame - In the implementation block
-(double)opacity;
-(void)dealloc;
-(BOOL)isHidden;
-(void)setOpacity:(double)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(CALayer *)waveformlayer;
-(void)setWaveformlayer:(CALayer *)arg1 ;
-(CGRect)layerFrame;
-(void)setLayerFrame:(CGRect)arg1 ;
@end

