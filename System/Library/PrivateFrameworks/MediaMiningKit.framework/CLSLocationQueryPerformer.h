/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <libobjc.A.dylib/CLSQueryPerformerProtocol.h>

@protocol GEOMapServiceTicket, OS_os_log;
@class NSArray, NSObject, NSString;

@interface CLSLocationQueryPerformer : NSObject <CLSQueryPerformerProtocol> {

	BOOL _isCancelled;
	NSArray* _geoLocations;
	id<GEOMapServiceTicket> _ticket;
	NSArray* _regions;
	double _precision;
	NSObject*<OS_os_log> _loggingConnection;
	SCD_Struct_CL2 _statistics;

}

@property (nonatomic,readonly) NSArray * geoLocations;                            //@synthesize geoLocations=_geoLocations - In the implementation block
@property (nonatomic,readonly) id<GEOMapServiceTicket> ticket;                    //@synthesize ticket=_ticket - In the implementation block
@property (nonatomic,copy,readonly) NSArray * regions;                            //@synthesize regions=_regions - In the implementation block
@property (nonatomic,readonly) BOOL isCancelled;                                  //@synthesize isCancelled=_isCancelled - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL2 statistics;                           //@synthesize statistics=_statistics - In the implementation block
@property (assign,nonatomic) double precision;                                    //@synthesize precision=_precision - In the implementation block
@property (assign,nonatomic) NSObject*<OS_os_log> loggingConnection;              //@synthesize loggingConnection=_loggingConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)numberOfRegionsPerBatch;
+(double)defaultPrecision;
+(id)queryWithTemplate:(id)arg1 forRegions:(id)arg2 ;
-(SCD_Struct_CL2)statistics;
-(void)setStatistics:(SCD_Struct_CL2)arg1 ;
-(NSArray *)regions;
-(id)init;
-(NSObject*<OS_os_log>)loggingConnection;
-(double)precision;
-(void)submitWithHandler:(/*^block*/id)arg1 ;
-(void)logGeoLookupCounterAndDurationWithLookupDuration:(id)arg1 ;
-(BOOL)shouldQueryItemsForRegion:(id)arg1 selectedRegions:(id)arg2 ;
-(id)initWithRegions:(id)arg1 precision:(double)arg2 ;
-(void)setPrecision:(double)arg1 ;
-(BOOL)isCancelled;
-(void)cancel;
-(id<GEOMapServiceTicket>)ticket;
-(unsigned long long)cacheItems:(id)arg1 ;
-(void)setLoggingConnection:(NSObject*<OS_os_log>)arg1 ;
-(void)logGeoLookupFailureResult;
-(NSArray *)geoLocations;
@end
