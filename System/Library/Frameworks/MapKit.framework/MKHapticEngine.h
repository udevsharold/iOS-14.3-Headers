/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UINotificationFeedbackGenerator, UIImpactFeedbackGenerator, _UIDragSnappingFeedbackGenerator;

@interface MKHapticEngine : NSObject {

	UINotificationFeedbackGenerator* _notificationGenerator;
	UIImpactFeedbackGenerator* _feedbackGenerator;
	_UIDragSnappingFeedbackGenerator* _dragSnappingGenerator;
	BOOL _isDragging;

}
-(void)draggedObjectLifted;
-(id)init;
-(void)draggedObjectLanded;
-(void)prepare;
-(void)playSuccess;
-(void)playFailure;
@end

