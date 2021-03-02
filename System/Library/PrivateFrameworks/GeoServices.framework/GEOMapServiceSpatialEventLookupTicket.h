/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, GEOMapServiceTraits;


@protocol GEOMapServiceSpatialEventLookupTicket <NSObject>
@property (nonatomic,readonly) NSArray * parameters; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@required
-(NSArray *)parameters;
-(void)submitWithHandler:(/*^block*/id)arg1 queue:(id)arg2;
-(void)cancel;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 queue:(id)arg3;
-(GEOMapServiceTraits *)traits;

@end
