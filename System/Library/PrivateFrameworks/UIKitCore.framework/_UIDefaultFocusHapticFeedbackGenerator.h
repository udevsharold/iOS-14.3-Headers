/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIFocusHapticFeedbackGenerator.h>

@class CARSessionStatus, CARInputDeviceTouchpad, NSString;

@interface _UIDefaultFocusHapticFeedbackGenerator : NSObject <_UIFocusHapticFeedbackGenerator> {

	CARSessionStatus* _sessionStatus;
	CARInputDeviceTouchpad* _currentTouchpad;
	unsigned long long _currentSenderID;

}

@property (nonatomic,retain) CARSessionStatus * sessionStatus;                      //@synthesize sessionStatus=_sessionStatus - In the implementation block
@property (nonatomic,retain) CARInputDeviceTouchpad * currentTouchpad;              //@synthesize currentTouchpad=_currentTouchpad - In the implementation block
@property (assign,nonatomic) unsigned long long currentSenderID;                    //@synthesize currentSenderID=_currentSenderID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CARSessionStatus *)sessionStatus;
-(id)initWithScreen:(id)arg1 ;
-(void)setSessionStatus:(CARSessionStatus *)arg1 ;
-(void)performHapticFeedbackForFocusUpdateInContext:(id)arg1 ;
-(void)setCurrentTouchpad:(CARInputDeviceTouchpad *)arg1 ;
-(void)setCurrentSenderID:(unsigned long long)arg1 ;
-(CARInputDeviceTouchpad *)currentTouchpad;
-(unsigned long long)currentSenderID;
@end

