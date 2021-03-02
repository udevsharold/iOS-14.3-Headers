/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIEvent.h>

@interface _UIGameControllerEvent : UIEvent {

	SCD_Struct_UI117 _previousState;
	unsigned long long _activeComponent;

}
-(long long)subtype;
-(void)_sendEventToResponder:(id)arg1 ;
-(void)_reset;
-(BOOL)_processLeftStick:(SCD_Struct_UI117*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(long long)type;
-(void)_maybeConvertAndSendAsPressesEvent;
-(BOOL)_processShoulder:(SCD_Struct_UI117*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_processDPad:(SCD_Struct_UI117*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_processStandardButtons:(SCD_Struct_UI117*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(BOOL)_processRightStick:(SCD_Struct_UI117*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
-(CGPoint)_leftStickPosition;
-(BOOL)_determineInputTypeAndProcess:(SCD_Struct_UI117*)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3 ;
@end
