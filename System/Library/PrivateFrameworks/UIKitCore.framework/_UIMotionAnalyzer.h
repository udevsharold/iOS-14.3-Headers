/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UIMotionAnalyzerSettings, _UIViewerRelativeDevicePose;

@interface _UIMotionAnalyzer : NSObject {

	_UIMotionAnalyzerSettings* _settings;
	_UIViewerRelativeDevicePose* _viewerRelativeDevicePose;

}

@property (nonatomic,readonly) _UIMotionAnalyzerSettings * settings;                                //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) _UIViewerRelativeDevicePose * viewerRelativeDevicePose;              //@synthesize viewerRelativeDevicePose=_viewerRelativeDevicePose - In the implementation block
-(id)init;
-(void)reset;
-(void)resetHysteresis;
-(id)initWithSettings:(id)arg1 ;
-(id)description;
-(BOOL)applyHysteresisWithReceivedEventTimestamp:(double)arg1 timeSinceLastNewMotionEvent:(double)arg2 slowUpdatesEnabled:(BOOL)arg3 returningShouldToggleSlowUpdates:(BOOL*)arg4 logger:(id)arg5 ;
-(void)updateHistory;
-(void)updateWithEvent:(id)arg1 ;
-(_UIViewerRelativeDevicePose *)viewerRelativeDevicePose;
-(_UIMotionAnalyzerSettings *)settings;
@end

