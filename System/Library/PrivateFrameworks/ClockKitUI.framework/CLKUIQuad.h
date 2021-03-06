/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ClockKitUI/ClockKitUI-Structs.h>
@class CLKUIQuadView;

@interface CLKUIQuad : NSObject {

	BOOL _opaque;
	CLKUIQuadView* _quadView;

}

@property (assign,getter=isOpaque,nonatomic) BOOL opaque;                  //@synthesize opaque=_opaque - In the implementation block
@property (assign,nonatomic,__weak) CLKUIQuadView * quadView;              //@synthesize quadView=_quadView - In the implementation block
-(void)purge;
-(id)init;
-(BOOL)isOpaque;
-(void)setOpaque:(BOOL)arg1 ;
-(CLKUIQuadView *)quadView;
-(void)setupForQuadView:(id)arg1 ;
-(void)performOffscreenPassesWithCommandBuffer:(id)arg1 ;
-(void)renderForDisplayWithEncoder:(id)arg1 ;
-(BOOL)prepareForTime:(double)arg1 ;
-(void)setQuadView:(CLKUIQuadView *)arg1 ;
-(void)unlinkQuadView;
-(void)encodeGLforSize:(CLKUIQuadSize)arg1 ;
@end

