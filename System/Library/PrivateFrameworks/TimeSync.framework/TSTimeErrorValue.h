/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSTimeErrorValue : NSObject {

	unsigned long long _timestamp;
	long long _error;

}

@property (nonatomic,readonly) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long error;                           //@synthesize error=_error - In the implementation block
+(id)timeErrorSequenceWithTimestamps:(unsigned long long*)arg1 timeError:(long long*)arg2 count:(long long)arg3 ;
-(unsigned long long)timestamp;
-(long long)error;
-(id)description;
-(id)initWithTimestamp:(unsigned long long)arg1 andError:(long long)arg2 ;
@end
