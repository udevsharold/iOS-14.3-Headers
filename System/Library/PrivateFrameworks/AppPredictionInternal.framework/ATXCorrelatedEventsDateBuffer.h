/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATXCorrelatedEventsDateBuffer : NSObject {

	double _bufferSeconds;
	long long _bufferType;

}

@property (nonatomic,readonly) double bufferSeconds;              //@synthesize bufferSeconds=_bufferSeconds - In the implementation block
@property (nonatomic,readonly) long long bufferType;              //@synthesize bufferType=_bufferType - In the implementation block
-(long long)bufferType;
-(id)initWithBufferSeconds:(double)arg1 andBufferType:(long long)arg2 ;
-(id)startDateWithBufferForEvent:(id)arg1 ;
-(id)endDateWithBufferForEvent:(id)arg1 ;
-(double)bufferSeconds;
@end

