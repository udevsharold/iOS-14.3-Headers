/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDate, NSString;

@interface SACalendarRecurrence : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long endCount; 
@property (nonatomic,copy) NSDate * endDate; 
@property (assign,nonatomic) int frequency; 
@property (assign,nonatomic) long long interval; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recurrence;
+(id)recurrenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSDate *)endDate;
-(int)frequency;
-(long long)interval;
-(void)setInterval:(long long)arg1 ;
-(void)setFrequency:(int)arg1 ;
-(long long)endCount;
-(id)encodedClassName;
-(void)setEndCount:(long long)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
@end

