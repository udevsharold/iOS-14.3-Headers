/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BYCapabilities : NSObject
+(id)sharedCapabilities;
-(BOOL)supportsPearl;
-(BOOL)mgHasMesa;
-(BOOL)mgHasSecureElement;
-(BOOL)mgHasSiriCapability;
-(id)_paymentScreenRequirements;
-(BOOL)_paymentScreenRequirementsIncludePasscode:(id)arg1 ;
-(BOOL)canShowPasscodeScreen;
-(BOOL)_paymentScreenRequirementsIncludeiCloud:(id)arg1 ;
-(BOOL)canShowAppleIDScreen;
-(BOOL)isPearlEnrolled;
-(BOOL)canShowSiriScreen;
-(BOOL)canShowPaymentScreen;
-(BOOL)canShowTouchIDScreen;
-(BOOL)canShowFaceIDScreen;
-(BOOL)mgHasCellularTelephony;
-(BOOL)mgHasGreenTea;
-(BOOL)supportsApplePay;
@end
