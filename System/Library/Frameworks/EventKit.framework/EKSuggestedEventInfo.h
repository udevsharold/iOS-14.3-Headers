/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>

@class NSString;

@interface EKSuggestedEventInfo : EKObject

@property (nonatomic,copy) NSString * opaqueKey; 
@property (nonatomic,copy) NSString * uniqueKey; 
@property (nonatomic,copy) NSString * extractionGroupIdentifier; 
@property (assign,nonatomic) BOOL changesAcknowledged; 
@property (assign,nonatomic) unsigned long long changedFields; 
@property (assign,nonatomic) double timestamp; 
+(id)knownIdentityKeysForComparison;
+(Class)frozenClass;
+(id)knownSingleValueKeysForComparison;
-(id)semanticIdentifier;
-(double)timestamp;
-(NSString *)uniqueKey;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(id)description;
-(void)setOpaqueKey:(NSString *)arg1 ;
-(id)initWithEventStore:(id)arg1 opaqueKey:(id)arg2 uniqueKey:(id)arg3 ;
-(id)initWithEventStore:(id)arg1 opaqueKey:(id)arg2 uniqueKey:(id)arg3 extractionGroupIdentifier:(id)arg4 ;
-(void)setUniqueKey:(NSString *)arg1 ;
-(void)setChangedFields:(unsigned long long)arg1 ;
-(void)setChangesAcknowledged:(BOOL)arg1 ;
-(void)setExtractionGroupIdentifier:(NSString *)arg1 ;
-(NSString *)extractionGroupIdentifier;
-(unsigned long long)changedFields;
-(BOOL)changesAcknowledged;
-(void)setTimestampAsDate:(id)arg1 ;
-(id)timestampAsDate;
-(id)initWithOpaqueKey:(id)arg1 uniqueKey:(id)arg2 ;
-(id)initWithOpaqueKey:(id)arg1 uniqueKey:(id)arg2 extractionGroupIdentifier:(id)arg3 ;
-(NSString *)opaqueKey;
-(id)relatedEvent;
@end

