/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitIncident.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSArray, PBUnknownFields, NSMutableArray;

@interface MSPTransitStorageIncident : PBCodable <GEOTransitIncident, NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _muid;
	NSMutableArray* _affectedEntities;
	unsigned _creationDatetime;
	unsigned _endDatetime;
	NSString* _fullDescription;
	int _iconType;
	unsigned _lastUpdatedDatetime;
	NSString* _messageForNonRoutable;
	NSString* _messageForRoutePlanning;
	NSString* _messageForRouteStepping;
	unsigned _startDatetime;
	NSString* _summary;
	NSString* _title;
	BOOL _blockingIncident;
	SCD_Struct_MS5 _has;

}

@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * summary; 
@property (nonatomic,readonly) NSString * fullDescription; 
@property (nonatomic,readonly) NSString * messageForRoutePlanning; 
@property (nonatomic,readonly) NSString * messageForRouteStepping; 
@property (nonatomic,readonly) NSString * messageForNonRoutable; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) int iconType; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * lastUpdated; 
@property (getter=isBlockingIncident,nonatomic,readonly) BOOL blockingIncident; 
@property (nonatomic,readonly) NSArray * affectedEntities; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                                        //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasSummary; 
@property (nonatomic,retain) NSString * summary;                                             //@synthesize summary=_summary - In the implementation block
@property (nonatomic,readonly) BOOL hasFullDescription; 
@property (nonatomic,retain) NSString * fullDescription;                                     //@synthesize fullDescription=_fullDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageForRoutePlanning; 
@property (nonatomic,retain) NSString * messageForRoutePlanning;                             //@synthesize messageForRoutePlanning=_messageForRoutePlanning - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageForRouteStepping; 
@property (nonatomic,retain) NSString * messageForRouteStepping;                             //@synthesize messageForRouteStepping=_messageForRouteStepping - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageForNonRoutable; 
@property (nonatomic,retain) NSString * messageForNonRoutable;                               //@synthesize messageForNonRoutable=_messageForNonRoutable - In the implementation block
@property (assign,nonatomic) BOOL hasStartDatetime; 
@property (assign,nonatomic) unsigned startDatetime;                                         //@synthesize startDatetime=_startDatetime - In the implementation block
@property (assign,nonatomic) BOOL hasEndDatetime; 
@property (assign,nonatomic) unsigned endDatetime;                                           //@synthesize endDatetime=_endDatetime - In the implementation block
@property (assign,nonatomic) BOOL hasIconType; 
@property (assign,nonatomic) int iconType;                                                   //@synthesize iconType=_iconType - In the implementation block
@property (assign,nonatomic) BOOL hasCreationDatetime; 
@property (assign,nonatomic) unsigned creationDatetime;                                      //@synthesize creationDatetime=_creationDatetime - In the implementation block
@property (assign,nonatomic) BOOL hasLastUpdatedDatetime; 
@property (assign,nonatomic) unsigned lastUpdatedDatetime;                                   //@synthesize lastUpdatedDatetime=_lastUpdatedDatetime - In the implementation block
@property (assign,nonatomic) BOOL hasBlockingIncident; 
@property (assign,nonatomic) BOOL blockingIncident;                                          //@synthesize blockingIncident=_blockingIncident - In the implementation block
@property (nonatomic,retain) NSMutableArray * affectedEntities;                              //@synthesize affectedEntities=_affectedEntities - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)affectedEntitiesType;
-(void)setHasMuid:(BOOL)arg1 ;
-(NSString *)fullDescription;
-(NSDate *)creationDate;
-(NSString *)summary;
-(NSDate *)endDate;
-(BOOL)hasTitle;
-(unsigned long long)muid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setSummary:(NSString *)arg1 ;
-(void)setIconType:(int)arg1 ;
-(BOOL)hasIconType;
-(void)setHasIconType:(BOOL)arg1 ;
-(id)iconTypeAsString:(int)arg1 ;
-(int)StringAsIconType:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSDate *)lastUpdated;
-(unsigned long long)hash;
-(int)iconType;
-(NSString *)description;
-(NSDate *)startDate;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)setTitle:(NSString *)arg1 ;
-(void)setStartDatetime:(unsigned)arg1 ;
-(void)setEndDatetime:(unsigned)arg1 ;
-(void)setCreationDatetime:(unsigned)arg1 ;
-(unsigned)startDatetime;
-(void)setHasStartDatetime:(BOOL)arg1 ;
-(id)initWithIncident:(id)arg1 ;
-(BOOL)hasStartDatetime;
-(unsigned)endDatetime;
-(void)setHasEndDatetime:(BOOL)arg1 ;
-(BOOL)hasEndDatetime;
-(unsigned)creationDatetime;
-(void)setHasCreationDatetime:(BOOL)arg1 ;
-(BOOL)hasCreationDatetime;
-(BOOL)hasSummary;
-(NSString *)messageForNonRoutable;
-(BOOL)hasMuid;
-(NSString *)messageForRoutePlanning;
-(NSString *)messageForRouteStepping;
-(BOOL)isBlockingIncident;
-(NSArray *)affectedEntities;
-(void)writeTo:(id)arg1 ;
-(NSString *)title;
-(void)setFullDescription:(NSString *)arg1 ;
-(void)setMessageForRoutePlanning:(NSString *)arg1 ;
-(void)setMessageForRouteStepping:(NSString *)arg1 ;
-(void)setMessageForNonRoutable:(NSString *)arg1 ;
-(void)setLastUpdatedDatetime:(unsigned)arg1 ;
-(void)setBlockingIncident:(BOOL)arg1 ;
-(void)addAffectedEntities:(id)arg1 ;
-(BOOL)hasLastUpdatedDatetime;
-(unsigned)lastUpdatedDatetime;
-(BOOL)blockingIncident;
-(unsigned long long)affectedEntitiesCount;
-(void)clearAffectedEntities;
-(id)affectedEntitiesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasFullDescription;
-(BOOL)hasMessageForRoutePlanning;
-(BOOL)hasMessageForRouteStepping;
-(BOOL)hasMessageForNonRoutable;
-(void)setHasLastUpdatedDatetime:(BOOL)arg1 ;
-(void)setHasBlockingIncident:(BOOL)arg1 ;
-(BOOL)hasBlockingIncident;
-(void)setAffectedEntities:(NSArray *)arg1 ;
@end

