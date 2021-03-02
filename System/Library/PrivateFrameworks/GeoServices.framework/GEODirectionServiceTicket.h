/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOComposedRoute, NSArray, NSNumber, NSDictionary;


@protocol GEODirectionServiceTicket <NSObject>
@property (nonatomic,copy) id requestCallback; 
@property (nonatomic,readonly) BOOL isReroute; 
@property (nonatomic,readonly) GEOComposedRoute * originalRoute; 
@property (nonatomic,readonly) NSArray * waypoints; 
@property (nonatomic,copy,readonly) NSNumber * requestPriority; 
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
@property (nonatomic,readonly) BOOL isDoom; 
@required
-(BOOL)isDoom;
-(NSNumber *)requestPriority;
-(NSArray *)waypoints;
-(void)cancel;
-(NSDictionary *)responseUserInfo;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 networkActivity:(/*^block*/id)arg3;
-(GEOComposedRoute *)originalRoute;
-(id)requestCallback;
-(BOOL)isReroute;
-(void)setRequestCallback:(/*^block*/id)arg1;

@end
