/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapTransitAccessPoint <GEOMapTransitPoint>
@property (nonatomic,readonly) unsigned long long stationID; 
@property (nonatomic,readonly) double groundRadius; 
@property (nonatomic,readonly) unsigned char entranceExitType; 
@property (nonatomic,readonly) unsigned short accessType; 
@required
-(unsigned long long)stationID;
-(double)groundRadius;
-(unsigned short)accessType;
-(unsigned char)entranceExitType;
-(id)findStops:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findStation:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;

@end
