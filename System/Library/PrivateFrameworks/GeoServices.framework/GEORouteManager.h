/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEORouteManagerDelegate;
@class GEOApplicationAuditToken;

@interface GEORouteManager : NSObject {

	id<GEORouteManagerDelegate> _delegate;
	GEOApplicationAuditToken* _auditToken;

}

@property (assign,nonatomic,__weak) id<GEORouteManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GEOApplicationAuditToken * auditToken;                    //@synthesize auditToken=_auditToken - In the implementation block
+(void)setShouldRequestServerLatencyInfo:(BOOL)arg1 ;
-(void)setAuditToken:(GEOApplicationAuditToken *)arg1 ;
-(GEOApplicationAuditToken *)auditToken;
-(void)setDelegate:(id<GEORouteManagerDelegate>)arg1 ;
-(void)didReceiveRoutes:(id)arg1 ;
-(void)handleResponse:(id)arg1 fromRequest:(id)arg2 forTicket:(id)arg3 ;
-(id)refineErrorFromServerError:(id)arg1 directionsError:(id)arg2 ;
-(void)handleError:(id)arg1 directionsError:(id)arg2 forTicket:(id)arg3 ;
-(void)fetchDirectionsForTicket:(id)arg1 networkActivity:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<GEORouteManagerDelegate>)delegate;
@end
