/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITapGestureRecognizer.h>

@protocol MKVariableDelayTapRecognizerDelegate;
@interface MKVariableDelayTapRecognizer : UITapGestureRecognizer {

	double originalMaximumIntervalBetweenSuccessiveTaps;
	id<MKVariableDelayTapRecognizerDelegate> tapDelayDelegate;

}

@property (assign,nonatomic,__weak) id<MKVariableDelayTapRecognizerDelegate> tapDelayDelegate; 
-(void)reset;
-(void)setTapDelayDelegate:(id<MKVariableDelayTapRecognizerDelegate>)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(id<MKVariableDelayTapRecognizerDelegate>)tapDelayDelegate;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
@end
