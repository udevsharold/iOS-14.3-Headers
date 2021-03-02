/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <MediaControls/MediaControlsVolumeSliderView.h>

@interface SBElasticSliderView : MediaControlsVolumeSliderView {

	double _additiveGlyphScaleFactor;

}

@property (assign,nonatomic) double additiveGlyphScaleFactor;              //@synthesize additiveGlyphScaleFactor=_additiveGlyphScaleFactor - In the implementation block
-(id)createBackgroundView;
-(double)additiveGlyphScaleFactor;
-(void)setAxis:(unsigned long long)arg1 ;
-(void)stopGlyphAnimations;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGPoint)glyphCenter;
-(void)_updateGlyphScaleForAdditiveScaleOrAxisUpdate;
-(void)setAdditiveGlyphScaleFactor:(double)arg1 ;
@end
