/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ClockKitUI/ClockKitUI-Structs.h>
@interface CLKUIAlmanacCacheKey : NSObject {

	long long _latitude;
	long long _longitude;
	long long _altitude;
	long long _time;

}

@property (nonatomic,readonly) long long latitude;               //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) long long longitude;              //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) long long altitude;               //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,readonly) long long time;                   //@synthesize time=_time - In the implementation block
-(long long)altitude;
-(long long)time;
-(long long)longitude;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(long long)latitude;
-(id)initWithLocation:(SCD_Struct_CL1)arg1 altitude:(double)arg2 time:(double)arg3 ;
-(BOOL)matchesLocation:(SCD_Struct_CL1)arg1 altitude:(double)arg2 ;
@end
