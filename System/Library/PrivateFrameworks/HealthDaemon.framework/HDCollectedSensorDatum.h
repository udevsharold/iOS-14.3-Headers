/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID, NSDateInterval, NSData;


@protocol HDCollectedSensorDatum <NSObject,NSCopying,NSSecureCoding>
@property (nonatomic,copy,readonly) NSUUID * datumIdentifier; 
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,copy,readonly) NSData * resumeContext; 
@required
-(NSDateInterval *)dateInterval;
-(NSUUID *)datumIdentifier;
-(NSData *)resumeContext;

@end

