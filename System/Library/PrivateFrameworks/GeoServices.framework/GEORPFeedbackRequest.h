/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOABSecondPartyPlaceRequestClientMetaData, GEOPDAnalyticMetadata, GEORPClientCapabilities, GEOPDClientMetadata, GEORPDebugSettings, NSMutableArray, GEORPFeedbackRequestParameters, GEORPFeedbackUserInfo;

@interface GEORPFeedbackRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOABSecondPartyPlaceRequestClientMetaData* _abClientMetadata;
	GEOPDAnalyticMetadata* _analyticMetadata;
	GEORPClientCapabilities* _clientCapabilities;
	GEOPDClientMetadata* _clientMetadata;
	GEORPDebugSettings* _debugSettings;
	NSMutableArray* _displayLanguages;
	GEORPFeedbackRequestParameters* _feedbackRequestParameters;
	GEORPFeedbackUserInfo* _userInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _feedbackRequestType;
	struct {
		unsigned has_feedbackRequestType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_abClientMetadata : 1;
		unsigned read_analyticMetadata : 1;
		unsigned read_clientCapabilities : 1;
		unsigned read_clientMetadata : 1;
		unsigned read_debugSettings : 1;
		unsigned read_displayLanguages : 1;
		unsigned read_feedbackRequestParameters : 1;
		unsigned read_userInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasFeedbackRequestType; 
@property (assign,nonatomic) int feedbackRequestType; 
@property (nonatomic,readonly) BOOL hasFeedbackRequestParameters; 
@property (nonatomic,retain) GEORPFeedbackRequestParameters * feedbackRequestParameters; 
@property (nonatomic,readonly) BOOL hasUserInfo; 
@property (nonatomic,retain) GEORPFeedbackUserInfo * userInfo; 
@property (nonatomic,readonly) BOOL hasAnalyticMetadata; 
@property (nonatomic,retain) GEOPDAnalyticMetadata * analyticMetadata; 
@property (nonatomic,readonly) BOOL hasClientMetadata; 
@property (nonatomic,retain) GEOPDClientMetadata * clientMetadata; 
@property (nonatomic,readonly) BOOL hasClientCapabilities; 
@property (nonatomic,retain) GEORPClientCapabilities * clientCapabilities; 
@property (nonatomic,retain) NSMutableArray * displayLanguages; 
@property (nonatomic,readonly) BOOL hasAbClientMetadata; 
@property (nonatomic,retain) GEOABSecondPartyPlaceRequestClientMetaData * abClientMetadata; 
@property (nonatomic,readonly) BOOL hasDebugSettings; 
@property (nonatomic,retain) GEORPDebugSettings * debugSettings; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)displayLanguageType;
-(void)setClientCapabilities:(GEORPClientCapabilities *)arg1 ;
-(unsigned long long)displayLanguagesCount;
-(void)setUserInfo:(GEORPFeedbackUserInfo *)arg1 ;
-(unsigned)requestTypeCode;
-(id)initWithFeedbackRequestParameters:(id)arg1 userCredentials:(id)arg2 pushToken:(id)arg3 allowContactBackAtEmailAddress:(id)arg4 traits:(id)arg5 ;
-(void)clearDisplayLanguages;
-(GEOABSecondPartyPlaceRequestClientMetaData *)abClientMetadata;
-(Class)responseClass;
-(id)init;
-(void)setAnalyticMetadata:(GEOPDAnalyticMetadata *)arg1 ;
-(GEOPDAnalyticMetadata *)analyticMetadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(GEORPClientCapabilities *)clientCapabilities;
-(BOOL)hasClientMetadata;
-(id)displayLanguageAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasUserInfo;
-(BOOL)readFrom:(id)arg1 ;
-(GEORPDebugSettings *)debugSettings;
-(void)setFeedbackRequestType:(int)arg1 ;
-(void)setFeedbackRequestParameters:(GEORPFeedbackRequestParameters *)arg1 ;
-(void)setDebugSettings:(GEORPDebugSettings *)arg1 ;
-(int)feedbackRequestType;
-(void)setHasFeedbackRequestType:(BOOL)arg1 ;
-(BOOL)hasFeedbackRequestType;
-(BOOL)hasDebugSettings;
-(id)feedbackRequestTypeAsString:(int)arg1 ;
-(int)StringAsFeedbackRequestType:(id)arg1 ;
-(BOOL)hasFeedbackRequestParameters;
-(BOOL)hasAbClientMetadata;
-(GEORPFeedbackUserInfo *)userInfo;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)isPOIEnrichment;
-(unsigned long long)hash;
-(GEORPFeedbackRequestParameters *)feedbackRequestParameters;
-(BOOL)hasClientCapabilities;
-(id)description;
-(void)setClientMetadata:(GEOPDClientMetadata *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasAnalyticMetadata;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)_sharedInitWithRequestParameters:(id)arg1 userInfo:(id)arg2 traits:(id)arg3 ;
-(void)_initForSubmissionParameters;
-(void)_setupSubmissionParameters;
-(id)initWithFeedbackRequestParameters:(id)arg1 traits:(id)arg2 ;
-(id)initWithFeedbackRequestParameters:(id)arg1 userInfo:(id)arg2 traits:(id)arg3 ;
-(GEOPDClientMetadata *)clientMetadata;
-(id)initWithData:(id)arg1 ;
-(void)setAbClientMetadata:(GEOABSecondPartyPlaceRequestClientMetaData *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setDisplayLanguages:(NSMutableArray *)arg1 ;
-(id)jsonRepresentation;
-(NSMutableArray *)displayLanguages;
-(void)addDisplayLanguage:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
@end

