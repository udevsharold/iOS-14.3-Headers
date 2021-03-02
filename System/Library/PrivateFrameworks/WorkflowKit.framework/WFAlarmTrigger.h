/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@class NSArray;

@interface WFAlarmTrigger : WFTrigger {

	long long _alarmType;
	NSArray* _alarmIDs;
	NSArray* _cachedAlarmDescriptions;
	long long _alarmState;

}

@property (assign,nonatomic) long long alarmType;                          //@synthesize alarmType=_alarmType - In the implementation block
@property (nonatomic,copy) NSArray * alarmIDs;                             //@synthesize alarmIDs=_alarmIDs - In the implementation block
@property (nonatomic,copy) NSArray * cachedAlarmDescriptions;              //@synthesize cachedAlarmDescriptions=_cachedAlarmDescriptions - In the implementation block
@property (assign,nonatomic) long long alarmState;                         //@synthesize alarmState=_alarmState - In the implementation block
+(id)triggerTypeIcon;
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(BOOL)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
-(unsigned long long)alarmEventForCurrentAlarmState;
-(BOOL)shouldFireForPreviousAlarmEvent:(unsigned long long)arg1 ;
-(id)contextStoreKeyPathForCurrentState;
-(id)contextStorePredicate;
-(unsigned)contextStoreQualityOfService;
-(BOOL)shouldFireTriggerWithEventInfo:(id)arg1 error:(out id*)arg2 ;
-(id)init;
-(void)setAlarmType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)alarmType;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)alarmState;
-(id)localizedDescriptionWithConfigurationSummary;
-(NSArray *)alarmIDs;
-(id)localizedPastTenseDescription;
-(BOOL)hasValidConfiguration;
-(void)setAlarmIDs:(NSArray *)arg1 ;
-(NSArray *)cachedAlarmDescriptions;
-(void)setCachedAlarmDescriptions:(NSArray *)arg1 ;
-(void)setAlarmState:(long long)arg1 ;
@end
