/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableDictionary, NSString, RTVisit, RTVisitHyperParameter, NSDate;

@interface RTVisitPipeline : NSObject {

	NSArray* _modules;
	NSMutableDictionary* _moduleStats;
	unsigned long long _iteration;
	BOOL _bootStrappingDone;
	NSString* _name;
	unsigned long long _type;
	RTVisit* _lastVisit;
	RTVisitHyperParameter* _hyperParameter;
	NSDate* _lastProcessedLocationDate;

}

@property (nonatomic,retain) NSDate * lastProcessedLocationDate;                    //@synthesize lastProcessedLocationDate=_lastProcessedLocationDate - In the implementation block
@property (nonatomic,readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) RTVisit * lastVisit;                                 //@synthesize lastVisit=_lastVisit - In the implementation block
@property (assign,nonatomic) BOOL bootStrappingDone;                                //@synthesize bootStrappingDone=_bootStrappingDone - In the implementation block
@property (nonatomic,readonly) RTVisitHyperParameter * hyperParameter;              //@synthesize hyperParameter=_hyperParameter - In the implementation block
+(id)typeToString:(unsigned long long)arg1 ;
-(void)shutdown;
-(id)initWithModules:(id)arg1 name:(id)arg2 type:(unsigned long long)arg3 lastVisit:(id)arg4 hyperParameter:(id)arg5 ;
-(id)init;
-(void)setBootStrappingDone:(BOOL)arg1 ;
-(id)processVisitCluster:(id)arg1 ;
-(id)filterLocations:(id)arg1 ;
-(id)description;
-(unsigned long long)type;
-(void)setLastProcessedLocationDate:(NSDate *)arg1 ;
-(id)filterVisitClusters:(id)arg1 ;
-(BOOL)isRedundantForVisit:(id)arg1 currentVisit:(id)arg2 distanceCalculator:(id)arg3 ;
-(NSDate *)lastProcessedLocationDate;
-(NSString *)name;
-(BOOL)bootStrappingDone;
-(RTVisitHyperParameter *)hyperParameter;
-(id)processLocations:(id)arg1 ;
-(RTVisit *)lastVisit;
@end
