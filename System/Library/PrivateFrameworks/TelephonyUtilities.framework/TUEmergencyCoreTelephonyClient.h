/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TUEmergencyCoreTelephonyClient <TUCoreTelephonyClient>
@required
-(BOOL)inEmergencyMode;
-(BOOL)isEmergencyNumberForDigits:(id)arg1 subscriptionUUID:(id)arg2 error:(id*)arg3;
-(BOOL)isWhitelistedEmergencyNumberForDigits:(id)arg1 subscriptionUUID:(id)arg2 error:(id*)arg3;
-(BOOL)shouldShowEmergencyCallbackModeAlertForSubscriptionUUID:(id)arg1 error:(id*)arg2;

@end

