/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HMBModel.h>

@class NSNumber, NSDate;

@interface HMDCameraProfileSettingsDerivedPropertiesModel : HMBModel

@property (retain) NSNumber * currentAccessModeField; 
@property (retain) NSNumber * currentAccessModeChangeReasonField; 
@property (retain) NSDate * currentAccessModeChangeDate; 
@property (assign) unsigned long long currentAccessMode; 
@property (assign) unsigned long long currentAccessModeChangeReason; 
+(id)hmbProperties;
-(unsigned long long)currentAccessMode;
-(void)setCurrentAccessMode:(unsigned long long)arg1 ;
-(void)setCurrentAccessModeChangeReason:(unsigned long long)arg1 ;
-(unsigned long long)currentAccessModeChangeReason;
@end

