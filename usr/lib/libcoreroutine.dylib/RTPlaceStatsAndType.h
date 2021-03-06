/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTLearnedPlaceTypeInferencePlaceStats, NSUUID;

@interface RTPlaceStatsAndType : NSObject {

	RTLearnedPlaceTypeInferencePlaceStats* _placeStats;
	unsigned long long _type;
	NSUUID* _placeIdentifier;

}

@property (nonatomic,readonly) RTLearnedPlaceTypeInferencePlaceStats * placeStats;              //@synthesize placeStats=_placeStats - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSUUID * placeIdentifier;                                        //@synthesize placeIdentifier=_placeIdentifier - In the implementation block
-(unsigned long long)type;
-(NSUUID *)placeIdentifier;
-(id)initWithPlaceStats:(id)arg1 type:(unsigned long long)arg2 placeIdentifier:(id)arg3 ;
-(RTLearnedPlaceTypeInferencePlaceStats *)placeStats;
@end

