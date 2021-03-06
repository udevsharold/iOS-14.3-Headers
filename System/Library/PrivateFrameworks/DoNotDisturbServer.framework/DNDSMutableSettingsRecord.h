/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <DoNotDisturbServer/DNDSSettingsRecord.h>

@class DNDSBehaviorSettingsRecord, DNDSBypassSettingsRecord, DNDSScheduleSettingsRecord;

@interface DNDSMutableSettingsRecord : DNDSSettingsRecord

@property (nonatomic,copy) DNDSBehaviorSettingsRecord * behaviorSettings; 
@property (nonatomic,copy) DNDSBypassSettingsRecord * phoneCallBypassSettings; 
@property (nonatomic,copy) DNDSScheduleSettingsRecord * scheduleSettings; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBehaviorSettings:(DNDSBehaviorSettingsRecord *)arg1 ;
-(void)setPhoneCallBypassSettings:(DNDSBypassSettingsRecord *)arg1 ;
-(void)setScheduleSettings:(DNDSScheduleSettingsRecord *)arg1 ;
@end

