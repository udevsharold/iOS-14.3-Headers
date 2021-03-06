/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PeopleSuggester/PeopleSuggester-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ContactEmbeddingAnalysisPETNeuralNetEmbedding;

@interface ContactEmbeddingAnalysisPETContactEmbeddingAnalysisEvent : PBCodable <NSCopying> {

	NSString* _contactId;
	ContactEmbeddingAnalysisPETNeuralNetEmbedding* _embeddingsAfterActivation;
	ContactEmbeddingAnalysisPETNeuralNetEmbedding* _embeddingsBeforeActivation;

}

@property (nonatomic,retain) ContactEmbeddingAnalysisPETNeuralNetEmbedding * embeddingsBeforeActivation;              //@synthesize embeddingsBeforeActivation=_embeddingsBeforeActivation - In the implementation block
@property (nonatomic,retain) ContactEmbeddingAnalysisPETNeuralNetEmbedding * embeddingsAfterActivation;               //@synthesize embeddingsAfterActivation=_embeddingsAfterActivation - In the implementation block
@property (nonatomic,retain) NSString * contactId;                                                                    //@synthesize contactId=_contactId - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setContactId:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)contactId;
-(void)setEmbeddingsBeforeActivation:(ContactEmbeddingAnalysisPETNeuralNetEmbedding *)arg1 ;
-(void)setEmbeddingsAfterActivation:(ContactEmbeddingAnalysisPETNeuralNetEmbedding *)arg1 ;
-(ContactEmbeddingAnalysisPETNeuralNetEmbedding *)embeddingsBeforeActivation;
-(ContactEmbeddingAnalysisPETNeuralNetEmbedding *)embeddingsAfterActivation;
-(void)writeTo:(id)arg1 ;
@end

