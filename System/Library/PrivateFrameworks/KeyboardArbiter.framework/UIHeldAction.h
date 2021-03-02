/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIDelayedAction.h>

@class NSDate;

@interface UIHeldAction : UIDelayedAction {

	BOOL _holding;
	NSDate* _holdBegan;
	double _baseDelay;
	double _timeBalance;

}
-(void)unschedule;
-(void)hold;
-(void)touchWithDelay:(double)arg1 ;
-(BOOL)isHolding;
-(void)cancel;
-(void)resume;
@end
