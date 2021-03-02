/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BRCRetryCounter : NSObject {

	BOOL _scheduled;
	unsigned _retryCount;
	long long _latestRetry;
	long long _throttleHash;

}

@property (nonatomic,readonly) unsigned retryCount;                 //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,readonly) long long latestRetry;               //@synthesize latestRetry=_latestRetry - In the implementation block
@property (nonatomic,readonly) long long throttleHash;              //@synthesize throttleHash=_throttleHash - In the implementation block
-(unsigned)retryCount;
-(void)schedule;
-(void)incrementRetry;
-(id)initWithThrottleHash:(long long)arg1 ;
-(long long)latestRetry;
-(long long)throttleHash;
@end
