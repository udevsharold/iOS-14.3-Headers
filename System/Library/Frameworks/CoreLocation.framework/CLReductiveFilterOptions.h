/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CLReductiveFilterOptions : NSObject {

	unsigned long long _beaconType;
	double _transmitPower;

}

@property (nonatomic,readonly) unsigned long long beaconType;              //@synthesize beaconType=_beaconType - In the implementation block
@property (nonatomic,readonly) double transmitPower;                       //@synthesize transmitPower=_transmitPower - In the implementation block
-(id)init;
-(unsigned long long)beaconType;
-(double)transmitPower;
-(id)initWithBeaconType:(unsigned long long)arg1 transmitPower:(double)arg2 ;
-(id)initWithBeaconType:(unsigned long long)arg1 ;
@end
