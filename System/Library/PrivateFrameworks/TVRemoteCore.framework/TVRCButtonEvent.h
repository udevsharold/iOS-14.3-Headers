/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, TVRCButton;

@interface TVRCButtonEvent : NSObject <NSSecureCoding> {

	NSDate* _timestamp;
	TVRCButton* _button;
	long long _eventType;

}

@property (nonatomic,copy,readonly) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) TVRCButton * button;                  //@synthesize button=_button - In the implementation block
@property (nonatomic,readonly) long long eventType;                  //@synthesize eventType=_eventType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)buttonEventForButton:(id)arg1 eventType:(long long)arg2 ;
-(long long)eventType;
-(NSDate *)timestamp;
-(id)initWithCoder:(id)arg1 ;
-(TVRCButton *)button;
-(id)description;
-(id)_init;
-(void)encodeWithCoder:(id)arg1 ;
@end

