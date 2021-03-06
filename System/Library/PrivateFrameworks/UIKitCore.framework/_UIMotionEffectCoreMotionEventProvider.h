/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIMotionEffectEventProvider.h>

@class CMMotionManager, NSOperationQueue;

@interface _UIMotionEffectCoreMotionEventProvider : _UIMotionEffectEventProvider {

	CMMotionManager* _motionManager;
	NSOperationQueue* _motionEventQueue;

}
-(double)fastUpdateIntervalForLogs;
-(id)currentEvent;
-(id)init;
-(void)stopGeneratingEvents;
-(void)dealloc;
-(void)setSlowUpdatesEnabled:(BOOL)arg1 ;
-(void)startGeneratingEvents;
-(BOOL)shouldLogEvents;
-(double)slowUpdateIntervalForLogs;
@end

