/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TimeSync-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSGPSTime : NSObject <NSCopying> {

	unsigned long long _nanosecondsSinceEpoch;

}

@property (nonatomic,readonly) unsigned long long nanosecondsSinceEpoch;              //@synthesize nanosecondsSinceEpoch=_nanosecondsSinceEpoch - In the implementation block
@property (nonatomic,readonly) unsigned extendedWeek; 
@property (nonatomic,readonly) unsigned short week; 
@property (nonatomic,readonly) double seconds; 
@property (nonatomic,readonly) unsigned long long nanoseconds; 
-(double)seconds;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)nanoseconds;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned short)week;
-(id)initWithNanosecondsSinceEpoch:(unsigned long long)arg1 ;
-(unsigned long long)nanosecondsSinceEpoch;
-(id)initWithExtendedWeek:(unsigned)arg1 nanoseconds:(unsigned long long)arg2 ;
-(id)initWithExtendedWeek:(unsigned)arg1 seconds:(double)arg2 ;
-(unsigned)extendedWeek;
-(id)initWithWeek:(unsigned)arg1 seconds:(double)arg2 rollovers:(unsigned short)arg3 ;
-(id)initWithWeek:(unsigned)arg1 nanoseconds:(unsigned long long)arg2 rollovers:(unsigned short)arg3 ;
@end

