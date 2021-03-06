/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCLSettingsSyncErrorBehavior : NSObject {

	unsigned long long _recoveryType;
	long long _retryInterval;

}

@property (nonatomic,readonly) unsigned long long recoveryType;              //@synthesize recoveryType=_recoveryType - In the implementation block
@property (nonatomic,readonly) long long retryInterval;                      //@synthesize retryInterval=_retryInterval - In the implementation block
-(long long)retryInterval;
-(id)initWithRecoveryType:(unsigned long long)arg1 retryInterval:(long long)arg2 ;
-(unsigned long long)recoveryType;
@end

