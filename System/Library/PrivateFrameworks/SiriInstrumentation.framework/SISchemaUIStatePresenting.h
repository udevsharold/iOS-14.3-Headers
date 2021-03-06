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

@interface SISchemaUIStatePresenting : PBCodable {

	int _presentationType;
	SCD_Struct_SI1 _has;

}

@property (assign,nonatomic) int presentationType;                  //@synthesize presentationType=_presentationType - In the implementation block
@property (assign,nonatomic) BOOL hasPresentationType; 
@property (nonatomic,readonly) NSData * jsonData; 
-(void)setPresentationType:(int)arg1 ;
-(NSData *)jsonData;
-(int)presentationType;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasPresentationType;
-(void)setHasPresentationType:(BOOL)arg1 ;
@end

