/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpeechRecognitionCommandAndControl/CACSimpleContentViewManager.h>

@class CACGestureLivePreviewViewController;

@interface CACGestureLivePreviewOverlayManager : CACSimpleContentViewManager {

	CACGestureLivePreviewViewController* _gestureViewController;

}

@property (nonatomic,retain) CACGestureLivePreviewViewController * gestureViewController;              //@synthesize gestureViewController=_gestureViewController - In the implementation block
-(BOOL)isOverlay;
-(void)setGestureViewController:(CACGestureLivePreviewViewController *)arg1 ;
-(CACGestureLivePreviewViewController *)gestureViewController;
-(void)addPointsToLiveRecordingGesturePreviewByFingerIdentifier:(id)arg1 forces:(id)arg2 atTime:(double)arg3 ;
-(void)removeTrackingForFingerIdentifier:(id)arg1 ;
-(void)showGestureLivePreviewViewer;
-(BOOL)isPhysiciallyInteractiveOverlay;
@end
