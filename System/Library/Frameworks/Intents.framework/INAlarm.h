/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDateComponents, INSpeakableString, NSNumber, INSleepAlarmAttribute;

@interface INAlarm : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSDateComponents* _dateTime;
	INSpeakableString* _label;
	NSNumber* _enabled;
	NSNumber* _firing;
	unsigned long long _alarmRepeatScheduleOptions;
	INSleepAlarmAttribute* _sleepAlarmAttribute;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * dateTime;                              //@synthesize dateTime=_dateTime - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * label;                                //@synthesize label=_label - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * enabled;                                       //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * firing;                                        //@synthesize firing=_firing - In the implementation block
@property (nonatomic,readonly) unsigned long long alarmRepeatScheduleOptions;                 //@synthesize alarmRepeatScheduleOptions=_alarmRepeatScheduleOptions - In the implementation block
@property (nonatomic,copy,readonly) INSleepAlarmAttribute * sleepAlarmAttribute;              //@synthesize sleepAlarmAttribute=_sleepAlarmAttribute - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(NSNumber *)firing;
-(NSDateComponents *)dateTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)enabled;
-(unsigned long long)hash;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)alarmRepeatScheduleOptions;
-(INSleepAlarmAttribute *)sleepAlarmAttribute;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 dateTime:(id)arg2 label:(id)arg3 enabled:(id)arg4 firing:(id)arg5 alarmRepeatScheduleOptions:(unsigned long long)arg6 sleepAlarmAttribute:(id)arg7 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(INSpeakableString *)label;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

