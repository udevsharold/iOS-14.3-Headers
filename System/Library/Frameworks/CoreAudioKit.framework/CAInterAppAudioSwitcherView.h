/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAudioKit/CoreAudioKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class CAIAANodeContainer, UIPageControl, CAIAANodeInfo, NSTimer, NSString;

@interface CAInterAppAudioSwitcherView : UIView <UIScrollViewDelegate> {

	OpaqueAudioComponentInstanceRef outputUnit;
	CAIAANodeContainer* nodeView;
	UIPageControl* pageControl;
	CAIAANodeInfo* info;
	NSTimer* refreshTimer;
	BOOL showingAppNames;
	BOOL isHostConnected;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isShowingAppNames) BOOL showingAppNames; 
-(void)initialize;
-(double)contentWidth;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeFromSuperview;
-(void)startTimer;
-(void)didMoveToSuperview;
-(void)audioUnitPropertyChangedListener:(void*)arg1 unit:(OpaqueAudioComponentInstanceRef)arg2 propID:(unsigned)arg3 scope:(unsigned)arg4 element:(unsigned)arg5 ;
-(void)appHasGoneInBackground;
-(void)appHasGoneForeground;
-(BOOL)isHostConnected;
-(void)setOutputAudioUnit:(OpaqueAudioComponentInstanceRef)arg1 ;
-(void)updateInfo;
-(void)nodePressed:(id)arg1 ;
-(void)changePage:(id)arg1 ;
-(void)updateNodeList;
-(BOOL)isShowingAppNames;
-(void)setShowingAppNames:(BOOL)arg1 ;
@end
