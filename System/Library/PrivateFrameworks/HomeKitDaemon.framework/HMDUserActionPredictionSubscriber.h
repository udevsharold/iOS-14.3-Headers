/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface HMDUserActionPredictionSubscriber : NSObject {

	NSUUID* _uuid;
	unsigned long long _predictionLimit;

}

@property (copy,readonly) NSUUID * uuid;                              //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long predictionLimit;              //@synthesize predictionLimit=_predictionLimit - In the implementation block
-(NSUUID *)uuid;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)predictionLimit;
-(id)initWithUUID:(id)arg1 predictionLimit:(unsigned long long)arg2 ;
@end

