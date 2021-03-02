/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaVoiceTriggerMetrics : PBCodable {

	int _implicitUtterances;
	int _explicitUtterances;
	int _firstPassTriggers;
	SCD_Struct_LT0 _has;

}

@property (assign,nonatomic) int implicitUtterances;                  //@synthesize implicitUtterances=_implicitUtterances - In the implementation block
@property (assign,nonatomic) BOOL hasImplicitUtterances; 
@property (assign,nonatomic) int explicitUtterances;                  //@synthesize explicitUtterances=_explicitUtterances - In the implementation block
@property (assign,nonatomic) BOOL hasExplicitUtterances; 
@property (assign,nonatomic) int firstPassTriggers;                   //@synthesize firstPassTriggers=_firstPassTriggers - In the implementation block
@property (assign,nonatomic) BOOL hasFirstPassTriggers; 
@property (nonatomic,readonly) NSData * jsonData; 
-(NSData *)jsonData;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setImplicitUtterances:(int)arg1 ;
-(void)setExplicitUtterances:(int)arg1 ;
-(void)setFirstPassTriggers:(int)arg1 ;
-(int)implicitUtterances;
-(int)explicitUtterances;
-(int)firstPassTriggers;
-(BOOL)hasImplicitUtterances;
-(void)setHasImplicitUtterances:(BOOL)arg1 ;
-(BOOL)hasExplicitUtterances;
-(void)setHasExplicitUtterances:(BOOL)arg1 ;
-(BOOL)hasFirstPassTriggers;
-(void)setHasFirstPassTriggers:(BOOL)arg1 ;
@end
