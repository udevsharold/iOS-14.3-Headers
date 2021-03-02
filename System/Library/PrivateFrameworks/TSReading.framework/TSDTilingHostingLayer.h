/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSDNoDefaultImplicitActionLayer.h>

@class NSMutableSet, TSDInteractiveCanvasController;

@interface TSDTilingHostingLayer : TSDNoDefaultImplicitActionLayer {

	NSMutableSet* mDirtyTilingLayers;
	TSDInteractiveCanvasController* mController;

}

@property (assign,nonatomic) TSDInteractiveCanvasController * controller; 
-(TSDInteractiveCanvasController *)controller;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setController:(TSDInteractiveCanvasController *)arg1 ;
-(void)p_commonInit;
-(void)setNeedsDisplayForDirtyTiles:(id)arg1 ;
@end
