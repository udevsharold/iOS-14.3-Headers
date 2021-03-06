/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOABDebugPanelExperimentBranch : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _branchLabel;
	NSString* _branchName;
	NSString* _experimentId;
	NSString* _experimentName;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_branchLabel : 1;
		unsigned read_branchName : 1;
		unsigned read_experimentId : 1;
		unsigned read_experimentName : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasExperimentId; 
@property (nonatomic,retain) NSString * experimentId; 
@property (nonatomic,readonly) BOOL hasExperimentName; 
@property (nonatomic,retain) NSString * experimentName; 
@property (nonatomic,readonly) BOOL hasBranchLabel; 
@property (nonatomic,retain) NSString * branchLabel; 
@property (nonatomic,readonly) BOOL hasBranchName; 
@property (nonatomic,retain) NSString * branchName; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasExperimentId;
-(NSString *)experimentName;
-(NSString *)experimentId;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setExperimentName:(NSString *)arg1 ;
-(BOOL)hasBranchName;
-(void)setBranchLabel:(NSString *)arg1 ;
-(void)setBranchName:(NSString *)arg1 ;
-(BOOL)hasExperimentName;
-(BOOL)hasBranchLabel;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setExperimentId:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)branchLabel;
-(NSString *)branchName;
@end

