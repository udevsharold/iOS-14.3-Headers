/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBZoomView.h>

@interface SBFullscreenZoomView : SBZoomView {

	BOOL _hasImage;
	id _surface;

}

@property (nonatomic,__weak,readonly) id surface; 
-(id)_initWithView:(id)arg1 displayConfiguration:(id)arg2 ;
-(id)surface;
-(void)_addBlackBackground;
-(id)initWithView:(id)arg1 containingSceneSnapshot:(id)arg2 forDisplayConfiguration:(id)arg3 ;
-(id)initWithContainingBounds:(CGRect)arg1 contentFrame:(CGRect)arg2 statusBarFrame:(CGRect)arg3 snapshot:(id)arg4 snapshotOrientation:(long long)arg5 interfaceOrientation:(long long)arg6 doubleHeightStatusBar:(BOOL)arg7 preventSplit:(BOOL)arg8 needsZoomFilter:(BOOL)arg9 asyncDecodeImage:(BOOL)arg10 forJail:(BOOL)arg11 ;
-(id)_initWithFrame:(CGRect)arg1 ;
@end
