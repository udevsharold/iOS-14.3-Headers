/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSDate;

@interface CMSleepData : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long fRecordId;
	NSUUID* fSourceId;
	NSUUID* fSessionId;
	NSDate* fEventTime;
	long long fEventType;

}

@property (nonatomic,readonly) unsigned long long recordId; 
@property (nonatomic,readonly) NSUUID * sourceId; 
@property (nonatomic,readonly) NSUUID * sessionId; 
@property (nonatomic,readonly) NSDate * eventTime; 
@property (nonatomic,readonly) long long eventType; 
+(BOOL)supportsSecureCoding;
+(id)eventTypeName:(long long)arg1 ;
-(long long)eventType;
-(NSUUID *)sourceId;
-(unsigned long long)recordId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSpringEntry:(const CLSpringTrackerEntry*)arg1 ;
-(id)initWithRecordId:(unsigned long long)arg1 sourceId:(id)arg2 sessionId:(id)arg3 eventTime:(id)arg4 eventType:(long long)arg5 ;
-(void)convertToSpringTrackerEntry:(CLSpringTrackerEntry*)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSUUID *)sessionId;
-(id)initWithSessionId:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)eventTime;
@end

