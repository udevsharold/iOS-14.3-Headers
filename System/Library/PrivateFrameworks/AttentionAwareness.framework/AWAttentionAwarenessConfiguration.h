/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AttentionAwareness/AttentionAwareness-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSCopying;
@class NSSet, NSDictionary, NSString;

@interface AWAttentionAwarenessConfiguration : NSObject <NSCopying, NSSecureCoding> {

	NSSet* _attentionLostTimeouts;
	NSDictionary* _attentionLostTimeoutDictionary;
	BOOL _samplingDelayExplicitlySet;
	BOOL _attentionLostEventMaskExplicitlySet;
	unsigned long long _tagIndex;
	NSSet* _allowedHIDEventsForRemoteEvent;
	BOOL _sampleWhileAbsent;
	NSString* _identifier;
	id<NSCopying> _tag;
	unsigned long long _notificationMask;
	unsigned long long _eventMask;
	unsigned long long _attentionLostEventMask;
	double _samplingInterval;
	double _samplingDelay;

}

@property (nonatomic,copy) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) id<NSCopying> tag;                                          //@synthesize tag=_tag - In the implementation block
@property (assign,nonatomic) unsigned long long notificationMask;                      //@synthesize notificationMask=_notificationMask - In the implementation block
@property (assign,nonatomic) unsigned long long eventMask;                             //@synthesize eventMask=_eventMask - In the implementation block
@property (assign,nonatomic) unsigned long long attentionLostEventMask;                //@synthesize attentionLostEventMask=_attentionLostEventMask - In the implementation block
@property (assign,nonatomic) double samplingInterval;                                  //@synthesize samplingInterval=_samplingInterval - In the implementation block
@property (assign,nonatomic) double samplingDelay;                                     //@synthesize samplingDelay=_samplingDelay - In the implementation block
@property (assign,nonatomic) BOOL sampleWhileAbsent;                                   //@synthesize sampleWhileAbsent=_sampleWhileAbsent - In the implementation block
@property (nonatomic,copy) NSSet * attentionLostTimeouts; 
@property (nonatomic,copy) NSDictionary * attentionLostTimeoutDictionary; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(void)cancelNotification:(AWNotification_sRef)arg1 ;
+(AWNotification_sRef)notifySupportedEventsChangedWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)supportedEventsString;
+(unsigned long long)supportedEvents;
-(BOOL)validateWithError:(id*)arg1 ;
-(void)setAttentionLostTimeouts:(NSSet *)arg1 ;
-(void)setSamplingInterval:(double)arg1 ;
-(double)samplingInterval;
-(NSDictionary *)attentionLostTimeoutDictionary;
-(unsigned long long)eventMask;
-(id)init;
-(unsigned long long)tagIndex;
-(void)setAttentionLostTimeoutDictionary:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)samplingDelay;
-(void)dealloc;
-(unsigned long long)attentionLostEventMask;
-(id<NSCopying>)tag;
-(BOOL)sampleWhileAbsent;
-(void)setTag:(id<NSCopying>)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setAttentionLostEventMask:(unsigned long long)arg1 ;
-(unsigned long long)notificationMask;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)description;
-(void)setEventMask:(unsigned long long)arg1 ;
-(void)setNotificationMask:(unsigned long long)arg1 ;
-(void)setSampleWhileAbsent:(BOOL)arg1 ;
-(void)setAttentionLostTimeout:(double)arg1 ;
-(void)setAllowedHIDEventsForRemoteEvent:(id)arg1 ;
-(id)allowedHIDEventsForRemoteEvent;
-(NSSet *)attentionLostTimeouts;
-(void)setSamplingDelay:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

