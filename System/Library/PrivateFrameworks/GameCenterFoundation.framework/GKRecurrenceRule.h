/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GKRecurrenceRule : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _interval;
	long long _frequency;

}

@property (assign) unsigned long long interval;              //@synthesize interval=_interval - In the implementation block
@property (assign) long long frequency;                      //@synthesize frequency=_frequency - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)frequency;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)interval;
-(void)setInterval:(unsigned long long)arg1 ;
-(id)initWithInterval:(unsigned long long)arg1 frequency:(long long)arg2 ;
-(void)setFrequency:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
