/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HKRegionAvailabilityMask : NSObject {

	unsigned long long _bitmask;
	long long _group;

}

@property (nonatomic,readonly) unsigned long long bitmask;              //@synthesize bitmask=_bitmask - In the implementation block
@property (nonatomic,readonly) long long group;                         //@synthesize group=_group - In the implementation block
+(id)maskWithBitmask:(unsigned long long)arg1 group:(long long)arg2 ;
-(unsigned long long)bitmask;
-(unsigned long long)hash;
-(id)initWithBitMask:(unsigned long long)arg1 regionGroup:(long long)arg2 ;
-(BOOL)_isEqualToMask:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)group;
@end
