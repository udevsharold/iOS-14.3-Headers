/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaSpeechResultSelected : PBCodable {

	NSString* _resultCandidateId;
	int _source;
	SCD_Struct_SI1 _has;
	BOOL _hasResultCandidateId;

}

@property (nonatomic,copy) NSString * resultCandidateId;              //@synthesize resultCandidateId=_resultCandidateId - In the implementation block
@property (assign,nonatomic) BOOL hasResultCandidateId;               //@synthesize hasResultCandidateId=_hasResultCandidateId - In the implementation block
@property (assign,nonatomic) int source;                              //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)hasSource;
-(NSData *)jsonData;
-(void)setHasSource:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)resultCandidateId;
-(void)setResultCandidateId:(NSString *)arg1 ;
-(int)source;
-(id)initWithDictionary:(id)arg1 ;
-(void)setSource:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasResultCandidateId;
-(void)setHasResultCandidateId:(BOOL)arg1 ;
@end
