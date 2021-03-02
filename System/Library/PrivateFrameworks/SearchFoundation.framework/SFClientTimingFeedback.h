/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFClientTimingFeedback : SFFeedback {

	NSString* _input;
	NSString* _eventName;
	unsigned long long _nanosecondInterval;

}

@property (nonatomic,copy) NSString * input;                           //@synthesize input=_input - In the implementation block
@property (nonatomic,copy) NSString * eventName;                       //@synthesize eventName=_eventName - In the implementation block
@property (assign) unsigned long long nanosecondInterval;              //@synthesize nanosecondInterval=_nanosecondInterval - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setEventName:(NSString *)arg1 ;
-(NSString *)eventName;
-(NSString *)input;
-(void)setInput:(NSString *)arg1 ;
-(id)initWithEvent:(id)arg1 timeInterval:(unsigned long long)arg2 queryId:(unsigned long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setNanosecondInterval:(unsigned long long)arg1 ;
-(unsigned long long)nanosecondInterval;
-(void)encodeWithCoder:(id)arg1 ;
@end
