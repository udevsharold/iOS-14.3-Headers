/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIPasscodeLockViewSimpleFixedDigitKeypad.h>

@class SBUIButton;

@interface SBUIPasscodeLockViewInstallTonightSimpleFixedDigitKeypad : SBUIPasscodeLockViewSimpleFixedDigitKeypad {

	SBUIButton* _actionButton;

}
-(id)initWithLightStyle:(BOOL)arg1 numberOfDigits:(unsigned long long)arg2 ;
-(void)_layoutStatusView;
-(void)passcodeEntryFieldTextDidChange:(id)arg1 ;
-(void)_actionButtonHit;
-(void)_layoutActionButton;
-(void)_setShowsEmergencyCallButton:(BOOL)arg1 fromCancelButton:(BOOL)arg2 ;
-(void)_setShowsCancelButton:(BOOL)arg1 fromEmergencyCallButton:(BOOL)arg2 ;
-(void)_configureActionButton;
-(void)_sizeLabel:(id)arg1 ;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(void)setShowsEmergencyCallButton:(BOOL)arg1 ;
@end
