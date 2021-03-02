/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSwitcherLiveContentOverlay;
@interface _SBFullScreenSwitcherLiveContentOverlayContext : NSObject {

	long long _overlayType;
	id<SBSwitcherLiveContentOverlay> _overlay;

}

@property (nonatomic,readonly) long long overlayType;                                 //@synthesize overlayType=_overlayType - In the implementation block
@property (nonatomic,readonly) id<SBSwitcherLiveContentOverlay> overlay;              //@synthesize overlay=_overlay - In the implementation block
-(id)initWithOverlay:(id)arg1 overlayType:(long long)arg2 ;
-(long long)overlayType;
-(id<SBSwitcherLiveContentOverlay>)overlay;
@end
