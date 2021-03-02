/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIEvent.h>

@class NSMutableSet, NSSet, NSMapTable;

@interface UITouchesEvent : UIEvent {

	NSMutableSet* _allTouchesMutable;
	NSSet* _allTouchesImmutableCached;
	CFDictionaryRef _keyedTouches;
	CFDictionaryRef _keyedTouchesByWindow;
	CFDictionaryRef _gestureRecognizersByWindow;
	NSMapTable* _latentSystemGestureWindows;
	CFDictionaryRef _coalescedTouches;
	CFDictionaryRef _finalTouches;
	BOOL _isCallingEventObservers;
	NSMutableSet* _exclusiveTouchWindows;
	long long _singleAllowableExternalTouchPathIndex;

}

@property (nonatomic,readonly) double _initialTouchTimestamp; 
@property (assign,nonatomic) long long singleAllowableExternalTouchPathIndex;                             //@synthesize singleAllowableExternalTouchPathIndex=_singleAllowableExternalTouchPathIndex - In the implementation block
@property (getter=_containsHIDPointerEvent,nonatomic,readonly) BOOL containsHIDPointerEvent; 
-(unsigned long long)_inputPrecision;
-(id)_viewsForWindow:(id)arg1 ;
-(BOOL)_sendEventToGestureRecognizer:(id)arg1 ;
-(id)_windowsAwaitingLatentSystemGestureNotificationDeliveredToEventWindow:(id)arg1 ;
-(id)_windows;
-(long long)singleAllowableExternalTouchPathIndex;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
-(void)_moveCoalescedTouchesFromHidEvent:(IOHIDEventRef)arg1 toHidEvent:(IOHIDEventRef)arg2 ;
-(id)predictedTouchesForTouch:(id)arg1 ;
-(id)_touchesForKey:(id)arg1 ;
-(BOOL)_containsHIDPointerEvent;
-(void)_addWindowAwaitingLatentSystemGestureNotification:(id)arg1 deliveredToEventWindow:(id)arg2 ;
-(void)_windowNoLongerAwaitingSystemGestureNotification:(id)arg1 ;
-(void)_removeTouch:(id)arg1 fromGestureRecognizer:(id)arg2 ;
-(id)_exclusiveTouchWindows;
-(void)dealloc;
-(id)allTouches;
-(CFDictionaryRef)_coalescedTouchesForHidEvent:(IOHIDEventRef)arg1 ;
-(void)_setHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_addGestureRecognizersForView:(id)arg1 toTouch:(id)arg2 forContinuation:(BOOL)arg3 ;
-(BOOL)_anyInterestedGestureRecognizersForTouchInView:(id)arg1 ;
-(id)_touchesForGesture:(id)arg1 withPhase:(long long)arg2 ;
-(id)_touchesForGestureRecognizer:(id)arg1 ;
-(void)_touchesForGesture:(id)arg1 withPhase:(long long)arg2 intoSet:(id)arg3 ;
-(void)_gestureRecognizerNoLongerNeedsSendEvent:(id)arg1 ;
-(void)_removeTouch:(id)arg1 ;
-(CGPoint)_digitizerLocation;
-(id)_lastPendingCoalescedTouchForIndex:(long long)arg1 hidEvent:(IOHIDEventRef)arg2 ;
-(void)_addGestureRecognizersForView:(id)arg1 toTouch:(id)arg2 ;
-(void)_invalidateGestureRecognizerForWindowCache;
-(id)touchesForWindow:(id)arg1 ;
-(id)description;
-(long long)type;
-(void)_collectGestureRecognizersForView:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_removeTouchesForWindow:(id)arg1 ;
-(id)_init;
-(id)touchesForGestureRecognizer:(id)arg1 ;
-(void)_addCoalescedTouch:(id)arg1 forIndex:(long long)arg2 hidEvent:(IOHIDEventRef)arg3 ;
-(void)_clearTouches;
-(id)_cloneEvent;
-(id)touchesForView:(id)arg1 ;
-(id)_rawCoalescedTouchesForTouch:(id)arg1 ;
-(id)_initWithEvent:(GSEventRef)arg1 touches:(id)arg2 ;
-(id)coalescedTouchesForTouch:(id)arg1 ;
-(id)_allTouches;
-(void)_moveTouchesFromView:(id)arg1 toView:(id)arg2 ;
-(double)_initialTouchTimestampForWindow:(id)arg1 ;
-(id)_touchesForWindow:(id)arg1 ;
-(double)_initialTouchTimestamp;
-(void)setSingleAllowableExternalTouchPathIndex:(long long)arg1 ;
-(id)_touchesForView:(id)arg1 withPhase:(long long)arg2 ;
-(void)_clearViewForTouch:(id)arg1 ;
-(void)_removeTouchesForKey:(id)arg1 ;
-(void)_addGestureRecognizersForTouchContinuationInView:(id)arg1 toTouch:(id)arg2 ;
-(id)_firstTouchForView:(id)arg1 ;
-(void)_addTouch:(id)arg1 forDelayedDelivery:(BOOL)arg2 ;
@end
