/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEORPDetails, GEORPNotification, NSString, GEORPResolution;

@interface GEORPProblemStatus : PBCodable <NSCopying> {

	PBDataReader* _reader;
	double _creationDate;
	GEORPDetails* _details;
	GEORPNotification* _notification;
	NSString* _problemId;
	GEORPResolution* _problemResolution;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _problemState;
	struct {
		unsigned has_creationDate : 1;
		unsigned has_problemState : 1;
		unsigned read_details : 1;
		unsigned read_notification : 1;
		unsigned read_problemId : 1;
		unsigned read_problemResolution : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasProblemId; 
@property (nonatomic,retain) NSString * problemId; 
@property (assign,nonatomic) BOOL hasCreationDate; 
@property (assign,nonatomic) double creationDate; 
@property (assign,nonatomic) BOOL hasProblemState; 
@property (assign,nonatomic) int problemState; 
@property (nonatomic,readonly) BOOL hasProblemResolution; 
@property (nonatomic,retain) GEORPResolution * problemResolution; 
@property (nonatomic,readonly) BOOL hasNotification; 
@property (nonatomic,retain) GEORPNotification * notification; 
@property (nonatomic,readonly) BOOL hasDetails; 
@property (nonatomic,retain) GEORPDetails * details; 
+(BOOL)isValid:(id)arg1 ;
-(GEORPNotification *)notification;
-(void)setNotification:(GEORPNotification *)arg1 ;
-(double)creationDate;
-(NSString *)problemId;
-(void)setHasCreationDate:(BOOL)arg1 ;
-(void)setCreationDate:(double)arg1 ;
-(id)init;
-(void)setProblemId:(NSString *)arg1 ;
-(BOOL)hasProblemId;
-(GEORPResolution *)problemResolution;
-(void)setProblemState:(int)arg1 ;
-(void)setProblemResolution:(GEORPResolution *)arg1 ;
-(int)problemState;
-(void)setHasProblemState:(BOOL)arg1 ;
-(BOOL)hasProblemState;
-(id)problemStateAsString:(int)arg1 ;
-(int)StringAsProblemState:(id)arg1 ;
-(BOOL)hasProblemResolution;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasNotification;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setDetails:(GEORPDetails *)arg1 ;
-(id)description;
-(BOOL)hasCreationDate;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(GEORPDetails *)details;
-(BOOL)hasDetails;
-(void)writeTo:(id)arg1 ;
@end
