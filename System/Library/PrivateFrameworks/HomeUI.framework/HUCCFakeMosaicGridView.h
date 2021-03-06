/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HUProvidesMosaicFrames;
@class HUMosaicLayoutGeometry, NSMutableArray;

@interface HUCCFakeMosaicGridView : UIView {

	id<HUProvidesMosaicFrames> _frameDelegate;
	HUMosaicLayoutGeometry* _mosaicLayoutGeometry;
	NSMutableArray* _fakeCellLayers;
	CGRect _contentBounds;

}

@property (nonatomic,retain) NSMutableArray * fakeCellLayers;                              //@synthesize fakeCellLayers=_fakeCellLayers - In the implementation block
@property (assign,nonatomic) CGRect contentBounds;                                         //@synthesize contentBounds=_contentBounds - In the implementation block
@property (assign,nonatomic,__weak) id<HUProvidesMosaicFrames> frameDelegate;              //@synthesize frameDelegate=_frameDelegate - In the implementation block
@property (nonatomic,retain) HUMosaicLayoutGeometry * mosaicLayoutGeometry;                //@synthesize mosaicLayoutGeometry=_mosaicLayoutGeometry - In the implementation block
-(CGRect)contentBounds;
-(void)setContentBounds:(CGRect)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)setFrameDelegate:(id<HUProvidesMosaicFrames>)arg1 ;
-(id<HUProvidesMosaicFrames>)frameDelegate;
-(id)initWithFrame:(CGRect)arg1 ;
-(HUMosaicLayoutGeometry *)mosaicLayoutGeometry;
-(NSMutableArray *)fakeCellLayers;
-(void)setMosaicLayoutGeometry:(HUMosaicLayoutGeometry *)arg1 ;
-(void)setFakeCellLayers:(NSMutableArray *)arg1 ;
@end

