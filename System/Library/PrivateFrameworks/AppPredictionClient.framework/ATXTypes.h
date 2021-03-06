/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATXTypes : NSObject
+(id)validConsumerSubTypes;
+(id)validConsumerTypeList;
+(id)consumerSubtypeMapping;
+(unsigned char)consumerSubtypeForString:(id)arg1 found:(BOOL*)arg2 ;
+(id)inverseConsumerSubtypeMapping;
+(id)uiTypeForActionConsumerSubType:(unsigned char)arg1 ;
+(void)iterConsumerTypesWithBlock:(/*^block*/id)arg1 ;
+(unsigned long long)consumerTypeForSubType:(unsigned char)arg1 ;
+(id)stringForEngagementType:(unsigned long long)arg1 ;
+(unsigned long long)engagementTypeForString:(id)arg1 found:(BOOL*)arg2 ;
+(id)validConsumerSubTypeList;
+(id)validConsumerTypes;
+(id)safeStringForConsumerSubtype:(unsigned char)arg1 ;
+(void)iterConsumerSubTypesWithBlock:(/*^block*/id)arg1 ;
+(id)consumerMapping;
+(id)stringForConsumerSubtype:(unsigned char)arg1 ;
+(BOOL)isActionSpotlightConsumerSubType:(unsigned char)arg1 ;
+(id)stringForConsumerType:(unsigned long long)arg1 ;
+(unsigned long long)consumerTypeForString:(id)arg1 found:(BOOL*)arg2 ;
@end

