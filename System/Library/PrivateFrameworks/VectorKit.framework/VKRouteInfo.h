/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:19:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOComposedRoute, VKRouteEtaDescription, NSArray;

@interface VKRouteInfo : NSObject {

	GEOComposedRoute* _route;
	VKRouteEtaDescription* _etaDescription;
	NSArray* _waypoints;
	BOOL _hasFocus;

}

@property (nonatomic,readonly) GEOComposedRoute * route;                          //@synthesize route=_route - In the implementation block
@property (nonatomic,retain) VKRouteEtaDescription * etaDescription;              //@synthesize etaDescription=_etaDescription - In the implementation block
@property (nonatomic,readonly) NSArray * waypoints;                               //@synthesize waypoints=_waypoints - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteEta; 
@property (assign,nonatomic) BOOL hasFocus;                                       //@synthesize hasFocus=_hasFocus - In the implementation block
-(void)setHasFocus:(BOOL)arg1 ;
-(void)setEtaDescription:(VKRouteEtaDescription *)arg1 ;
-(BOOL)hasFocus;
-(GEOComposedRoute *)route;
-(void)dealloc;
-(NSArray *)waypoints;
-(BOOL)hasRouteEta;
-(VKRouteEtaDescription *)etaDescription;
-(id)initWithComposedRoute:(id)arg1 etaDescription:(id)arg2 ;
-(id)initWithComposedRoute:(id)arg1 etaText:(id)arg2 ;
@end

