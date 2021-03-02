/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPFeedbackIdLookupParameters, GEORPFeedbackImageUploadParameters, GEORPFeedbackLayoutConfigParameters, GEORPFeedbackQueryParameters, GEORPFeedbackSubmissionParameters;

@interface GEORPFeedbackRequestParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPFeedbackIdLookupParameters* _idLookupParameters;
	GEORPFeedbackImageUploadParameters* _imageUploadParameters;
	GEORPFeedbackLayoutConfigParameters* _layoutConfigParameters;
	GEORPFeedbackQueryParameters* _queryParameters;
	GEORPFeedbackSubmissionParameters* _submissionParameters;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_idLookupParameters : 1;
		unsigned read_imageUploadParameters : 1;
		unsigned read_layoutConfigParameters : 1;
		unsigned read_queryParameters : 1;
		unsigned read_submissionParameters : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSubmissionParameters; 
@property (nonatomic,retain) GEORPFeedbackSubmissionParameters * submissionParameters; 
@property (nonatomic,readonly) BOOL hasIdLookupParameters; 
@property (nonatomic,retain) GEORPFeedbackIdLookupParameters * idLookupParameters; 
@property (nonatomic,readonly) BOOL hasQueryParameters; 
@property (nonatomic,retain) GEORPFeedbackQueryParameters * queryParameters; 
@property (nonatomic,readonly) BOOL hasImageUploadParameters; 
@property (nonatomic,retain) GEORPFeedbackImageUploadParameters * imageUploadParameters; 
@property (nonatomic,readonly) BOOL hasLayoutConfigParameters; 
@property (nonatomic,retain) GEORPFeedbackLayoutConfigParameters * layoutConfigParameters; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)initWithMerchantIndustryCode:(long long)arg1 mapsIdentifier:(unsigned long long)arg2 merchantName:(id)arg3 merchantRawName:(id)arg4 merchantIndustryCategory:(id)arg5 merchantURL:(id)arg6 merchantFormattedAddress:(id)arg7 transactionTime:(double)arg8 transactionType:(id)arg9 transactionLocation:(GEOCoarseLocationLatLng)arg10 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(GEORPFeedbackSubmissionParameters *)submissionParameters;
-(GEORPFeedbackIdLookupParameters *)idLookupParameters;
-(GEORPFeedbackImageUploadParameters *)imageUploadParameters;
-(GEORPFeedbackLayoutConfigParameters *)layoutConfigParameters;
-(void)setSubmissionParameters:(GEORPFeedbackSubmissionParameters *)arg1 ;
-(BOOL)hasQueryParameters;
-(void)setIdLookupParameters:(GEORPFeedbackIdLookupParameters *)arg1 ;
-(void)setQueryParameters:(GEORPFeedbackQueryParameters *)arg1 ;
-(void)setImageUploadParameters:(GEORPFeedbackImageUploadParameters *)arg1 ;
-(void)setLayoutConfigParameters:(GEORPFeedbackLayoutConfigParameters *)arg1 ;
-(BOOL)hasSubmissionParameters;
-(BOOL)hasIdLookupParameters;
-(BOOL)hasImageUploadParameters;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)isPOIEnrichment;
-(unsigned long long)hash;
-(BOOL)hasLayoutConfigParameters;
-(id)description;
-(id)initWithJSON:(id)arg1 ;
-(GEORPFeedbackQueryParameters *)queryParameters;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithIncidentLocation:(id)arg1 type:(int)arg2 historicalLocations:(id)arg3 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg1 ;
@end
