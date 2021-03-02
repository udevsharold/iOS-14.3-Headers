/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString, NSError;

@interface ASDJobSchedulerJobMetadata : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _accountIdentifier;
	NSString* _bundleID;
	NSNumber* _externalPriority;
	NSNumber* _itemID;
	NSString* _jobState;
	NSString* _jobType;
	NSError* _lastError;
	NSNumber* _lastSoftFailureTimestamp;
	NSNumber* _priority;
	NSNumber* _priorityBucket;
	NSString* _skippedReason;
	long long _softFailureCount;
	NSNumber* _softFailureTimeout;
	NSNumber* _timestamp;

}

@property (copy) NSNumber * accountIdentifier;                        //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (copy) NSString * bundleID;                                 //@synthesize bundleID=_bundleID - In the implementation block
@property (copy) NSNumber * externalPriority;                         //@synthesize externalPriority=_externalPriority - In the implementation block
@property (copy) NSNumber * itemID;                                   //@synthesize itemID=_itemID - In the implementation block
@property (copy) NSString * jobState;                                 //@synthesize jobState=_jobState - In the implementation block
@property (copy) NSString * jobType;                                  //@synthesize jobType=_jobType - In the implementation block
@property (copy) NSError * lastError;                                 //@synthesize lastError=_lastError - In the implementation block
@property (copy) NSNumber * lastSoftFailureTimestamp;                 //@synthesize lastSoftFailureTimestamp=_lastSoftFailureTimestamp - In the implementation block
@property (copy) NSNumber * priority;                                 //@synthesize priority=_priority - In the implementation block
@property (copy) NSNumber * priorityBucket;                           //@synthesize priorityBucket=_priorityBucket - In the implementation block
@property (copy) NSString * skippedReason;                            //@synthesize skippedReason=_skippedReason - In the implementation block
@property (assign,nonatomic) long long softFailureCount;              //@synthesize softFailureCount=_softFailureCount - In the implementation block
@property (copy) NSNumber * softFailureTimeout;                       //@synthesize softFailureTimeout=_softFailureTimeout - In the implementation block
@property (copy) NSNumber * timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBundleID:(NSString *)arg1 ;
-(NSError *)lastError;
-(void)setPriority:(NSNumber *)arg1 ;
-(NSNumber *)accountIdentifier;
-(NSNumber *)itemID;
-(NSNumber *)timestamp;
-(void)setLastError:(NSError *)arg1 ;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleID;
-(void)setTimestamp:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setJobType:(NSString *)arg1 ;
-(void)setItemID:(NSNumber *)arg1 ;
-(NSString *)jobState;
-(NSString *)jobType;
-(NSNumber *)externalPriority;
-(void)setExternalPriority:(NSNumber *)arg1 ;
-(void)setJobState:(NSString *)arg1 ;
-(NSNumber *)lastSoftFailureTimestamp;
-(void)setLastSoftFailureTimestamp:(NSNumber *)arg1 ;
-(NSNumber *)priorityBucket;
-(NSString *)skippedReason;
-(void)setPriorityBucket:(NSNumber *)arg1 ;
-(void)setSkippedReason:(NSString *)arg1 ;
-(long long)softFailureCount;
-(void)setSoftFailureCount:(long long)arg1 ;
-(NSNumber *)softFailureTimeout;
-(void)setSoftFailureTimeout:(NSNumber *)arg1 ;
-(NSNumber *)priority;
-(void)encodeWithCoder:(id)arg1 ;
@end
