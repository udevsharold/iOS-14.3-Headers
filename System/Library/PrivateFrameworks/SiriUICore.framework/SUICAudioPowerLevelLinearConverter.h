/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SUICAudioPowerLevelLinearConverter : NSObject
+(float)_adjustedLinearPowerLevel:(float)arg1 isInput:(BOOL)arg2 ;
+(float)_linearValueForPowerLevel:(float)arg1 shouldAdjustForDeviceType:(BOOL)arg2 isInput:(BOOL)arg3 ;
+(float)_expectedLinearInputPowerLevelMaximum;
+(float)linearValueForInputPowerLevel:(float)arg1 ;
+(float)linearValueForOutputPowerLevel:(float)arg1 ;
@end
