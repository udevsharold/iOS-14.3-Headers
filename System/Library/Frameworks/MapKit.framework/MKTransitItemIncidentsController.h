/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOTransitLineItem;
@class MKMapItem, NSArray, NSMutableDictionary, NSSet, NSDate;

@interface MKTransitItemIncidentsController : NSObject {

	MKMapItem* _mapItem;
	id<GEOTransitLineItem> _lineItem;
	NSArray* _validIncidents;
	NSMutableDictionary* _incidentsForDepartureSequence;
	NSMutableDictionary* _incidentsForSystem;
	NSMutableDictionary* _incidentsForLine;
	NSMutableDictionary* _incidentsForMapItem;
	NSSet* _blockedIncidentEntities;
	NSDate* _referenceDate;

}

@property (nonatomic,retain) NSDate * referenceDate;              //@synthesize referenceDate=_referenceDate - In the implementation block
-(void)resetCache;
-(void)setReferenceDate:(NSDate *)arg1 ;
-(NSDate *)referenceDate;
-(id)_incidentsAffectingMuid:(unsigned long long)arg1 ;
-(id)incidentsForSystem:(id)arg1 ;
-(id)incidentsForLine:(id)arg1 ;
-(id)initWithLineItem:(id)arg1 ;
-(id)validIncidents;
-(id)incidentsForMapItem:(id)arg1 ;
-(id)incidentsForDepartureSequence:(id)arg1 ;
-(id)blockedIncidentEntities;
-(id)initWithMapItem:(id)arg1 ;
@end
