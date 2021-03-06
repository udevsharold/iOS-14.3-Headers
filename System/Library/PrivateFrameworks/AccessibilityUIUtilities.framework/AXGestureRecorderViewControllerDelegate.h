/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXGestureRecorderViewControllerDelegate <NSObject>
@required
-(double)maximumDurationOfRecordedGestureForGestureRecorderViewController:(id)arg1;
-(void)gestureRecorderViewController:(id)arg1 didStartRecordingAtomicFingerPathAtPoint:(CGPoint)arg2;
-(void)gestureRecorderViewControllerDidStopRecordingAtomicFingerPath:(id)arg1;
-(BOOL)isChromeVisibleForGestureRecorderViewController:(id)arg1;
-(void)gestureRecorderViewControllerDidFinishReplayingRecordedGesture:(id)arg1;
-(void)gestureRecorderViewController:(id)arg1 setChromeVisible:(BOOL)arg2;

@end

