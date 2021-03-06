/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface HDCodableFHIRResourceForAPI : PBCodable <NSCopying> {

	long long _fhirVersionMajor;
	long long _fhirVersionMinor;
	long long _fhirVersionPatch;
	double _lastUpdatedDate;
	NSData* _data;
	NSString* _identifier;
	NSString* _resourceType;
	NSString* _sourceURL;
	SCD_Struct_HD10 _has;

}

@property (nonatomic,readonly) BOOL hasResourceType; 
@property (nonatomic,retain) NSString * resourceType;                 //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasData; 
@property (nonatomic,retain) NSData * data;                           //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceURL; 
@property (nonatomic,retain) NSString * sourceURL;                    //@synthesize sourceURL=_sourceURL - In the implementation block
@property (assign,nonatomic) BOOL hasLastUpdatedDate; 
@property (assign,nonatomic) double lastUpdatedDate;                  //@synthesize lastUpdatedDate=_lastUpdatedDate - In the implementation block
@property (assign,nonatomic) BOOL hasFhirVersionMajor; 
@property (assign,nonatomic) long long fhirVersionMajor;              //@synthesize fhirVersionMajor=_fhirVersionMajor - In the implementation block
@property (assign,nonatomic) BOOL hasFhirVersionMinor; 
@property (assign,nonatomic) long long fhirVersionMinor;              //@synthesize fhirVersionMinor=_fhirVersionMinor - In the implementation block
@property (assign,nonatomic) BOOL hasFhirVersionPatch; 
@property (assign,nonatomic) long long fhirVersionPatch;              //@synthesize fhirVersionPatch=_fhirVersionPatch - In the implementation block
-(NSString *)resourceType;
-(void)setResourceType:(NSString *)arg1 ;
-(NSString *)sourceURL;
-(void)setSourceURL:(NSString *)arg1 ;
-(BOOL)hasSourceURL;
-(BOOL)hasData;
-(BOOL)hasIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)data;
-(BOOL)readFrom:(id)arg1 ;
-(double)lastUpdatedDate;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)description;
-(void)setData:(NSData *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasResourceType;
-(void)writeTo:(id)arg1 ;
-(void)setLastUpdatedDate:(double)arg1 ;
-(void)setHasLastUpdatedDate:(BOOL)arg1 ;
-(BOOL)hasLastUpdatedDate;
-(void)setFhirVersionMajor:(long long)arg1 ;
-(void)setHasFhirVersionMajor:(BOOL)arg1 ;
-(BOOL)hasFhirVersionMajor;
-(void)setFhirVersionMinor:(long long)arg1 ;
-(void)setHasFhirVersionMinor:(BOOL)arg1 ;
-(BOOL)hasFhirVersionMinor;
-(void)setFhirVersionPatch:(long long)arg1 ;
-(void)setHasFhirVersionPatch:(BOOL)arg1 ;
-(BOOL)hasFhirVersionPatch;
-(long long)fhirVersionMajor;
-(long long)fhirVersionMinor;
-(long long)fhirVersionPatch;
@end

