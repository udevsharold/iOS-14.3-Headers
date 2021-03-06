/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class NSNumber;

@interface WALocationData : NSObject <AADataEventType> {

	NSNumber* _latitude;
	NSNumber* _longitude;

}

@property (nonatomic,readonly) NSNumber * latitude;               //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) NSNumber * longitude;              //@synthesize longitude=_longitude - In the implementation block
+(id)dataName;
-(id)toDict;
-(NSNumber *)longitude;
-(id)initWithLatitude:(id)arg1 longitude:(id)arg2 ;
-(NSNumber *)latitude;
@end

